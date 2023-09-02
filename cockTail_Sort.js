// 随机生成一个乱序数组
let arr = Array.from(new Array(10), () => ~~(Math.random() * 100))

console.log('Source array is [ %s ]\n', arr.join(', '))

// 鸡尾酒排序
function cocktailSort(arr) {
    const len = arr.length
    let swapped // 是否有过交换，一旦没有任何元素交换，排序结束
    let step = 1
    let i, left = 0, right = len - 1;
    while (left < right) {
        // 先从左扫到右，把最大的放到最右边
        for (i = left; i < right; i++) {
            swapped = false
            if (arr[i] > arr[i + 1]) {
                [arr[i], arr[i + 1]] = [arr[i + 1], arr[i]]
                swapped = true
            }
        }
        console.log('Step %d: [ %s ] ( left -> right )', step++, arr.join(', '))
        right--;
        // 再从右扫到左，把最小的放到最左边
        for (i = right; i > left; i--) {
            if (arr[i - 1] > arr[i]) {
                [arr[i], arr[i - 1]] = [arr[i - 1], arr[i]]
            }
        }
        left++;
        console.log('Step %d: [ %s ] ( right -> left )', step++, arr.join(', '))
        if (!swapped) break
    }
    console.log('\nSorted array is [ %s ]', arr.join(', '))
}
cocktailSort(arr)