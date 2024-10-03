function solution(date1, date2) {
    return (Date.parse(date1) < Date.parse(date2)) | 0;
}