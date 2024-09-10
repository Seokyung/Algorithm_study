function solution(users, emoticons) {
    // 전역 변수
    let maxJoinedUser = 0;
    let maxProfit = 0;
    let pricePerPercent = [];
    let percentPerEmoticon = Array.from({length: emoticons.length}, () => 0);
    
    // 백트래킹 함수
    const backTracking = (depth) => {
        if (depth === emoticons.length) {
            calculateDiscount();
            return;
        } else {
            for (let i = 1; i <= 4; i++) {
                percentPerEmoticon[depth] = i * 10;
                backTracking(depth + 1);
            }
        }
    }

    // 이모티콘 할인율 및 이모티콘 플러스 가입자, 이모티콘 누적 판매액 계산 함수
    const calculateDiscount = () => {
        let joinedUser = 0;
        let profitSum = 0;
        let discountedEmoticon = Array.from({length: emoticons.length}, () => 0);
    
        for (let i = 0; i < emoticons.length; i++) {
            discountedEmoticon[i] = (emoticons[i] - (emoticons[i] * (percentPerEmoticon[i] / 100)));
        }
        
        for (let i = 0; i < users.length; i++) {
            let purchaseSum = 0;
            
            for (let j = 0; j < emoticons.length; j++) {
                if (percentPerEmoticon[j] >= users[i][0]) {
                    purchaseSum += discountedEmoticon[j];
                }
            }
            
            if (purchaseSum >= users[i][1]) {
                joinedUser++;
            } else {
                profitSum += purchaseSum;
            }
        }
        
        if (joinedUser > maxJoinedUser) {
            maxJoinedUser = joinedUser;
            maxProfit = profitSum;
        } else if ((maxJoinedUser === joinedUser) && (profitSum > maxProfit)) {
            maxJoinedUser = joinedUser;
            maxProfit = profitSum;
        }
        
        return;
    }
    
    backTracking(0);
    
    return [maxJoinedUser, maxProfit];
}