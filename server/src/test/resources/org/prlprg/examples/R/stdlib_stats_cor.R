#? stdlib
`cor` <- function (x, y = NULL, use = "everything", method = c("pearson", 
    "kendall", "spearman")) 
{
    na.method <- pmatch(use, c("all.obs", "complete.obs", "pairwise.complete.obs", 
        "everything", "na.or.complete"))
    if (is.na(na.method)) 
        stop("invalid 'use' argument")
    method <- match.arg(method)
    if (is.data.frame(y)) 
        y <- as.matrix(y)
    if (is.data.frame(x)) 
        x <- as.matrix(x)
    if (!is.matrix(x) && is.null(y)) 
        stop("supply both 'x' and 'y' or a matrix-like 'x'")
    if (!(is.numeric(x) || is.logical(x))) 
        stop("'x' must be numeric")
    stopifnot(is.atomic(x))
    if (!is.null(y)) {
        if (!(is.numeric(y) || is.logical(y))) 
            stop("'y' must be numeric")
        stopifnot(is.atomic(y))
    }
    Rank <- function(u) {
        if (length(u) == 0L) 
            u
        else if (is.matrix(u)) {
            if (nrow(u) > 1L) 
                apply(u, 2L, rank, na.last = "keep")
            else row(u)
        }
        else rank(u, na.last = "keep")
    }
    if (method == "pearson") 
        .Call(C_cor, x, y, na.method, FALSE)
    else if (na.method %in% c(2L, 5L)) {
        if (is.null(y)) {
            .Call(C_cor, Rank(na.omit(x)), NULL, na.method, method == 
                "kendall")
        }
        else {
            nas <- attr(na.omit(cbind(x, y)), "na.action")
            dropNA <- function(x, nas) {
                if (length(nas)) {
                  if (is.matrix(x)) 
                    x[-nas, , drop = FALSE]
                  else x[-nas]
                }
                else x
            }
            .Call(C_cor, Rank(dropNA(x, nas)), Rank(dropNA(y, 
                nas)), na.method, method == "kendall")
        }
    }
    else if (na.method != 3L) {
        x <- Rank(x)
        if (!is.null(y)) 
            y <- Rank(y)
        .Call(C_cor, x, y, na.method, method == "kendall")
    }
    else {
        if (is.null(y)) {
            ncy <- ncx <- ncol(x)
            if (ncx == 0) 
                stop("'x' is empty")
            r <- matrix(0, nrow = ncx, ncol = ncy)
            for (i in seq_len(ncx)) {
                for (j in seq_len(i)) {
                  x2 <- x[, i]
                  y2 <- x[, j]
                  ok <- complete.cases(x2, y2)
                  x2 <- rank(x2[ok])
                  y2 <- rank(y2[ok])
                  r[i, j] <- if (any(ok)) 
                    .Call(C_cor, x2, y2, 1L, method == "kendall")
                  else NA
                }
            }
            r <- r + t(r) - diag(diag(r))
            rownames(r) <- colnames(x)
            colnames(r) <- colnames(x)
            r
        }
        else {
            if (length(x) == 0L || length(y) == 0L) 
                stop("both 'x' and 'y' must be non-empty")
            matrix_result <- is.matrix(x) || is.matrix(y)
            if (!is.matrix(x)) 
                x <- matrix(x, ncol = 1L)
            if (!is.matrix(y)) 
                y <- matrix(y, ncol = 1L)
            ncx <- ncol(x)
            ncy <- ncol(y)
            r <- matrix(0, nrow = ncx, ncol = ncy)
            for (i in seq_len(ncx)) {
                for (j in seq_len(ncy)) {
                  x2 <- x[, i]
                  y2 <- y[, j]
                  ok <- complete.cases(x2, y2)
                  x2 <- rank(x2[ok])
                  y2 <- rank(y2[ok])
                  r[i, j] <- if (any(ok)) 
                    .Call(C_cor, x2, y2, 1L, method == "kendall")
                  else NA
                }
            }
            rownames(r) <- colnames(x)
            colnames(r) <- colnames(y)
            if (matrix_result) 
                r
            else drop(r)
        }
    }
}

# Examples
var(1:10)  # 9.166667

var(1:5, 1:5) # 2.5

## Two simple vectors
cor(1:10, 2:11) # == 1

## Correlation Matrix of Multivariate sample:
(Cl <- cor(longley))
## Graphical Correlation Matrix:
symnum(Cl) # highly correlated

## Spearman's rho  and  Kendall's tau
symnum(clS <- cor(longley, method = "spearman"))
symnum(clK <- cor(longley, method = "kendall"))
## How much do they differ?
i <- lower.tri(Cl)
cor(cbind(P = Cl[i], S = clS[i], K = clK[i]))


## cov2cor() scales a covariance matrix by its diagonal
##           to become the correlation matrix.
cov2cor # see the function definition {and learn ..}
stopifnot(all.equal(Cl, cov2cor(cov(longley))),
          all.equal(cor(longley, method = "kendall"),
            cov2cor(cov(longley, method = "kendall"))))

##--- Missing value treatment:

C1 <- cov(swiss)
range(eigen(C1, only.values = TRUE)$values) # 6.19        1921

## swM := "swiss" with  3 "missing"s :
swM <- swiss
colnames(swM) <- abbreviate(colnames(swiss), minlength=6)
swM[1,2] <- swM[7,3] <- swM[25,5] <- NA # create 3 "missing"

## Consider all 5 "use" cases :
(C. <- cov(swM)) # use="everything"  quite a few NA's in cov.matrix
try(cov(swM, use = "all")) # Error: missing obs...
C2 <- cov(swM, use = "complete")
stopifnot(identical(C2, cov(swM, use = "na.or.complete")))
range(eigen(C2, only.values = TRUE)$values) # 6.46   1930
C3 <- cov(swM, use = "pairwise")
range(eigen(C3, only.values = TRUE)$values) # 6.19   1938

## Kendall's tau doesn't change much:
symnum(Rc <- cor(swM, method = "kendall", use = "complete"))
symnum(Rp <- cor(swM, method = "kendall", use = "pairwise"))
symnum(R. <- cor(swiss, method = "kendall"))

## "pairwise" is closer componentwise,
summary(abs(c(1 - Rp/R.)))
summary(abs(c(1 - Rc/R.)))

## but "complete" is closer in Eigen space:
EV <- function(m) eigen(m, only.values=TRUE)$values
summary(abs(1 - EV(Rp)/EV(R.)) / abs(1 - EV(Rc)/EV(R.)))

