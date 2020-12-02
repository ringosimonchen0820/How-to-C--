var nums = [1,7,3,6,5,6];
var index = 0;
for(var i = 0; i <= nums.length; i++) {
    var sumRight;
    var sumLeft;
    for(j = i; j < index; j--) {
        sumRight += nums[j];
    }
    for(k = i; k < index; k ++ ) {
        sumLeft += nums[k];
    }
    if (sumRight == sumLeft) {
        index = i
        return i;
    }
}