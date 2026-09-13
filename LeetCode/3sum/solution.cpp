   right--;

                    // Skip duplicates for left
                    while (left < right && nums[left] == nums[left - 1]) left++;

                    // Skip duplicates for right
                    while (left < right && nums[right] == nums[right + 1]) right--;
                }
                else if (sum < 0) {
                    left++;
                } 
                else {
                    right--;
                }
            }
        }

        return ans;
    }
};