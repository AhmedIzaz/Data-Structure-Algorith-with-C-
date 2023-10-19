package main

import (
	"fmt"
)

func binarySearch(array []int, value int) int {
	index := -1
	left := 0
	right := len(array)
	for left <= right {
		mid := (left + ((right - left) / 2))
		if array[mid] == value {
			index = mid
			break
		}
		if value < array[mid] {
			right = mid - 1
		} else {
			left = mid + 1
		}

	}
	return index
}

func main() {
	array := []int{1, 2, 3, 4, 5, 6}
	fmt.Printf("In the index number : %v", binarySearch(array, 6))
}
