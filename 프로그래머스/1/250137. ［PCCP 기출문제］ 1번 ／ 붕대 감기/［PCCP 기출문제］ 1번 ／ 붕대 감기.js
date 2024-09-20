function solution(bandage, health, attacks) {
    let playerHealth = health;
    let prevAttackTime = 0;
    
    for (let i = 0; i < attacks.length; i++) {
        playerHealth += bandage[1] * (attacks[i][0] - prevAttackTime - 1);
        
        if ((attacks[i][0] - prevAttackTime - 1) / bandage[0] >= 1) {
            playerHealth += bandage[2] * Math.floor((attacks[i][0] - prevAttackTime - 1) / bandage[0]);
        }
        
        prevAttackTime = attacks[i][0];
        
        if (playerHealth > health) {
            playerHealth = health;
        }
        
        playerHealth -= attacks[i][1];
        
        if (playerHealth <= 0) {
            return -1;
        }
    }
    
    return playerHealth;
}