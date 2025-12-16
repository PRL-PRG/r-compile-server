#? stdlib
`isS3method` <- function (method, f, class, envir = parent.frame()) 
{
    if (missing(method)) {
        method <- paste(f, class, sep = ".")
    }
    else {
        f.c <- strsplit(method, ".", fixed = TRUE)[[1]]
        nfc <- length(f.c)
        if (nfc < 2 || !is.character(f.c) || f.c[[1L]] == "") 
            return(FALSE)
        if (nfc == 2) {
            f <- f.c[[1L]]
            class <- f.c[[2L]]
        }
        else {
            for (j in 2:nfc) if (isS3method(f = paste(f.c[1:(j - 
                1)], collapse = "."), class = paste(f.c[j:nfc], 
                collapse = "."), envir = envir)) 
                return(TRUE)
            return(FALSE)
        }
    }
    if (!any(f == getKnownS3generics())) {
        if (!nzchar(f <- findGeneric(f, envir))) 
            return(FALSE)
    }
    if (!is.null(m <- get0(method, envir = envir, mode = "function"))) {
        pkg <- if (isNamespace(em <- environment(m))) 
            environmentName(em)
        else if (is.primitive(m)) 
            "base"
        return(is.na(match(method, tools::nonS3methods(pkg))))
    }
    defenv <- if (!is.na(w <- .knownS3Generics[f])) 
        asNamespace(w)
    else if (f %in% tools:::.get_internal_S3_generics()) 
        .BaseNamespaceEnv
    else {
        genfun <- get(f, mode = "function", envir = envir)
        if (.isMethodsDispatchOn() && methods::is(genfun, "genericFunction")) 
            genfun <- methods::selectMethod(genfun, "ANY")
        .defenv_for_S3_registry(genfun)
    }
    S3Table <- defenv[[".__S3MethodsTable__."]]
    exists(method, envir = S3Table, inherits = FALSE)
}

# Examples
isS3method("t")           # FALSE - it is an S3 generic
isS3method("t.default")   # TRUE
isS3method("t.ts")        # TRUE
isS3method("t.test")      # FALSE
isS3method("t.data.frame")# TRUE
isS3method("t.lm")        # FALSE - not existing
isS3method("t.foo.bar")   # FALSE - not existing

## S3 methods with "4 parts" in their name:
ff <- c("as.list", "as.matrix", "is.na", "row.names", "row.names<-")
for(m in ff) if(isS3method(m)) stop("wrongly declared an S3 method: ", m)
(m4 <- paste(ff, "data.frame", sep="."))
for(m in m4) if(!isS3method(m)) stop("not an S3 method: ", m)

stopifnot(
  !isS3method("t"), !isS3method("t.test"), !isS3method("qr.coef"), !isS3method("sort.list"),
  isS3method("t.default"), isS3method("t.ts"), isS3method("t.data.frame"),
  !isS3method("t.lm"), !isS3method("t.foo.bar"))


