function solution(price, money, count) {
    let changedPrice = price;
    let leftMoney = money;
    
    for (let i = 1; i <= count; i++) {
        leftMoney -= price * i;
    }

    return (leftMoney < 0) ? Math.abs(leftMoney) : 0;
}

/* 가우스 공식 이용 */
// const tmp = (price * (count * (count + 1) / 2)) - money;
// return tmp > 0 ? tmp : 0;