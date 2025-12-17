fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.persons_from_metadata` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg _get_package_metadata:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg meta:*, reg meta1:V, reg c:L, reg meta3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg is_na:cls, reg r5:V, reg r6:V, reg c1:L, reg tryCatch:cls, reg ___:cls, reg r7:V, reg r8:cls, reg aar:*, reg aar1:V, reg p1:p(V +), reg r10:V, reg p2:p(V +), reg identity:*, reg identity1:V, reg p3:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg aar2:*, reg aar3:V, reg inherits:cls, reg r16:V, reg c2:L, reg aar4:*, reg aar5:V |
    mkenv;
    st dir = dir;
    _get_package_metadata = ldf `.get_package_metadata`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn _get_package_metadata(p);
    check L8() else D1();
  D1():
    deopt 3 [r1];
  L8():
    st meta = r1;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r3):
    r6 = `!`(r3);
    c1 = `as.logical`(r6);
    if c1 then L16() else L2();
  L9():
    meta = ld meta;
    check L11() else D2();
  L10():
    r2 = dyn base(<lang `<-`(aar, `[`(meta, "Authors@R"))>);
    goto L0(r2);
  D2():
    deopt 7 [meta];
  L2():
    goto L6();
  L6():
    popenv;
    return NULL;
  L11():
    meta1 = force? meta;
    checkMissing(meta1);
    c = `is.object`(meta1);
    if c then L12() else L13(meta1);
  L16():
    tryCatch = ldf tryCatch;
    check L17() else D4();
  D4():
    deopt 17 [];
  L1(dx1):
    st aar = dx1;
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(dx1);
    check L15() else D3();
  L12():
    dr = tryDispatchBuiltin.1("[", meta1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(meta3):
    __ = ldf `[` in base;
    r4 = dyn __(meta3, "Authors@R");
    goto L1(r4);
  L17():
    p2 = prom<V +>{
      ___ = ldf `:::`;
      r7 = dyn ___("utils", ".read_authors_at_R_field");
      checkFun.0(r7);
      r8 = r7 as cls;
      p1 = prom<V +>{
        aar = ld aar;
        aar1 = force? aar;
        checkMissing(aar1);
        return aar1;
      };
      r10 = dyn r8(p1);
      return r10;
    };
    p3 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r13 = dyn tryCatch[, error](p2, p3);
    check L18() else D5();
  D3():
    deopt 14 [r5];
  D5():
    deopt 21 [r13];
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L15():
    goto L0(r5);
  L18():
    st aar = r13;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L3(r15):
    c2 = `as.logical`(r15);
    if c2 then L23() else L4();
  L19():
    aar2 = ld aar;
    check L21() else D6();
  L20():
    r14 = dyn base1(<sym aar>, "person");
    goto L3(r14);
  D6():
    deopt 25 [aar2];
  L4():
    goto L6();
  L21():
    aar3 = force? aar2;
    checkMissing(aar3);
    inherits = ldf inherits in base;
    r16 = dyn inherits(aar3, "person", FALSE);
    check L22() else D7();
  L23():
    aar4 = ld aar;
    check L24() else D8();
  D7():
    deopt 30 [r16];
  D8():
    deopt 31 [aar4];
  L22():
    goto L3(r16);
  L24():
    aar5 = force? aar4;
    checkMissing(aar5);
    popenv;
    return aar5;
  }
}