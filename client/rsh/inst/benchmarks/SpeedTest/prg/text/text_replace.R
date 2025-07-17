execute <- function(size = 1000L) {
  replace <- function(s, c, v) {
    k <- 1
    for (i in seq_along(s)) {
      for (j in 1:nchar(s[i])) {
        if (substr(s[i],j,j) == c) {
          substr(s[i],j,j) <- substr(v,k,k)
          k <- k+1
          if (k > nchar(v)) k <- 1
        }
      }
    }
    s
  }

  s1 <- rep(c("abc.defg.hijklm","x.y.z",".","pqrstuvwxyz"), size)
  s2 <- paste("x",1:(size*100),"y")
  s3 <- rep(c("a...b","..c..","....","x.y"), size)
  
  r1 <- NULL
  for (i in 1:30) r1 <- replace(s1, ".", "ABCDEFG")
  r2 <- replace(paste("x",1:100000,"y"), "4", "ABCDEFGHIJK")
  r3 <- NULL
  for (i in 1:30) r3 <- replace(s3, ".", "ABCDEFGHIJKLMNOPQRSTUVWXYZ")

  list(r1 = r1[1], r2 = r2[50], r3 = r3[1])
}