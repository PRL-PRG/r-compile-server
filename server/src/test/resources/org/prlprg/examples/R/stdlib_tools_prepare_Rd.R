#? stdlib
`prepare_Rd` <- function (Rd, encoding = "unknown", defines = NULL, stages = NULL, 
    fragment = FALSE, options = RweaveRdDefaults, stage2 = TRUE, 
    stage3 = TRUE, ..., msglevel = 0) 
{
    concordance <- NULL
    if (is.character(Rd)) {
        Rdfile <- Rd
        Rd <- eval(substitute(parse_Rd(f, encoding = enc, fragment = frag, 
            ...), list(f = Rd, enc = encoding, frag = fragment)))
    }
    else if (inherits(Rd, "connection")) {
        Rdfile <- summary(Rd)$description
        Rd <- parse_Rd(Rd, encoding = encoding, fragment = fragment, 
            ...)
    }
    else {
        Rdfile <- attr(Rd, "Rdfile")
        concordance <- attr(Rd, "concordance")
    }
    srcref <- attr(Rd, "srcref")
    if (is.null(Rdfile) && !is.null(srcref)) 
        Rdfile <- attr(srcref, "srcfile")$filename
    if (fragment) 
        meta <- NULL
    else {
        pratt <- attr(Rd, "prepared")
        if (is.null(pratt)) 
            pratt <- 0L
        if ("build" %in% stages) 
            Rd <- processRdSexprs(Rd, "build", options, macros = attr(Rd, 
                "macros"))
        if (!is.null(defines)) 
            Rd <- processRdIfdefs(Rd, defines)
        for (stage in c("install", "render")) if (stage %in% 
            stages) 
            Rd <- processRdSexprs(Rd, stage, options, macros = attr(Rd, 
                "macros"))
        if (is.null(concordance)) {
            concordance <- try(as.Rconcordance(unlist(Rd[RdTags(Rd) == 
                "COMMENT"]), silent = TRUE))
            if (inherits(concordance, "try-error")) 
                concordance <- NULL
        }
        if (pratt < 2L && stage2) 
            Rd <- prepare2_Rd(Rd, Rdfile, stages)
        meta <- attr(Rd, "meta")
        if (pratt < 3L && stage3) 
            Rd <- prepare3_Rd(Rd, Rdfile, msglevel = msglevel)
        Rd <- setDynamicFlags(Rd, apply(sapply(Rd, getDynamicFlags), 
            1, any))
    }
    structure(Rd, Rdfile = Rdfile, class = "Rd", meta = meta, 
        srcref = srcref, concordance = concordance)
}
