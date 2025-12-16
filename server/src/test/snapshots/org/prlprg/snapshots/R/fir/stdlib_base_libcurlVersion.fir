fun main() {
  () -+> V { reg r:cls, reg libcurlVersion:cls, reg r1:V |
    mkenv;
    r = clos inner560854305;
    st libcurlVersion = r;
    libcurlVersion = ldf libcurlVersion;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn libcurlVersion();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner560854305() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg curlVersion:cls, reg r2:V |
    mkenv;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    curlVersion = ldf curlVersion in base;
    r2 = dyn curlVersion();
    check L3() else D0();
  L2():
    r = dyn base(<lang curlVersion()>);
    goto L0(r);
  D0():
    deopt 3 [r2];
  L3():
    goto L0(r2);
  }
}