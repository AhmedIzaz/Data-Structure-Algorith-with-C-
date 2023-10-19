package main

import (
	"fmt"
)

func swap(array []int, i int, j int) {
	temp := array[i]
	array[i] = array[j]
	array[j] = temp
}

func bubble_sort(array []int, length int) {
	for i := 0; i < length; i++ {
		for j := 0; j < length-i-1; j++ {
			if array[j] > array[j+1] {
				swap(array, j, j+1)
			}
		}
	}
}

func main() {
	array := []int{21, 341, 2, 23, 11, 11, 1, 3345}
	bubble_sort(array, len(array))
	fmt.Println(array)
}
