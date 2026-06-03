#? stdlib
`vignette` <- function (topic, package = NULL, lib.loc = NULL, all = TRUE) 
{
    vinfo <- tools::getVignetteInfo(package, lib.loc, all)
    if (!missing(topic)) {
        stopic <- substitute(topic)
        if (is.call(stopic) && (deparse1(stopic[[1L]]) == "::")) {
            package <- as.character(stopic[[2L]])
            topic <- as.character(stopic[[3L]])
        }
        else topic <- topic[1L]
        vinfo <- vinfo[vinfo[, "Topic"] == topic, , drop = FALSE]
        if (length(vinfo)) {
            pos <- which(file_test("-f", file.path(vinfo[, "Dir"], 
                "doc", vinfo[, "PDF"])))
            if (!length(pos)) {
                z <- as.list(vinfo[1L, ])
                z$PDF <- ""
            }
            else {
                if (length(pos) > 1L) {
                  pos <- pos[1L]
                  warning(gettextf("vignette %s found more than once,\nusing the one found in %s", 
                    sQuote(topic), sQuote(file.path(vinfo[pos, 
                      "Dir"], "doc"))), call. = FALSE, domain = NA)
                }
                z <- as.list(vinfo[pos, ])
            }
            if (!file_test("-f", file.path(z$Dir, "doc", z$R))) 
                z$R <- ""
            class(z) <- "vignette"
            return(z)
        }
        else warning(gettextf("vignette %s not found", sQuote(topic)), 
            call. = FALSE, domain = NA)
    }
    else {
        title <- if (nrow(vinfo)) {
            paste(vinfo[, "Title"], paste0(rep.int("(source", 
                nrow(vinfo)), ifelse(nzchar(vinfo[, "PDF"]), 
                paste0(", ", tools::file_ext(vinfo[, "PDF"])), 
                ""), ")"))
        }
        else character()
        db <- cbind(Package = basename(vinfo[, "Dir"]), LibPath = dirname(vinfo[, 
            "Dir"]), Item = vinfo[, "Topic"], Title = title)
        footer <- if (all) 
            NULL
        else paste0("Use ", sQuote("vignette(all = TRUE)"), "\n", 
            "to list the vignettes in all *available* packages.")
        structure(class = "packageIQR", list(type = "vignette", 
            title = "Vignettes", header = NULL, results = db, 
            footer = footer))
    }
}

# Examples
## List vignettes from all *attached* packages
vignette(all = FALSE)

## List vignettes from all *installed* packages (can take a long time!):
vignette(all = TRUE)

## The grid intro vignette -- open it

## The same (conditional on existence of the vignettte).
## Note that 'package = *' is much faster in the case of many installed packages:
if(!is.null(v1 <- vignette("grid", package="grid"))) {

  str(v1)
  ## Now let us have a closer look at the code
  
  
  
  

}# if( has vignette "installed")
## A package can have more than one vignette (package grid has several):
vignette(package = "grid")
if(interactive()) {
   ## vignette("rotated")
   ## The same, but without searching for it:
   vignette("rotated", package = "grid")
}

