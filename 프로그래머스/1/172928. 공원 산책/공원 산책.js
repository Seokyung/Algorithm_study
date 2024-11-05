function solution(park, routes) {
    let answer = [0, 0];
    const width = park[0].length;
    const height = park.length;
    const colPark = [];
    
    const directionMap = {
        "N": (ans, dis) => [ans[0] - dis, ans[1]],
        "S": (ans, dis) => [ans[0] + dis, ans[1]],
        "W": (ans, dis) => [ans[0], ans[1] - dis],
        "E": (ans, dis) => [ans[0], ans[1] + dis],
    };

    const distanceMap = {
        "N": (ans, loc) => colPark[ans[1]].slice(loc[0], ans[0] + 1).includes("X"),
        "S": (ans, loc) => colPark[ans[1]].slice(ans[0], loc[0] + 1).includes("X"),
        "W": (ans, loc) => park[ans[0]].slice(loc[1], ans[1] + 1).includes("X"),
        "E": (ans, loc) => park[ans[0]].slice(ans[1], loc[1] + 1).includes("X"),
    };
    
    for (let i = 0; i < width; i++) {
        let col = '';
        for (let j = 0; j < height; j++) {
            if (park[j][i] === "S") {
                answer = [j, i];
            }
            col += park[j][i];
        }
        colPark.push(col);
    }
    
    for (let i = 0; i < routes.length; i++) {
        const [direction, distance] = routes[i].split(' ');
        const location = directionMap[direction](answer, parseInt(distance));
        if ((location[1] > -1) && (location[1] < width) &&
            (location[0] > -1) && (location[0] < height)) {
            const res = distanceMap[direction](answer, location);
            if (!res) {
                answer = location;
            }
        }
    }
    
    return answer;
}