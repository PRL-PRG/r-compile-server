fun main() {
  () -+> V { reg c:L |
    mkenv;
    goto L1();
  L1():
    c = `as.logical`(TRUE);
    if c then L2() else L0();
  L0():
    setInvisible.0();
    popenv;
    return NULL;
  L2():
    goto L1();
  }
}