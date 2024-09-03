const getDateDiff = (d1, d2) => {
    let dateCnt = 0;
    const date1 = d1.split('.').map((item) => parseInt(item));
    const date2 = d2.split('.').map((item) => parseInt(item));
    
    let yearDiff = date1[0] - date2[0];
    let monthDiff = date1[1] - date2[1];
    let dayDiff = date1[2] - date2[2];
    
    if (date1[2] >= date2[2]) {
        dateCnt += dayDiff;
    } else {
        monthDiff -= 1;
        dateCnt += (28 + dayDiff);
    }
    
    if (date1[1] >= date2[1]) {
        dateCnt += (monthDiff * 28);
    } else {
        yearDiff -= 1;
        dateCnt += ((12 + monthDiff) * 28);
    }
    
    if (date1[0] >= date2[0]) {
        dateCnt += (yearDiff * 12 * 28);
    }
    
    return dateCnt;
}

function solution(today, terms, privacies) {
    let answer = [];
    
    const termObjs = terms.map((item) => {
        const term = item.split(' ');
        return {
            type: term[0],
            month: term[1],
        }
    });
    
    for (let i = 0; i < privacies.length; i++) {
        const privacy = privacies[i].split(' ');
        const month = termObjs.find((el) => el.type === privacy[1]).month;
        const dateDiff = getDateDiff(today, privacy[0]);
        
        const isTerminated = Math.abs(dateDiff / 28) >= month;
        
        if (isTerminated) {
            answer.push(i + 1);
        }
        
    }
    
    return answer;
}