queens <- function(n) {
  board <- rep(0, n)
  return(solve_queens(board, 1, n))
}

solve_queens <- function(board, row, n) {
  if (row == n + 1) {
    return(1)
  }
  
  count <- 0
  for (col in 1:n) {
    if (is_safe(board, row, col, n)) {
      board[row] <- col
      count <- count + solve_queens(board, row + 1, n)
    }
  }
  
  return(count)
}

is_safe <- function(board, row, col, n) {
  for (i in 1:row) {
    if (board[i] == col) {
      return(FALSE)
    }
    if (abs(board[i] - col) == abs(i - 1 - row)) {
      return(FALSE)
    }
  }
  return(TRUE)
}

main <- function() {
  result <- queens(8)
  return(result)
}