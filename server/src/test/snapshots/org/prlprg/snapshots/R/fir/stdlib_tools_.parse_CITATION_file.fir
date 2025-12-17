fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner216377918;
    st `.parse_CITATION_file` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner216377918(cfile, encoding) {
  (reg cfile:*, reg encoding:*) -+> V { var cfile:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg encoding1:*, reg encoding2:V, reg c:V, reg c1:L, reg _in_:cls, reg encoding3:*, reg encoding4:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c2:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg c3:L, reg c5:V, reg l10n_info:cls, reg r9:V, reg c6:L, reg c8:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg c10:L, reg dx1:V, reg r12:V, reg r13:V, reg c11:L, reg c12:V, reg c14:L, reg parse:cls, reg cfile1:*, reg cfile2:V, reg p2:p(V +), reg encoding5:*, reg encoding6:V, reg p3:p(V +), reg r16:V, reg _in_1:cls, reg encoding7:*, reg encoding8:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg c15:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg c16:L, reg readLines:cls, reg cfile3:*, reg cfile4:V, reg p6:p(V +), reg r24:V, reg iconv:cls, reg x:*, reg x1:V, reg p7:p(V +), reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg asc:*, reg asc1:V, reg is_na:cls, reg r31:V, reg asc2:*, reg asc3:V, reg x2:*, reg x3:V, reg r32:V, reg r33:V, reg any:cls, reg r34:V, reg c17:L, reg stop:cls, reg r35:V, reg parse1:cls, reg cfile5:*, reg cfile6:V, reg p8:p(V +), reg r38:V, reg file:cls, reg cfile7:*, reg cfile8:V, reg p9:p(V +), reg encoding9:*, reg encoding10:V, reg p10:p(V +), reg r41:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg on_exit:cls, reg r44:V, reg parse2:cls, reg con:*, reg con1:V, reg p11:p(V +), reg r46:V |
    mkenv;
    st cfile = cfile;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0(NULL) else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L15() else L2();
  L12():
    encoding1 = ld encoding;
    check L14() else D0();
  L13():
    r = dyn base(<sym encoding>);
    goto L1(r);
  D0():
    deopt 1 [encoding1];
  L2():
    goto L3();
  L3():
    _in_ = ldf `%in%`;
    check L17() else D1();
  L14():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    c = `==`(encoding2, NULL);
    goto L1(c);
  L15():
    st encoding = "ASCII";
    goto L3();
  D1():
    deopt 10 [];
  L17():
    p = prom<V +>{
      encoding3 = ld encoding;
      encoding4 = force? encoding3;
      checkMissing(encoding4);
      return encoding4;
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c2 = ldf c in base;
      r6 = dyn c2("latin1", "UTF-8");
      goto L0(r6);
    L2():
      r4 = dyn base1("latin1", "UTF-8");
      goto L0(r4);
    };
    r8 = dyn _in_(p, p1);
    check L18() else D2();
  D2():
    deopt 13 [r8];
  L18():
    c3 = `as.logical`(r8);
    if c3 then L19() else L4(c3);
  L4(c5):
    c14 = `as.logical`(c5);
    if c14 then L27() else L5();
  L19():
    l10n_info = ldf l10n_info;
    check L20() else D3();
  D3():
    deopt 15 [c3];
  L5():
    _in_1 = ldf `%in%`;
    check L31() else D7();
  L20():
    r9 = dyn l10n_info();
    check L21() else D4();
  L27():
    parse = ldf parse;
    check L28() else D5();
  D4():
    deopt 16 [c3, r9];
  D5():
    deopt 21 [];
  D7():
    deopt 28 [];
  L21():
    c6 = `is.object`(r9);
    if c6 then L23() else L24(c3, r9);
  L28():
    p2 = prom<V +>{
      cfile1 = ld cfile;
      cfile2 = force? cfile1;
      checkMissing(cfile2);
      return cfile2;
    };
    p3 = prom<V +>{
      encoding5 = ld encoding;
      encoding6 = force? encoding5;
      checkMissing(encoding6);
      return encoding6;
    };
    r16 = dyn parse[file, encoding](p2, p3);
    check L29() else D6();
  L31():
    p4 = prom<V +>{
      encoding7 = ld encoding;
      encoding8 = force? encoding7;
      checkMissing(encoding8);
      return encoding8;
    };
    p5 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      c15 = ldf c in base;
      r20 = dyn c15("C", "ASCII");
      goto L0(r20);
    L2():
      r18 = dyn base2("C", "ASCII");
      goto L0(r18);
    };
    r22 = dyn _in_1(p4, p5);
    check L32() else D8();
  D6():
    deopt 26 [r16];
  D8():
    deopt 31 [r22];
  L22(c10, dx1):
    r13 = `!`(dx1);
    c11 = `as.logical`(r13);
    c12 = `&&`(c10, c11);
    goto L4(c12);
  L23():
    dr = tryDispatchBuiltin.1("$", r9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(c3, dr);
  L24(c8, r11):
    r12 = `$`(r11, <sym MBCS>);
    goto L22(c8, r12);
  L29():
    popenv;
    return r16;
  L32():
    c16 = `as.logical`(r22);
    if c16 then L33() else L6();
  L6():
    file = ldf file;
    check L54() else D22();
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(c3, dx);
  L33():
    readLines = ldf readLines;
    check L34() else D9();
  D9():
    deopt 33 [];
  D22():
    deopt 72 [];
  L34():
    p6 = prom<V +>{
      cfile3 = ld cfile;
      cfile4 = force? cfile3;
      checkMissing(cfile4);
      return cfile4;
    };
    r24 = dyn readLines[, warn](p6, FALSE);
    check L35() else D10();
  L54():
    p9 = prom<V +>{
      cfile7 = ld cfile;
      cfile8 = force? cfile7;
      checkMissing(cfile8);
      return cfile8;
    };
    p10 = prom<V +>{
      encoding9 = ld encoding;
      encoding10 = force? encoding9;
      checkMissing(encoding10);
      return encoding10;
    };
    r41 = dyn file[, encoding](p9, p10);
    check L55() else D23();
  D10():
    deopt 37 [r24];
  D23():
    deopt 76 [r41];
  L35():
    st x = r24;
    iconv = ldf iconv;
    check L36() else D11();
  L55():
    st con = r41;
    sym5 = ldf `on.exit`;
    base5 = ldf `on.exit` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  D11():
    deopt 40 [];
  L11():
    parse2 = ldf parse;
    check L58() else D24();
  L36():
    p7 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r26 = dyn iconv(p7, "latin1", "ASCII");
    check L37() else D12();
  L56():
    on_exit = ldf `on.exit` in base;
    r44 = dyn on_exit(<lang close(con)>);
    goto L11();
  L57():
    r42 = dyn base5(<lang close(con)>);
    goto L11();
  D12():
    deopt 44 [r26];
  D24():
    deopt 82 [];
  L37():
    st asc = r26;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L58():
    p11 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r46 = dyn parse2(p11);
    check L59() else D25();
  D25():
    deopt 84 [r46];
  L7(r28):
    c17 = `as.logical`(r28);
    if c17 then L47() else L9();
  L38():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L39():
    r27 = dyn base3(<lang `|`(is.na(asc), `!=`(asc, x))>);
    goto L7(r27);
  L59():
    popenv;
    return r46;
  L8(r30):
    asc2 = ld asc;
    check L44() else D15();
  L9():
    goto L10();
  L10():
    parse1 = ldf parse;
    check L51() else D20();
  L40():
    asc = ld asc;
    check L42() else D13();
  L41():
    r29 = dyn base4(<sym asc>);
    goto L8(r29);
  L47():
    stop = ldf stop;
    check L48() else D18();
  D13():
    deopt 50 [asc];
  D15():
    deopt 53 [r30, asc2];
  D18():
    deopt 61 [];
  D20():
    deopt 67 [];
  L42():
    asc1 = force? asc;
    checkMissing(asc1);
    is_na = ldf `is.na` in base;
    r31 = dyn is_na(asc1);
    check L43() else D14();
  L44():
    asc3 = force? asc2;
    checkMissing(asc3);
    x2 = ld x;
    check L45() else D16();
  L48():
    r35 = dyn stop("non-ASCII input in a CITATION file without a declared encoding");
    check L49() else D19();
  L51():
    p8 = prom<V +>{
      cfile5 = ld cfile;
      cfile6 = force? cfile5;
      checkMissing(cfile6);
      return cfile6;
    };
    r38 = dyn parse1[file](p8);
    check L52() else D21();
  D14():
    deopt 53 [r31];
  D16():
    deopt 54 [r30, asc3, x2];
  D19():
    deopt 63 [r35];
  D21():
    deopt 70 [r38];
  L43():
    goto L8(r31);
  L45():
    x3 = force? x2;
    checkMissing(x3);
    r32 = `!=`(asc3, x3);
    r33 = `||`(r30, r32);
    any = ldf any in base;
    r34 = dyn any(r33);
    check L46() else D17();
  L49():
    goto L10();
  L52():
    popenv;
    return r38;
  D17():
    deopt 59 [r34];
  L46():
    goto L7(r34);
  }
}