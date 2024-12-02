function solution(hp) {
    let general = 0;
    let soldier = 0;
    
    general += Math.floor(hp / 5);
    hp -= general * 5;
    
    soldier += Math.floor(hp / 3);
    hp -= soldier * 3;
    
    return general + soldier + hp;
}