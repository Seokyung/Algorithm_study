function solution(friends, gifts) {
    let answer = 0;   
    const giftArr = Array.from({length: friends.length}, () => 0);
    const friendArr = Array.from({length: friends.length}, () => Array.from({length: friends.length}, () => 0));
    
    gifts.forEach((el) => {
        const [giver, receiver] = el.split(' ');
        const giverIdx = friends.findIndex((el) => el === giver);
        const receiverIdx = friends.findIndex((el) => el === receiver);
        
        giftArr[giverIdx]++;
        giftArr[receiverIdx]--;
        friendArr[giverIdx][receiverIdx]++;
    });
    
    friendArr.forEach((v1, idx1) => {
        let giftCnt = 0;
        v1.forEach((v2, idx2) => {
            if (v2 > friendArr[idx2][idx1]) {
                giftCnt++;
            } else if ((v2 === friendArr[idx2][idx1]) && (giftArr[idx1] > giftArr[idx2])) {
                giftCnt++;
            }
        });
        if (giftCnt > answer) {
            answer = giftCnt;
        }
    });
    
    return answer;
}