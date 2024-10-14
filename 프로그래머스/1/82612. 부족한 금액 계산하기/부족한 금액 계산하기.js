function solution(price, money, count) {
    let changedPrice = price;
    let leftMoney = money;
    
    for (let i = 1; i <= count; i++) {
        leftMoney -= price * i;
    }

    return (leftMoney < 0) ? Math.abs(leftMoney) : 0;
}