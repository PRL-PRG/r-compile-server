fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2785755493;
    st url_db_from_package_metadata = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2785755493(meta) {
  (reg meta:*) -+> V { var meta:*, reg character:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg meta1:*, reg meta2:V, reg c1:L, reg meta4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg fields:*, reg fields1:V, reg __:cls, reg r4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg i7:I, reg r6:V, reg v:*, reg v1:V, reg is_na:cls, reg r7:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg i14:I, reg r10:V, reg urls:*, reg urls1:V, reg _get_urls_from_DESCRIPTION_URL_field:cls, reg v2:*, reg v3:V, reg p:p(V +), reg r12:V, reg c4:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg meta5:*, reg meta6:V, reg c5:L, reg meta8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r16:V, reg is_na1:cls, reg r17:V, reg r18:V, reg c6:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg urls2:*, reg urls3:V, reg _get_urls_from_DESCRIPTION_Description_field:cls, reg v4:*, reg v5:V, reg p1:p(V +), reg r22:V, reg c7:cls, reg r23:V, reg url_db:cls, reg urls4:*, reg urls5:V, reg p2:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg urls6:*, reg urls7:V, reg length:cls, reg r30:V, reg rep_int:cls, reg r31:V, reg p3:p(V +), reg r33:V |
    mkenv;
    st meta = meta;
    character = ldf character;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    r = dyn character();
    check L14() else D1();
  D1():
    deopt 2 [r];
  L14():
    st urls = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r2):
    st fields = r2;
    meta1 = ld meta;
    check L18() else D3();
  L15():
    c = ldf c in base;
    r3 = dyn c("URL", "BugReports");
    check L17() else D2();
  L16():
    r1 = dyn base("URL", "BugReports");
    goto L0(r1);
  D2():
    deopt 9 [r3];
  D3():
    deopt 11 [meta1];
  L17():
    goto L0(r3);
  L18():
    meta2 = force? meta1;
    checkMissing(meta2);
    c1 = `is.object`(meta2);
    if c1 then L19() else L20(meta2);
  L1(dx1):
    s = toForSeq(dx1);
    l = length(s);
    i = 0;
    goto L2(i);
  L19():
    dr = tryDispatchBuiltin.1("[", meta2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(meta4):
    fields = ld fields;
    check L22() else D4();
  D4():
    deopt 13 [meta4, fields];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L23() else L7();
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L22():
    fields1 = force? fields;
    __ = ldf `[` in base;
    r4 = dyn __(meta4, fields1);
    goto L1(r4);
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st v = x;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L23():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L3(i7, r6):
    c3 = `as.logical`(r6);
    if c3 then L28() else L4();
  L8(r15):
    r18 = `!`(r15);
    c6 = `as.logical`(r18);
    if c6 then L44() else L10();
  L24():
    v = ld v;
    check L26() else D5();
  L25():
    r5 = dyn base1(<sym v>);
    goto L3(i2, r5);
  L37():
    meta5 = ld meta;
    check L39() else D11();
  L38():
    r14 = dyn base3(<lang `<-`(v, `[`(meta, "Description"))>);
    goto L8(r14);
  D5():
    deopt 18 [i2, v];
  D11():
    deopt 42 [meta5];
  L4():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L10():
    goto L12();
  L12():
    url_db = ldf url_db;
    check L52() else D17();
  L26():
    v1 = force? v;
    checkMissing(v1);
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(v1);
    check L27() else D6();
  L28():
    goto L2(i7);
  L39():
    meta6 = force? meta5;
    checkMissing(meta6);
    c5 = `is.object`(meta6);
    if c5 then L40() else L41(meta6);
  L44():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  D6():
    deopt 21 [i2, r7];
  D17():
    deopt 65 [];
  L6(i14, r10):
    st urls = r10;
    goto L2(i14);
  L9(dx3):
    st v = dx3;
    is_na1 = ldf `is.na` in base;
    r17 = dyn is_na1(dx3);
    check L43() else D12();
  L11(r20):
    st urls = r20;
    goto L12();
  L27():
    goto L3(i2, r7);
  L31():
    urls = ld urls;
    check L33() else D7();
  L32():
    r9 = dyn base2(<sym urls>, <lang .get_urls_from_DESCRIPTION_URL_field(v)>);
    goto L6(i7, r9);
  L40():
    dr2 = tryDispatchBuiltin.1("[", meta6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(dr2);
  L41(meta8):
    __1 = ldf `[` in base;
    r16 = dyn __1(meta8, "Description");
    goto L9(r16);
  L45():
    urls2 = ld urls;
    check L47() else D13();
  L46():
    r19 = dyn base4(<sym urls>, <lang .get_urls_from_DESCRIPTION_Description_field(v)>);
    goto L11(r19);
  L52():
    p2 = prom<V +>{
      urls4 = ld urls;
      urls5 = force? urls4;
      checkMissing(urls5);
      return urls5;
    };
    p3 = prom<V +>{
      sym5 = ldf `rep.int`;
      base5 = ldf `rep.int` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r27):
      return r27;
    L2():
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r26 = dyn base5("DESCRIPTION", <lang length(urls)>);
      goto L0(r26);
    L1(r29):
      rep_int = ldf `rep.int` in base;
      r31 = dyn rep_int("DESCRIPTION", r29);
      goto L0(r31);
    L4():
      urls6 = ld urls;
      urls7 = force? urls6;
      checkMissing(urls7);
      length = ldf length in base;
      r30 = dyn length(urls7);
      goto L1(r30);
    L5():
      r28 = dyn base6(<sym urls>);
      goto L1(r28);
    };
    r33 = dyn url_db(p2, p3);
    check L53() else D18();
  D7():
    deopt 28 [i7, urls];
  D12():
    deopt 49 [r17];
  D13():
    deopt 53 [urls2];
  D18():
    deopt 68 [r33];
  L33():
    urls1 = force? urls;
    checkMissing(urls1);
    _get_urls_from_DESCRIPTION_URL_field = ldf `.get_urls_from_DESCRIPTION_URL_field`;
    check L34() else D8();
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L43():
    goto L8(r17);
  L47():
    urls3 = force? urls2;
    checkMissing(urls3);
    _get_urls_from_DESCRIPTION_Description_field = ldf `.get_urls_from_DESCRIPTION_Description_field`;
    check L48() else D14();
  L53():
    popenv;
    return r33;
  D8():
    deopt 31 [i7];
  D14():
    deopt 56 [];
  L34():
    p = prom<V +>{
      v2 = ld v;
      v3 = force? v2;
      checkMissing(v3);
      return v3;
    };
    r12 = dyn _get_urls_from_DESCRIPTION_URL_field(p);
    check L35() else D9();
  L48():
    p1 = prom<V +>{
      v4 = ld v;
      v5 = force? v4;
      checkMissing(v5);
      return v5;
    };
    r22 = dyn _get_urls_from_DESCRIPTION_Description_field(p1);
    check L49() else D15();
  D9():
    deopt 33 [i7, r12];
  D15():
    deopt 58 [r22];
  L35():
    c4 = ldf c in base;
    r13 = dyn c4(urls1, r12);
    check L36() else D10();
  L49():
    c7 = ldf c in base;
    r23 = dyn c7(urls3, r22);
    check L50() else D16();
  D10():
    deopt 35 [i7, r13];
  D16():
    deopt 60 [r23];
  L36():
    goto L6(i7, r13);
  L50():
    goto L11(r23);
  }
}