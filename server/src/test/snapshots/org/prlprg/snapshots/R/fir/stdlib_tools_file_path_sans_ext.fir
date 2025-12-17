fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner882303360;
    st file_path_sans_ext = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner882303360(x, compression) {
  (reg x:*, reg compression:*) -+> V { var x:*, var compression:*, reg compression_isMissing:L, reg compression_orDefault:*, reg compression1:*, reg compression2:V, reg c:L, reg sub:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sub1:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r4:V |
    mkenv;
    st x = x;
    compression_isMissing = missing.0(compression);
    if compression_isMissing then L0(FALSE) else L0(compression);
  L0(compression_orDefault):
    st compression = compression_orDefault;
    compression1 = ld compression;
    check L3() else D0();
  D0():
    deopt 0 [compression1];
  L3():
    compression2 = force? compression1;
    checkMissing(compression2);
    c = `as.logical`(compression2);
    if c then L4() else L1();
  L1():
    goto L2();
  L2():
    sub1 = ldf sub;
    check L8() else D3();
  L4():
    sub = ldf sub;
    check L5() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 12 [];
  L5():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn sub("[.](gz|bz2|xz)$", "", p);
    check L6() else D2();
  L8():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r4 = dyn sub1("([^.]+)\\.[[:alnum:]]+$", "\\1", p1);
    check L9() else D4();
  D2():
    deopt 7 [r1];
  D4():
    deopt 16 [r4];
  L6():
    st x = r1;
    goto L2();
  L9():
    popenv;
    return r4;
  }
}