fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2750539783;
    st `.expand_ORCID_identifier` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2750539783(x, style) {
  (reg x:*, reg style:*) -+> V { var x:*, var style:*, reg style_isMissing:L, reg style_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg names:cls, reg r4:V, reg r5:V, reg grepl:cls, reg ___:cls, reg r6:V, reg p:p(V +), reg x3:*, reg x4:V, reg p1:p(V +), reg r9:V, reg r10:V, reg any:cls, reg r11:V, reg c:L, reg ___1:cls, reg r12:V, reg r13:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r14:V, reg p2:p(V +), reg r16:V, reg style1:*, reg style2:V, reg r17:V, reg c2:L, reg sprintf:cls, reg oid:*, reg oid1:V, reg p3:p(V +), reg oid2:*, reg oid3:V, reg p4:p(V +), reg r20:V, reg r21:V, reg sprintf1:cls, reg oid4:*, reg oid5:V, reg p5:p(V +), reg r23:V, reg l:*, reg c3:L, reg r25:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r27:V, reg dx3:V, reg ind2:*, reg ind3:V, reg ___2:cls, reg r28:V, reg x9:*, reg x10:V |
    mkenv;
    st x = x;
    style_isMissing = missing.0(style);
    if style_isMissing then L0("text") else L0(style);
  L0(style_orDefault):
    st style = style_orDefault;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L1(r1):
    c = `as.logical`(r1);
    if c then L17() else L3();
  L8():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L9():
    r = dyn base(<lang `<-`(ind, `(`(`&`(`(`(`==`(names(x), "ORCID")), grepl(`:::`(tools, .ORCID_iD_variants_regexp), x))))>);
    goto L1(r);
  L2(r3):
    r5 = `==`(r3, "ORCID");
    grepl = ldf grepl;
    check L14() else D2();
  L3():
    goto L7();
  L7():
    x9 = ld x;
    check L33() else D14();
  L10():
    x1 = ld x;
    check L12() else D0();
  L11():
    r2 = dyn base1(<sym x>);
    goto L2(r2);
  L17():
    ___1 = ldf `:::`;
    check L18() else D5();
  D0():
    deopt 4 [x1];
  D2():
    deopt 10 [r5];
  D5():
    deopt 19 [];
  D14():
    deopt 49 [x9];
  L12():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r4 = dyn names(x2);
    check L13() else D1();
  L14():
    p = prom<V +>{
      ___ = ldf `:::`;
      r6 = dyn ___("tools", ".ORCID_iD_variants_regexp");
      return r6;
    };
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r9 = dyn grepl(p, p1);
    check L15() else D3();
  L18():
    r12 = dyn ___1("tools", ".ORCID_iD_canonicalize");
    check L19() else D6();
  L33():
    x10 = force? x9;
    checkMissing(x10);
    popenv;
    return x10;
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r5, r9];
  D6():
    deopt 22 [r12];
  L13():
    goto L2(r4);
  L15():
    r10 = `&&`(r5, r9);
    st ind = r10;
    any = ldf any in base;
    r11 = dyn any(r10);
    check L16() else D4();
  L19():
    checkFun.0(r12);
    r13 = r12 as cls;
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x8):
      ind = ld ind;
      ind1 = force? ind;
      __ = ldf `[` in base;
      r14 = dyn __(x8, ind1);
      goto L0(r14);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r16 = dyn r13(p2);
    check L20() else D7();
  D4():
    deopt 17 [r11];
  D7():
    deopt 25 [r16];
  L16():
    goto L1(r11);
  L20():
    st oid = r16;
    style1 = ld style;
    check L21() else D8();
  D8():
    deopt 27 [style1];
  L21():
    style2 = force? style1;
    checkMissing(style2);
    r17 = `==`(style2, "md");
    c2 = `as.logical`(r17);
    if c2 then L22() else L4();
  L4():
    sprintf1 = ldf sprintf;
    check L26() else D11();
  L5(r21):
    l = ld x;
    c3 = `is.object`(l);
    if c3 then L28() else L29(r21, l);
  L22():
    sprintf = ldf sprintf;
    check L23() else D9();
  D9():
    deopt 32 [];
  D11():
    deopt 38 [];
  L6(r27, dx3):
    st x = dx3;
    goto L7();
  L23():
    p3 = prom<V +>{
      oid = ld oid;
      oid1 = force? oid;
      checkMissing(oid1);
      return oid1;
    };
    p4 = prom<V +>{
      oid2 = ld oid;
      oid3 = force? oid2;
      checkMissing(oid3);
      return oid3;
    };
    r20 = dyn sprintf("[ORCID %s](https://orcid.org/%s)", p3, p4);
    check L24() else D10();
  L26():
    p5 = prom<V +>{
      oid4 = ld oid;
      oid5 = force? oid4;
      checkMissing(oid5);
      return oid5;
    };
    r23 = dyn sprintf1("<https://orcid.org/%s>", p5);
    check L27() else D12();
  L28():
    dr2 = tryDispatchBuiltin.0("[<-", l, r21);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L30() else L29(r21, dr2);
  L29(r25, l2):
    ind2 = ld ind;
    check L31() else D13();
  D10():
    deopt 36 [r20];
  D12():
    deopt 41 [r23];
  D13():
    deopt 43 [r25, l2, r21, ind2];
  L24():
    goto L5(r20);
  L27():
    goto L5(r23);
  L30():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(r21, dx2);
  L31():
    ind3 = force? ind2;
    ___2 = ldf `[<-` in base;
    r28 = dyn ___2(l2, r21, ind3);
    goto L6(r25, r28);
  }
}