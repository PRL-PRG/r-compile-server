fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2683103047;
    st `.read_description` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2683103047(dfile, `keep.white`) {
  (reg dfile:*, reg keep_white:*) -+> V { var dfile:*, var `keep.white`:*, reg keep_white_isMissing:L, reg keep_white_orDefault:*, reg _keep_white_description_fields:*, reg _keep_white_description_fields1:V, reg p:p(V +), reg file_test:cls, reg dfile1:*, reg dfile2:V, reg p1:p(V +), reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dfile3:*, reg dfile4:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg tryCatch:cls, reg read_dcf:cls, reg dfile5:*, reg dfile6:V, reg p4:p(V +), reg keep_white1:*, reg keep_white2:V, reg p5:p(V +), reg r11:V, reg p6:p(V +), reg r13:cls, reg p7:p(V +), reg r15:V, reg nrow:cls, reg out:*, reg out1:V, reg p8:p(V +), reg r17:V, reg r18:V, reg c1:L, reg stop1:cls, reg r19:V, reg out2:*, reg out3:V, reg c2:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r21:V, reg sym:cls, reg base:cls, reg guard:L, reg r22:V, reg r23:V, reg out6:*, reg out7:V, reg c3:L, reg out9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r24:V, reg is_na:cls, reg r25:V, reg r26:V, reg c4:L, reg encoding:*, reg encoding1:V, reg r27:V, reg c5:L, reg l:*, reg Encoding__:cls, reg r28:V, reg validUTF8:cls, reg out10:*, reg out11:V, reg p9:p(V +), reg r30:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r31:V, reg r32:V, reg ind:*, reg ind1:V, reg all:cls, reg r33:V, reg r34:V, reg c6:L, reg which:cls, reg ind2:*, reg ind3:V, reg r35:V, reg p10:p(V +), reg r37:V, reg iconv:cls, reg out12:*, reg out13:V, reg c7:L, reg out15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg pos:*, reg pos1:V, reg __2:cls, reg r38:V, reg p11:p(V +), reg r40:V, reg l1:*, reg c8:L, reg r42:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r44:V, reg dx7:V, reg pos2:*, reg pos3:V, reg ___:cls, reg r45:V, reg r46:V, reg r47:V, reg encoding2:*, reg encoding3:V, reg r48:V, reg c9:L, reg l4:*, reg Encoding__1:cls, reg r49:V, reg iconv1:cls, reg out16:*, reg out17:V, reg p12:p(V +), reg encoding4:*, reg encoding5:V, reg p13:p(V +), reg r52:V, reg out18:*, reg out19:V |
    mkenv;
    st dfile = dfile;
    keep_white_isMissing = missing.0(keep_white);
    if keep_white_isMissing then L0() else L1(keep_white);
  L0():
    p = prom<V +>{
      _keep_white_description_fields = ld `.keep_white_description_fields`;
      _keep_white_description_fields1 = force? _keep_white_description_fields;
      checkMissing(_keep_white_description_fields1);
      return _keep_white_description_fields1;
    };
    goto L1(p);
  L1(keep_white_orDefault):
    st `keep.white` = keep_white_orDefault;
    file_test = ldf file_test;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p1 = prom<V +>{
      dfile1 = ld dfile;
      dfile2 = force? dfile1;
      checkMissing(dfile2);
      return dfile2;
    };
    r2 = dyn file_test("-f", p1);
    check L19() else D1();
  D1():
    deopt 4 [r2];
  L19():
    r3 = `!`(r2);
    c = `as.logical`(r3);
    if c then L20() else L2();
  L2():
    goto L3();
  L3():
    tryCatch = ldf tryCatch;
    check L24() else D4();
  L20():
    stop = ldf stop;
    check L21() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 15 [];
  L21():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        dfile3 = ld dfile;
        dfile4 = force? dfile3;
        checkMissing(dfile4);
        return dfile4;
      };
      r5 = dyn gettextf("file '%s' does not exist", p2);
      return r5;
    };
    r7 = dyn stop[, domain](p3, NA_LGL);
    check L22() else D3();
  L24():
    p6 = prom<V +>{
      read_dcf = ldf `read.dcf`;
      p4 = prom<V +>{
        dfile5 = ld dfile;
        dfile6 = force? dfile5;
        checkMissing(dfile6);
        return dfile6;
      };
      p5 = prom<V +>{
        keep_white1 = ld `keep.white`;
        keep_white2 = force? keep_white1;
        checkMissing(keep_white2);
        return keep_white2;
      };
      r11 = dyn read_dcf[, `keep.white`](p4, p5);
      return r11;
    };
    p7 = prom<V +>{
      r13 = clos inner3708401697;
      return r13;
    };
    r15 = dyn tryCatch[, error](p6, p7);
    check L25() else D5();
  D3():
    deopt 11 [r7];
  D5():
    deopt 19 [r15];
  L22():
    goto L3();
  L25():
    st out = r15;
    nrow = ldf nrow;
    check L26() else D6();
  D6():
    deopt 22 [];
  L26():
    p8 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r17 = dyn nrow(p8);
    check L27() else D7();
  D7():
    deopt 24 [r17];
  L27():
    r18 = `!=`(r17, 1);
    c1 = `as.logical`(r18);
    if c1 then L28() else L4();
  L4():
    goto L5();
  L5():
    out2 = ld out;
    check L32() else D10();
  L28():
    stop1 = ldf stop;
    check L29() else D8();
  D8():
    deopt 28 [];
  D10():
    deopt 35 [out2];
  L29():
    r19 = dyn stop1[, `call.`]("contains a blank line", FALSE);
    check L30() else D9();
  L32():
    out3 = force? out2;
    checkMissing(out3);
    c2 = `is.object`(out3);
    if c2 then L33() else L34();
  D9():
    deopt 32 [r19];
  L6(dx1):
    st out = dx1;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L30():
    goto L5();
  L33():
    dr = tryDispatchBuiltin.1("[", out3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34();
  L34():
    __ = ldf `[` in base;
    r21 = dyn __(out3, 1, <missing>);
    goto L6(r21);
  L7(r23):
    r26 = `!`(r23);
    c4 = `as.logical`(r26);
    if c4 then L43() else L9();
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L36():
    out6 = ld out;
    check L38() else D11();
  L37():
    r22 = dyn base(<lang `<-`(encoding, `[`(out, "Encoding"))>);
    goto L7(r22);
  D11():
    deopt 44 [out6];
  L9():
    goto L17();
  L17():
    out18 = ld out;
    check L73() else D30();
  L38():
    out7 = force? out6;
    checkMissing(out7);
    c3 = `is.object`(out7);
    if c3 then L39() else L40(out7);
  L43():
    encoding = ld encoding;
    check L44() else D13();
  D13():
    deopt 53 [encoding];
  D30():
    deopt 118 [out18];
  L8(dx3):
    st encoding = dx3;
    is_na = ldf `is.na` in base;
    r25 = dyn is_na(dx3);
    check L42() else D12();
  L39():
    dr2 = tryDispatchBuiltin.1("[", out7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(dr2);
  L40(out9):
    __1 = ldf `[` in base;
    r24 = dyn __1(out9, "Encoding");
    goto L8(r24);
  L44():
    encoding1 = force? encoding;
    checkMissing(encoding1);
    r27 = `==`(encoding1, "UTF-8");
    c5 = `as.logical`(r27);
    if c5 then L45() else L10();
  L73():
    out19 = force? out18;
    checkMissing(out19);
    popenv;
    return out19;
  D12():
    deopt 51 [r25];
  L10():
    encoding2 = ld encoding;
    check L65() else D25();
  L15(r47):
    goto L17();
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L42():
    goto L7(r25);
  L45():
    l = ld out;
    Encoding__ = ldf `Encoding<-`;
    check L46() else D14();
  D14():
    deopt 60 ["UTF-8", l, "UTF-8"];
  D25():
    deopt 96 [encoding2];
  L46():
    r28 = dyn Encoding__(l, NULL, "UTF-8");
    check L47() else D15();
  L65():
    encoding3 = force? encoding2;
    checkMissing(encoding3);
    r48 = `==`(encoding3, "latin1");
    c9 = `as.logical`(r48);
    if c9 then L66() else L16();
  D15():
    deopt 62 ["UTF-8", r28];
  L16():
    iconv1 = ldf iconv;
    check L70() else D28();
  L47():
    st out = r28;
    validUTF8 = ldf validUTF8;
    check L48() else D16();
  L66():
    l4 = ld out;
    Encoding__1 = ldf `Encoding<-`;
    check L67() else D26();
  D16():
    deopt 65 [];
  D26():
    deopt 103 ["latin1", l4, "latin1"];
  D28():
    deopt 108 [];
  L48():
    p9 = prom<V +>{
      out10 = ld out;
      out11 = force? out10;
      checkMissing(out11);
      return out11;
    };
    r30 = dyn validUTF8(p9);
    check L49() else D17();
  L67():
    r49 = dyn Encoding__1(l4, NULL, "latin1");
    check L68() else D27();
  L70():
    p12 = prom<V +>{
      out16 = ld out;
      out17 = force? out16;
      checkMissing(out17);
      return out17;
    };
    p13 = prom<V +>{
      encoding4 = ld encoding;
      encoding5 = force? encoding4;
      checkMissing(encoding5);
      return encoding5;
    };
    r52 = dyn iconv1[, , , sub](p12, p13, "", "byte");
    check L71() else D29();
  D17():
    deopt 67 [r30];
  D27():
    deopt 105 ["latin1", r49];
  D29():
    deopt 114 [r52];
  L49():
    st ind = r30;
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L50() else L51();
  L68():
    st out = r49;
    goto L15("latin1");
  L71():
    st out = r52;
    goto L15(r52);
  L11(r32):
    r34 = `!`(r32);
    c6 = `as.logical`(r34);
    if c6 then L54() else L12();
  L50():
    ind = ld ind;
    check L52() else D18();
  L51():
    r31 = dyn base1(<sym ind>);
    goto L11(r31);
  D18():
    deopt 71 [ind];
  L12():
    goto L14(NULL);
  L14(r46):
    goto L15(r46);
  L52():
    ind1 = force? ind;
    checkMissing(ind1);
    all = ldf all in base;
    r33 = dyn all(ind1);
    check L53() else D19();
  L54():
    which = ldf which;
    check L55() else D20();
  D19():
    deopt 74 [r33];
  D20():
    deopt 77 [];
  L53():
    goto L11(r33);
  L55():
    p10 = prom<V +>{
      ind2 = ld ind;
      ind3 = force? ind2;
      checkMissing(ind3);
      r35 = `!`(ind3);
      return r35;
    };
    r37 = dyn which(p10);
    check L56() else D21();
  D21():
    deopt 79 [r37];
  L56():
    st pos = r37;
    iconv = ldf iconv;
    check L57() else D22();
  D22():
    deopt 82 [];
  L57():
    p11 = prom<V +>{
      out12 = ld out;
      out13 = force? out12;
      checkMissing(out13);
      c7 = `is.object`(out13);
      if c7 then L1() else L2(out13);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", out13);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(out15):
      pos = ld pos;
      pos1 = force? pos;
      __2 = ldf `[` in base;
      r38 = dyn __2(out15, pos1);
      goto L0(r38);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r40 = dyn iconv[, , , sub](p11, "UTF-8", "UTF-8", "byte");
    check L58() else D23();
  D23():
    deopt 88 [r40];
  L58():
    l1 = ld out;
    c8 = `is.object`(l1);
    if c8 then L59() else L60(r40, l1);
  L13(r44, dx7):
    st out = dx7;
    goto L14(r44);
  L59():
    dr6 = tryDispatchBuiltin.0("[<-", l1, r40);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L61() else L60(r40, dr6);
  L60(r42, l3):
    pos2 = ld pos;
    check L62() else D24();
  D24():
    deopt 90 [r42, l3, r40, pos2];
  L61():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L13(r40, dx6);
  L62():
    pos3 = force? pos2;
    ___ = ldf `[<-` in base;
    r45 = dyn ___(l3, r40, pos3);
    goto L13(r42, r45);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg stop:cls, reg gettextf:cls, reg dfile:*, reg dfile1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st e = e;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        dfile = ld dfile;
        dfile1 = force? dfile;
        checkMissing(dfile1);
        return dfile1;
      };
      r1 = dyn gettextf("file '%s' is not in valid DCF format", p);
      return r1;
    };
    r3 = dyn stop[, domain, `call.`](p1, NA_LGL, FALSE);
    check L1() else D1();
  D1():
    deopt 7 [r3];
  L1():
    popenv;
    return r3;
  }
}