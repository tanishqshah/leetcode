/**
 * @param {number} num
 * @return {string}
 */

var numberToWords = function(num) {
    if (!num) return "Zero";

    const units = {
        '1': "One",
        '2': "Two",
        '3': "Three",
        '4': "Four",
        '5': "Five",
        '6': "Six",
        '7': "Seven",
        '8': "Eight",
        '9': "Nine",
        '10': "Ten",
        '11': "Eleven",
        '12': "Twelve",
        '13': "Thirteen",
        '14': "Fourteen",
        '15': "Fifteen",
        '16': "Sixteen",
        '17': "Seventeen",
        '18': "Eighteen",
        '19': "Nineteen",
    }

    const tens = {
        '2': "Twenty",
        '3': "Thirty",
        '4': "Forty",
        '5': "Fifty",
        '6': "Sixty",
        '7': "Seventy",
        '8': "Eighty",
        '9': "Ninety",
    }

    const getHundred = (num) => {
        let str = "";
        if (num >= 100) {
            const n = Math.floor(num/100);
            str += ` ${units[n]} Hundred`;
            num %= 100;
        }

        if (num >= 20) {
            const n = Math.floor(num/10);
            str += ` ${tens[n]}`;
            num %= 10;
        }

        if (num > 0) {
            str += ` ${units[num]}`;
        }

        return str.trim();
    }

    let answer = "";
    if (num >= 1e9) {
        const n = Math.floor(num / 1e9)
        answer += ` ${getHundred(n)} Billion`
        num %= 1e9;
    }

    if (num >= 1e6) {
        const n = Math.floor(num / 1e6)
        answer += ` ${getHundred(n)} Million`
        num %= 1e6;
    }

    if (num >= 1e3) {
        const n = Math.floor(num / 1e3)
        answer += ` ${getHundred(n)} Thousand`
        num %= 1e3;
    }

    answer += ` ${getHundred(num)}`

    return answer.trim();
};