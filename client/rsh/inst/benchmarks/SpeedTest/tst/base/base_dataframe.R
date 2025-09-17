# execute <- function(size=1000L) {
#   M <- matrix(c(1.2,1.3,1.4),1000,30,byrow=TRUE)
#
#   f <- function (n,M) {for (i in 1:n) d <- as.data.frame(M); d}
#   d<-f((size*5),M)
#
#   g <- function (n,d) {for (i in 1:n) M <- as.matrix(d); M}
#   M2<-g((size*3),d)
#
#   r1 <- any(M2!=M)
#
#   h <- function (n,d){ 
#     for (i in 1:n) { d[2,] <- 3.1; d[,3] <- 4.2; d[3,2] <- 5.5 }
#     d
#   }
#   d2<-h(size,d)
#
#   M2[2,] <- 3.1
#   M2[,3] <- 4.2
#   M2[3,2] <- 5.5
#
#   r2 <- any(M2!=as.matrix(d2))
#
#   e <- function (n,d) { 
#       for (i in 1:n) r <- d$V2 * d[,2] * (1:nrow(d)); r }
#   w<-e((size*10),d)
#
#   r3 <- sum(w)
#
#   list(r1,r2,r3)
# }
