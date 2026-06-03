#? stdlib
`getOneFunAPI` <- function (apitype) 
{
    wrelines <- WRE()
    fpat <- sprintf("^@(%s)fun +", apitype)
    hpat <- sprintf("^@(%s)hdr +", apitype)
    funs <- sub(fpat, "", grep(fpat, wrelines, value = TRUE))
    hdrs <- sub(hpat, "", grep(hpat, wrelines, value = TRUE))
    wAPI <- data.frame(name = funs, loc = rep("WRE", length(names)))
    getHdrAPI <- function(hdr) {
        hfuns <- getFunsHdr(file.path(R.home("include"), hdr))
        data.frame(name = hfuns, loc = rep(hdr, length(hfuns)))
    }
    hAPI <- lapply(hdrs, getHdrAPI)
    val <- rbind(wAPI, do.call(rbind, hAPI))
    val$apitype <- rep(apitype, nrow(val))
    val$unmapped <- unmap(val$name)
    rownames(val) <- NULL
    val
}
