function solution(rank, attendance) {
    const result = rank.map((item, idx) => {
        return {
            id: idx,
            rank: item,
            isAttend: attendance[idx],
        }
    })
    .filter((el) => el.isAttend === true)
    .sort((a, b) => a.rank - b.rank)
    .slice(0, 3);
    
    return (result[0].id * 10000) + (result[1].id * 100) + (result[2].id);
}