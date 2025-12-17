fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner415126571;
    st readCitationFile = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner415126571(file, meta) {
  (reg file:*, reg meta:*) -+> V { var file:*, var meta:*, reg meta_isMissing:L, reg meta_orDefault:*, reg as_list:cls, reg meta1:*, reg meta2:V, reg p:p(V +), reg r1:V, reg ___:cls, reg r2:V, reg r3:cls, reg file1:*, reg file2:V, reg p1:p(V +), reg meta3:*, reg meta4:V, reg c:L, reg meta6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p2:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg list:cls, reg r10:V, reg new_env:cls, reg r11:V, reg assign:cls, reg meta7:*, reg meta8:V, reg p3:p(V +), reg envir:*, reg envir1:V, reg p4:p(V +), reg r14:V, reg exprs:*, reg exprs1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg eval:cls, reg expr:*, reg expr1:V, reg p5:p(V +), reg envir2:*, reg envir3:V, reg p6:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg i7:I, reg r19:V, reg x1:*, reg x2:V, reg inherits:cls, reg r20:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg i12:I, reg r22:V, reg rval:*, reg rval1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg i15:I, reg r24:V, reg x3:*, reg x4:V, reg list1:cls, reg r25:V, reg c3:cls, reg r26:V, reg i16:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg rval2:*, reg rval3:V, reg length:cls, reg r30:V, reg rlen:*, reg rlen1:V, reg r31:V, reg c4:L, reg rval4:*, reg rval5:V, reg c5:L, reg rval7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r32:V, reg rlen2:*, reg rlen3:V, reg r33:V, reg c6:L, reg do_call:cls, reg c7:*, reg c8:V, reg p7:p(V +), reg rval8:*, reg rval9:V, reg p8:p(V +), reg r36:V, reg _citation:cls, reg rval10:*, reg rval11:V, reg p9:p(V +), reg meta9:*, reg meta10:V, reg c9:L, reg meta12:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r38:V, reg p10:p(V +), reg r40:V |
    mkenv;
    st file = file;
    meta_isMissing = missing.0(meta);
    if meta_isMissing then L0(NULL) else L0(meta);
  L0(meta_orDefault):
    st meta = meta_orDefault;
    as_list = ldf `as.list`;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p = prom<V +>{
      meta1 = ld meta;
      meta2 = force? meta1;
      checkMissing(meta2);
      return meta2;
    };
    r1 = dyn as_list(p);
    check L17() else D1();
  D1():
    deopt 3 [r1];
  L17():
    st meta = r1;
    ___ = ldf `:::`;
    check L18() else D2();
  D2():
    deopt 6 [];
  L18():
    r2 = dyn ___("tools", ".parse_CITATION_file");
    check L19() else D3();
  D3():
    deopt 9 [r2];
  L19():
    checkFun.0(r2);
    r3 = r2 as cls;
    p1 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p2 = prom<V +>{
      meta3 = ld meta;
      meta4 = force? meta3;
      checkMissing(meta4);
      c = `is.object`(meta4);
      if c then L1() else L2(meta4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", meta4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(meta6):
      r5 = `$`(meta6, <sym Encoding>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn r3(p1, p2);
    check L20() else D4();
  D4():
    deopt 13 [r7];
  L20():
    st exprs = r7;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L1(r9):
    st rval = r9;
    st mheader = NULL;
    st mfooter = NULL;
    new_env = ldf `new.env`;
    check L24() else D6();
  L21():
    list = ldf list in base;
    r10 = dyn list();
    check L23() else D5();
  L22():
    r8 = dyn base();
    goto L1(r8);
  D5():
    deopt 18 [r10];
  D6():
    deopt 27 [];
  L23():
    goto L1(r10);
  L24():
    r11 = dyn new_env[hash](TRUE);
    check L25() else D7();
  D7():
    deopt 30 [r11];
  L25():
    st envir = r11;
    assign = ldf assign;
    check L26() else D8();
  D8():
    deopt 33 [];
  L26():
    p3 = prom<V +>{
      meta7 = ld meta;
      meta8 = force? meta7;
      checkMissing(meta8);
      return meta8;
    };
    p4 = prom<V +>{
      envir = ld envir;
      envir1 = force? envir;
      checkMissing(envir1);
      return envir1;
    };
    r14 = dyn assign[, , envir]("meta", p3, p4);
    check L27() else D9();
  D9():
    deopt 38 [r14];
  L27():
    exprs = ld exprs;
    check L28() else D10();
  D10():
    deopt 39 [exprs];
  L28():
    exprs1 = force? exprs;
    checkMissing(exprs1);
    s = toForSeq(exprs1);
    l = length(s);
    i = 0;
    goto L4(i);
  L4(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L3() else L10();
  L3():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L10():
    x = `[[`(s, i2, NULL, TRUE);
    st expr = x;
    eval = ldf eval;
    check L29() else D11();
  D11():
    deopt 44 [i2];
  L11(r29):
    st rlen = r29;
    rlen = ld rlen;
    check L49() else D21();
  L29():
    p5 = prom<V +>{
      expr = ld expr;
      expr1 = force? expr;
      checkMissing(expr1);
      return expr1;
    };
    p6 = prom<V +>{
      envir2 = ld envir;
      envir3 = force? envir2;
      checkMissing(envir3);
      return envir3;
    };
    r17 = dyn eval[, envir](p5, p6);
    check L30() else D12();
  L45():
    rval2 = ld rval;
    check L47() else D19();
  L46():
    r28 = dyn base4(<sym rval>);
    goto L11(r28);
  D12():
    deopt 48 [i2, r17];
  D19():
    deopt 79 [rval2];
  D21():
    deopt 84 [rlen];
  L30():
    st x = r17;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L47():
    rval3 = force? rval2;
    checkMissing(rval3);
    length = ldf length in base;
    r30 = dyn length(rval3);
    check L48() else D20();
  L49():
    rlen1 = force? rlen;
    checkMissing(rlen1);
    r31 = `==`(rlen1, 1);
    c4 = `as.logical`(r31);
    if c4 then L50() else L12();
  D20():
    deopt 82 [r30];
  L5(i7, r19):
    c2 = `as.logical`(r19);
    if c2 then L35() else L6();
  L12():
    rlen2 = ld rlen;
    check L56() else D23();
  L14():
    _citation = ldf `.citation`;
    check L61() else D26();
  L31():
    x1 = ld x;
    check L33() else D13();
  L32():
    r18 = dyn base1(<sym x>, "bibentry");
    goto L5(i2, r18);
  L48():
    goto L11(r30);
  L50():
    rval4 = ld rval;
    check L51() else D22();
  D13():
    deopt 52 [i2, x1];
  D22():
    deopt 88 [rval4];
  D23():
    deopt 94 [rlen2];
  D26():
    deopt 107 [];
  L6():
    goto L9(i7);
  L9(i16):
    goto L4(i16);
  L33():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r20 = dyn inherits(x2, "bibentry", FALSE);
    check L34() else D14();
  L35():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L51():
    rval5 = force? rval4;
    checkMissing(rval5);
    c5 = `is.object`(rval5);
    if c5 then L52() else L53(rval5);
  L56():
    rlen3 = force? rlen2;
    checkMissing(rlen3);
    r33 = `>`(rlen3, 1);
    c6 = `as.logical`(r33);
    if c6 then L57() else L15();
  L61():
    p9 = prom<V +>{
      rval10 = ld rval;
      rval11 = force? rval10;
      checkMissing(rval11);
      return rval11;
    };
    p10 = prom<V +>{
      meta9 = ld meta;
      meta10 = force? meta9;
      checkMissing(meta10);
      c9 = `is.object`(meta10);
      if c9 then L1() else L2(meta10);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("$", meta10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(meta12):
      r38 = `$`(meta12, <sym Package>);
      goto L0(r38);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    r40 = dyn _citation(p9, p10);
    check L62() else D27();
  D14():
    deopt 57 [i2, r20];
  D27():
    deopt 110 [r40];
  L7(i12, r22):
    st rval = r22;
    goto L9(i12);
  L13(dx3):
    st rval = dx3;
    goto L14();
  L15():
    goto L14();
  L34():
    goto L5(i2, r20);
  L36():
    rval = ld rval;
    check L38() else D15();
  L37():
    r21 = dyn base2(<sym rval>, <lang list(x)>);
    goto L7(i7, r21);
  L52():
    dr2 = tryDispatchBuiltin.1("[[", rval5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L54() else L53(dr2);
  L53(rval7):
    __ = ldf `[[` in base;
    r32 = dyn __(rval7, 1);
    goto L13(r32);
  L57():
    do_call = ldf `do.call`;
    check L58() else D24();
  L62():
    popenv;
    return r40;
  D15():
    deopt 60 [i7, rval];
  D24():
    deopt 99 [];
  L38():
    rval1 = force? rval;
    checkMissing(rval1);
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L54():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L58():
    p7 = prom<V +>{
      c7 = ld c;
      c8 = force? c7;
      checkMissing(c8);
      return c8;
    };
    p8 = prom<V +>{
      rval8 = ld rval;
      rval9 = force? rval8;
      checkMissing(rval9);
      return rval9;
    };
    r36 = dyn do_call(p7, p8);
    check L59() else D25();
  D25():
    deopt 102 [r36];
  L8(i15, r24):
    c3 = ldf c in base;
    r26 = dyn c3(rval1, r24);
    check L43() else D18();
  L39():
    x3 = ld x;
    check L41() else D16();
  L40():
    r23 = dyn base3(<sym x>);
    goto L8(i7, r23);
  L59():
    st rval = r36;
    goto L14();
  D16():
    deopt 64 [i7, x3];
  D18():
    deopt 69 [i15, r26];
  L41():
    x4 = force? x3;
    checkMissing(x4);
    list1 = ldf list in base;
    r25 = dyn list1(x4);
    check L42() else D17();
  L43():
    goto L7(i15, r26);
  D17():
    deopt 67 [i7, r25];
  L42():
    goto L8(i7, r25);
  }
}