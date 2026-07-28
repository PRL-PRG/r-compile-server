#? stdlib
`str.default` <- function (object, max.level = NA, vec.len = strO$vec.len, digits.d = strO$digits.d, 
    nchar.max = 128, give.attr = TRUE, drop.deparse.attr = strO$drop.deparse.attr, 
    give.head = TRUE, give.length = give.head, width = getOption("width"), 
    nest.lev = 0, indent.str = paste(rep.int(" ", max(0, nest.lev + 
        1)), collapse = ".."), comp.str = "$ ", no.list = FALSE, 
    envir = baseenv(), strict.width = strO$strict.width, formatNum = strO$formatNum, 
    list.len = strO$list.len, deparse.lines = strO$deparse.lines, 
    ...) 
{
    oDefs <- c("vec.len", "digits.d", "strict.width", "formatNum", 
        "drop.deparse.attr", "list.len", "deparse.lines")
    strO <- getOption("str")
    if (!is.list(strO)) {
        warning("invalid options(\"str\") -- using defaults instead")
        strO <- strOptions()
    }
    else {
        if (!all(names(strO) %in% oDefs)) 
            warning(gettextf("invalid components in options(\"str\"): %s", 
                paste(setdiff(names(strO), oDefs), collapse = ", ")), 
                domain = NA)
        strO <- modifyList(strOptions(), strO)
    }
    strict.width <- match.arg(strict.width, choices = c("no", 
        "cut", "wrap"))
    if (strict.width != "no") {
        ss <- capture.output(str.default(object, max.level = max.level, 
            vec.len = vec.len, digits.d = digits.d, nchar.max = nchar.max, 
            give.attr = give.attr, give.head = give.head, give.length = give.length, 
            width = width, nest.lev = nest.lev, indent.str = indent.str, 
            comp.str = comp.str, no.list = no.list || is.data.frame(object), 
            envir = envir, strict.width = "no", formatNum = formatNum, 
            list.len = list.len, deparse.lines = deparse.lines, 
            ...))
        if (strict.width == "wrap") {
            nind <- nchar(indent.str) + 2
            ss <- strwrap(ss, width = width, exdent = nind)
        }
        if (length(iLong <- which(nchar(ss) > width))) {
            sL <- ss[iLong]
            k <- as.integer(width - 2L)
            if (any(i <- grepl("\"", substr(sL, k + 1L, nchar(sL))))) {
                ss[iLong[i]] <- paste0(substr(sL[i], 1, k - 1L), 
                  "\"..")
                ss[iLong[!i]] <- paste0(substr(sL[!i], 1, k), 
                  "..")
            }
            else {
                ss[iLong] <- paste0(substr(sL, 1, k), "..")
            }
        }
        cat(ss, sep = "\n")
        return(invisible())
    }
    oo <- options(digits = digits.d)
    on.exit(options(oo))
    le <- length(object)[1L]
    if (is.na(le)) {
        warning("'str.default': 'le' is NA, so taken as 0", immediate. = TRUE)
        le <- 0
        vec.len <- 0
    }
    nchar.w <- function(x) nchar(x, type = "w", allowNA = TRUE)
    ncharN <- function(x) {
        r <- nchar(x, type = "w", allowNA = TRUE)
        if (anyNA(r)) {
            iN <- is.na(r)
            r[iN] <- nchar(x[iN], type = "bytes")
        }
        r
    }
    maybe_truncate <- function(x, nx = nchar.w(x), S = "\"", 
        ch = "| __truncated__") {
        ok <- if (anyNA(nx)) 
            !is.na(nx)
        else TRUE
        if (any(lrg <- ok & nx > nchar.max)) {
            nc <- nchar(ch <- paste0(S, ch))
            if (nchar.max <= nc) 
                stop(gettextf("'nchar.max = %d' is too small", 
                  nchar.max), domain = NA)
            x.lrg <- x[lrg]
            tr.x <- strtrim(x.lrg, nchar.max - nc)
            if (any(ii <- tr.x != x.lrg & paste0(tr.x, S) != 
                x.lrg)) {
                x[lrg][ii] <- paste0(tr.x[ii], ch)
            }
        }
        x
    }
    pClass <- function(cls) paste0("Class", if (length(cls) > 
        1) 
        "es", " '", paste(cls, collapse = "', '"), "' ")
    nfS <- names(fStr <- formals())
    strSub <- function(obj, ...) {
        nf <- setdiff(nfS, c("object", "give.length", "comp.str", 
            "no.list", names(match.call())[-(1:2)], "..."))
        aList <- as.list(fStr)[nf]
        aList[] <- lapply(nf, function(n) eval(as.name(n)))
        do.call(function(...) str(obj, ...), c(aList, list(...)), 
            quote = TRUE)
    }
    le.str <- if (is.na(le)) 
        " __no length(.)__ "
    else if (give.length) {
        if (le > 0) 
            paste0("[1:", paste(le), "]")
        else "(0)"
    }
    else ""
    v.len <- vec.len
    std.attr <- "names"
    cl <- if ((S4 <- isS4(object))) 
        class(object)
    else oldClass(object)
    has.class <- S4 || !is.null(cl)
    mod <- ""
    char.like <- FALSE
    if (give.attr) 
        a <- attributes(object)
    dCtrl <- eval(formals(deparse)$control)
    if (drop.deparse.attr) 
        dCtrl <- dCtrl[dCtrl != "showAttributes"]
    width.cutoff <- min(500L, max(20L, width - 10L))
    nlines <- deparse.lines %||% (1L + as.integer(max(nchar.max, 
        width.cutoff)/8))
    deParse <- function(.) deparse(., width.cutoff = width.cutoff, 
        control = dCtrl, nlines = nlines)
    n.of. <- function(n, singl, plural) paste(n, ngettext(n, 
        singl, plural))
    n.of <- function(n, noun) n.of.(n, noun, paste0(noun, "s"))
    l.i <- function(i) paste0("[[", i, "]]")
    arrLenstr <- function(obj) {
        rnk <- length(di. <- dim(obj))
        di <- paste0(ifelse(di. > 1, "1:", ""), di., ifelse(di. > 
            0, "", " "))
        pDi <- function(...) paste(c("[", ..., "]"), collapse = "")
        if (rnk == 1) 
            pDi(di[1L], "(1d)")
        else pDi(paste0(di[-rnk], ", "), di[rnk])
    }
    if (is.ts <- stats::is.ts(object)) 
        str1.ts <- function(o, lestr) {
            tsp.a <- stats::tsp(o)
            paste0(" Time-Series ", lestr, " from ", format(tsp.a[1L]), 
                " to ", format(tsp.a[2L]), ":")
        }
    if (is.null(object)) 
        cat(" NULL\n")
    else if (S4) {
        trygetSlots <- function(x, nms) {
            r <- tryCatch(sapply(nms, methods::slot, object = x, 
                simplify = FALSE), error = conditionMessage)
            if (is.list(r)) 
                r
            else {
                warning("Not a validObject(): ", r, call. = FALSE)
                r <- attributes(x)
                r <- r[names(r) != "class"]
                dp <- list(methods::getDataPart(x, NULL.for.none = TRUE))
                if (!is.null(dp)) 
                  names(dp) <- methods:::.dataSlot(nms)
                c(r, dp)
            }
        }
        if (methods::is(object, "envRefClass")) {
            cld <- tryCatch(object$getClass(), error = function(e) e)
            if (inherits(cld, "error")) {
                cat("Prototypical reference class", " '", paste(cl, 
                  collapse = "', '"), "' [package \"", attr(cl, 
                  "package"), "\"]\n", sep = "")
                return(invisible())
            }
            nFlds <- names(cld@fieldClasses)
            a <- sapply(nFlds, function(ch) object[[ch]], simplify = FALSE)
            cat("Reference class", " '", paste(cl, collapse = "', '"), 
                "' [package \"", attr(cl, "package"), "\"] with ", 
                n.of(length(a), "field"), "\n", sep = "")
            strSub(a, no.list = TRUE, give.length = give.length, 
                nest.lev = nest.lev + 1)
            meths <- names(cld@refMethods)
            oMeths <- meths[is.na(match(meths, methods:::envRefMethodNames))]
            cat(indent.str, "and ", n.of(length(meths), "method"), 
                sep = "")
            sNms <- names(cld@slots)
            if (lo <- length(oMeths)) {
                cat(", of which", lo, ngettext(lo, "is", "are", 
                  domain = NA), " possibly relevant")
                if (is.na(max.level) || nest.lev < max.level) 
                  cat(":", strwrap(paste(sort(oMeths), collapse = ", "), 
                    indent = 2, exdent = 2, prefix = indent.str, 
                    width = width), sep = "\n")
                else cat("\n")
            }
            if (length(sNms <- sNms[sNms != ".xData"])) {
                cat(" and ", n.of(length(sNms), "slot"), "\n", 
                  sep = "")
                sls <- trygetSlots(object, sNms)
                strSub(sls, comp.str = "@ ", no.list = TRUE, 
                  give.length = give.length, indent.str = paste(indent.str, 
                    ".."), nest.lev = nest.lev + 1)
            }
            else if (lo == 0) 
                cat(".\n")
        }
        else {
            sNms <- methods::.slotNames(object)
            cat("Formal class", " '", paste(cl, collapse = "', '"), 
                "' [package \"", attr(cl, "package"), "\"] with ", 
                n.of(length(sNms), "slot"), "\n", sep = "")
            s <- trygetSlots(object, sNms)
            strSub(s, comp.str = "@ ", no.list = TRUE, give.length = give.length, 
                indent.str = paste(indent.str, ".."), nest.lev = nest.lev + 
                  1)
            if (give.attr && length(nmsa <- setdiff(names(a), 
                c("class", sNms)))) 
                strSub(a[nmsa], no.list = TRUE, give.length = give.length, 
                  indent.str = paste(indent.str, ".."), nest.lev = nest.lev + 
                    1)
        }
        return(invisible())
    }
    else if (is.function(object)) {
        cat(if (is.null(ao <- args(object))) 
            deParse(object)
        else {
            dp <- deParse(ao)
            paste(dp[-length(dp)], collapse = "\n")
        }, "\n")
    }
    else if (is.list(object)) {
        i.pl <- is.pairlist(object)
        is.d.f <- is.data.frame(object)
        if (le == 0) {
            if (is.d.f) 
                std.attr <- c(std.attr, "class", "row.names")
            else cat(" ", if (!is.null(names(object))) 
                "Named ", if (i.pl) 
                "pair", "list()\n", sep = "")
        }
        else {
            if (irregCl <- has.class && (length(uncObj <- unclass(object)) != 
                le || identical(object[[1L]], object) || inherits(tryCatch(object[[le]], 
                error = identity), "error"))) {
                le <- length(object <- uncObj)
                std.attr <- c(std.attr, "class")
            }
            if (no.list || (has.class && any(sapply(paste0("str.", 
                cl), function(ob) exists(ob, mode = "function", 
                inherits = TRUE))))) {
                std.attr <- c(std.attr, "class", if (is.d.f) "row.names")
            }
            else {
                cat(if (i.pl) 
                  "Dotted pair list"
                else if (irregCl) 
                  paste(pClass(cl), "hidden list")
                else "List", " of ", as.character(le), "\n", 
                  sep = "")
            }
            if (is.na(max.level) || nest.lev < max.level) {
                nms <- names(object)
                if ("promise" %in% (oTypes <- vapply(object, 
                  typeof, ""))) {
                  envP <- object
                  if (is.null(nms)) 
                    names(envP) <- rep.int("", le)
                  if (any(zch <- !nzchar(names(envP)["promise" == 
                    oTypes]))) 
                    names(envP)[zch] <- l.i(which(zch))
                }
                nam.ob <- if (is.null(nms)) 
                  rep.int("", le)
                else {
                  ncn <- nchar.w(nms)
                  if (anyNA(ncn)) 
                    ncn <- vapply(nms, format.info, 0L)
                  format(nms, width = max(ncn), justify = "left")
                }
                for (i in seq_len(min(list.len, le))) {
                  cat(indent.str, comp.str, nam.ob[i], ":", sep = "")
                  envir <- if (oTypes[[i]] == "promise") {
                    structure(envP, nam = as.name(names(envP)[i]))
                  }
                  strSub(object[[i]], give.length = give.length, 
                    nest.lev = nest.lev + 1, indent.str = paste(indent.str, 
                      ".."))
                }
                if (list.len < le) 
                  cat(indent.str, "[list output truncated]\n")
            }
        }
    }
    else {
        if (is.factor(object)) {
            nl <- length(lev.att <- levels(object))
            if (!is.character(lev.att)) {
                warning("'object' does not have valid levels()")
                nl <- 0
            }
            else {
                w <- min(max(width/2, 10), 1000)
                if (nl > w) 
                  lev.att <- lev.att[seq_len(w)]
                n.l <- length(lev.att)
                lev.att <- encodeString(lev.att, na.encode = FALSE, 
                  quote = "\"")
            }
            ord <- is.ordered(object)
            object <- unclass(object)
            if (nl) {
                lenl <- cumsum(3 + (ncharN(lev.att) - 2))
                ml <- if (n.l <= 1 || lenl[n.l] <= 13) 
                  n.l
                else which.max(lenl > 13)
                lev.att <- maybe_truncate(lev.att[seq_len(ml)])
            }
            else ml <- length(lev.att <- "")
            lsep <- if (ord) 
                "<"
            else ","
            str1 <- paste0(if (ord) 
                " Ord.f"
            else " F", "actor", if (is.array(object)) 
                arrLenstr(object), " w/ ", nl, " level", if (nl != 
                1) 
                "s", if (nl) 
                " ", if (nl) 
                paste0(lev.att, collapse = lsep), if (ml < nl) 
                paste0(lsep, ".."), ":")
            std.attr <- c("levels", "class", if (is.array(object)) "dim")
        }
        else if (is.ts) {
            str1 <- str1.ts(object, if (isA <- is.array(object)) 
                arrLenstr(object)
            else le.str)
            std.attr <- c("tsp", "class", if (isA) "dim")
        }
        else if (is.vector(object) || is.atomic(object) || (is.language(object) && 
            !is.expression(object) && !any(cl == "formula"))) {
            if (is.atomic(object)) {
                mod <- substr(mode(object), 1, 4)
                if (mod == "nume") 
                  mod <- if (is.integer(object)) 
                    "int"
                  else "num"
                else if (mod == "char") {
                  mod <- "chr"
                  char.like <- TRUE
                }
                else if (mod == "comp") 
                  mod <- "cplx"
                if (is.array(object)) {
                  le.str <- arrLenstr(object)
                  if (m <- match("AsIs", cl, 0L)) 
                    oldClass(object) <- cl[-m]
                  std.attr <- "dim"
                }
                else if (!is.null(names(object))) {
                  mod <- paste("Named", mod)
                  std.attr <- std.attr[std.attr != "names"]
                }
                if (has.class) {
                  cl <- cl[1L]
                  if (cl != mod && substr(cl, 1L, nchar(mod)) != 
                    mod) 
                    mod <- paste0("'", cl, "' ", mod)
                  std.attr <- c(std.attr, "class")
                }
                str1 <- if (le == 1 && !is.array(object)) 
                  paste(NULL, mod)
                else paste0(" ", mod, if (le > 0) 
                  " ", le.str)
            }
            else {
                mod <- typeof(object)
                str1 <- switch(mod, call = " call", language = " language", 
                  symbol = " symbol", expression = " ", name = " name", 
                  paste("\t\t#>#>", mod, NULL))
            }
        }
        else if (typeof(object) %in% c("externalptr", "weakref", 
            "environment", "bytecode", "object")) {
            if (has.class) 
                cat(pClass(cl))
            le <- v.len <- 0
            str1 <- if (is.environment(object)) 
                format(object)
            else paste0("<", typeof(object), ">")
            has.class <- TRUE
            std.attr <- "class"
        }
        else if (has.class) {
            cat("Class", if (length(cl) > 1) 
                "es", " '", paste(cl, collapse = "', '"), "' ", 
                sep = "")
            uo <- unclass(object)
            if (!is.null(attributes(uo)$class)) {
                xtr <- c(if (identical(uo, object)) {
                  class(uo) <- NULL
                  "unclass()-immune"
                } else if (!is.object(object)) "not-object")
                if (!is.null(xtr)) 
                  cat("{", xtr, "} ", sep = "")
            }
            strSub(uo, indent.str = paste(indent.str, ".."), 
                nest.lev = nest.lev + 1)
            return(invisible())
        }
        else if (is.atomic(object)) {
            if ((1 == length(a <- attributes(object))) && (names(a) == 
                "names")) 
                str1 <- paste(" Named vector", le.str)
            else {
                str1 <- paste(" atomic", le.str)
            }
        }
        else if (typeof(object) == "promise") {
            cat(" promise to ")
            objExp <- if (is.null(envir) || is.null(nam <- attr(envir, 
                "nam"))) 
                substitute(.x., as.environment(list(.x. = object)))
            else eval(bquote(substitute(.(nam), envir)))
            strSub(objExp)
            return(invisible())
        }
        else {
            str1 <- paste("length", le)
        }
        if ((is.language(object) || !is.atomic(object)) && !has.class) {
            mod <- mode(object)
            give.mode <- FALSE
            trimEnds <- function(ch) sub(" +$", "", sub("^ +", 
                " ", ch))
            if (any(mod == c("call", "language", "(", "symbol")) || 
                is.environment(object)) {
                if (mod == "(") 
                  give.mode <- TRUE
                typ <- typeof(object)
                object <- deParse(object)
                le <- length(object)
                format.fun <- function(x) x
                v.len <- round(0.5 * v.len)
                if (le > 1 && typ == "language" && object[1L] == 
                  "{" && object[le] == "}") {
                  v.len <- v.len + 2
                  if (le >= 3) {
                    object <- c(object[1L], paste(trimEnds(object[2:(le - 
                      1)]), collapse = ";"), object[le])
                    le <- length(object)
                  }
                }
            }
            else if (mod == "expression") {
                format.fun <- function(x) trimEnds(deParse(as.expression(x)))
                v.len <- round(0.75 * v.len)
            }
            else if (mod == "name") {
                object <- paste(object)
            }
            else if (mod == "argument") {
                format.fun <- deParse
            }
            else {
                if (mod == "...") {
                  format.fun <- function(x) {
                    le <- length(x)
                    hasNm <- nzchar(nm <- names(x) %||% rep.int("", 
                      le))
                    nm[hasNm] <- paste0(nm[hasNm], "=")
                    paste0("(", paste(paste0(nm, "*"), collapse = ", "), 
                      ")")
                  }
                }
                give.mode <- TRUE
            }
            if (give.mode) 
                str1 <- paste0(str1, ", mode \"", mod, "\":")
        }
        else if (is.logical(object)) {
            v.len <- 1.5 * v.len
            format.fun <- formatNum
        }
        else if (is.numeric(object)) {
            iv.len <- round(2.5 * v.len)
            if (iSurv <- inherits(object, "Surv")) 
                std.attr <- c(std.attr, "class")
            int.surv <- iSurv || is.integer(object)
            if (!int.surv) {
                ob <- if (le > iv.len) 
                  object[seq_len(iv.len)]
                else object
                ao <- abs(ob <- unclass(ob[!is.na(ob)]))
            }
            else if (iSurv) {
                nc <- ncol(object)
                le <- length(object <- as.character(object))
            }
            if (int.surv || (all(ao > 1e-10 | ao == 0) && all(ao < 
                1e+10 | ao == 0) && all(abs(ob - signif(ob, digits.d)) <= 
                9e-16 * ao))) {
                if (!iSurv || nc == 2L) 
                  v.len <- iv.len
                format.fun <- formatNum
            }
            else {
                v.len <- round(1.25 * v.len)
                format.fun <- formatNum
            }
        }
        else if (is.complex(object)) {
            v.len <- round(0.75 * v.len)
            format.fun <- formatNum
        }
        if (char.like) {
            max.len <- max(100L, width%/%3L + 1L, if (!missing(vec.len)) vec.len)
            if (le > max.len) 
                le <- length(object <- object[seq_len(max.len)])
            trimWidth <- as.integer(nchar.max)
            encObj <- tryCatch(strtrim(object, trimWidth), error = function(e) NULL)
            encObj <- if (is.null(encObj)) {
                e <- encodeString(object, quote = "\"", na.encode = FALSE)
                r <- tryCatch(strtrim(e, trimWidth), error = function(.) NULL)
                if (is.null(r)) 
                  e
                else r
            }
            else encodeString(encObj, quote = "\"", na.encode = FALSE)
            if (le > 0) 
                encObj <- maybe_truncate(encObj)
            v.len <- if (missing(vec.len)) {
                max(1, sum(cumsum(1 + if (le > 0) ncharN(encObj) else 0) < 
                  width - (4 + 5 * nest.lev + nchar(str1, type = "w"))))
            }
            else round(v.len)
            ile <- min(le, v.len)
            if (ile >= 1) 
                object <- encObj[seq_len(ile)]
            formObj <- function(x) paste(as.character(x), collapse = " ")
        }
        else {
            if (!exists("format.fun")) 
                format.fun <- switch(mod, num = , cplx = format, 
                  language = deParse, as.character)
            ile <- min(v.len, le)
            formObj <- function(x) maybe_truncate(paste(format.fun(x), 
                collapse = " "), S = "")
        }
        cat(if (give.head) 
            paste0(str1, " "), formObj(if (ile >= 1 && mod != 
            "...") 
            object[seq_len(ile)]
        else if (v.len > 0) 
            object), if (le > v.len) 
            " ...", "\n", sep = "")
    }
    if (give.attr) {
        nam <- names(a)
        give.L <- give.length || identical(attr(give.length, 
            "from"), "data.frame")
        for (i in seq_along(a)) if (all(nam[i] != std.attr)) {
            cat(indent.str, paste0("- attr(*, \"", nam[i], "\")="), 
                sep = "")
            strSub(a[[i]], give.length = give.L, indent.str = paste(indent.str, 
                ".."), nest.lev = nest.lev + 1)
        }
    }
    invisible()
}
