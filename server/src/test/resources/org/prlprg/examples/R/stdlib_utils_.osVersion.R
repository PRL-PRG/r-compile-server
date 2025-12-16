#? stdlib
`.osVersion` <- function () 
{
    if (.Platform$OS.type == "windows") {
        win.version()
    }
    else if (nzchar(Sys.which("uname"))) {
        uname <- system("uname -a", intern = TRUE)
        os <- sub(" .*", "", uname)
        switch(os, Linux = if (file.exists("/etc/os-release")) {
            tmp <- readLines("/etc/os-release")
            t2 <- if (any(startsWith(tmp, "PRETTY_NAME="))) sub("^PRETTY_NAME=", 
                "", grep("^PRETTY_NAME=", tmp, value = TRUE)[1L]) else if (any(startsWith(tmp, 
                "NAME"))) sub("^NAME=", "", grep("^NAME=", tmp, 
                value = TRUE)[1L]) else "Linux (unknown distro)"
            sub("\"(.*)\"", "\\1", t2)
        } else if (file.exists("/etc/system-release")) {
            readLines("/etc/system-release")
        }, Darwin = {
            ver <- readLines("/System/Library/CoreServices/SystemVersion.plist")
            ind <- grep("ProductUserVisibleVersion", ver)
            ver <- ver[ind + 1L]
            ver <- sub(".*<string>", "", ver)
            ver <- sub("</string>$", "", ver)
            ver1 <- strsplit(ver, ".", fixed = TRUE)[[1L]]
            ver2 <- ver1[2L]
            if (ver1[1L] == "10") sprintf("%s %s %s", ifelse(as.numeric(ver2) < 
                12, "OS X", "macOS"), switch(ver2, `6` = "Snow Leopard", 
                `7` = "Lion", `8` = "Mountain Lion", `9` = "Mavericks", 
                `10` = "Yosemite", `11` = "El Capitan", `12` = "Sierra", 
                `13` = "High Sierra", `14` = "Mojave", `15` = "Catalina", 
                `16` = "Big Sur ...", ""), ver) else if (ver1[1L] <= 
                "14") sprintf("macOS %s %s", switch(ver1[1L], 
                `11` = "Big Sur", `12` = "Monterey", `13` = "Ventura", 
                `14` = "Sonoma", `15` = "Sequoia"), ver) else sprintf("macOS %s", 
                ver)
        }, SunOS = {
            ver <- system("uname -r", intern = TRUE)
            paste("Solaris", strsplit(ver, ".", fixed = TRUE)[[1L]][2L])
        }, uname)
    }
}
