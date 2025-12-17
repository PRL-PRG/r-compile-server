fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3074708674;
    st activeConcordance = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3074708674(srcfile) {
  (reg srcfile:*) -+> V { var srcfile:*, reg srcfile_isMissing:L, reg srcfile_orDefault:*, reg r:cls, reg r1:cls, reg r2:V |
    mkenv;
    srcfile_isMissing = missing.0(srcfile);
    if srcfile_isMissing then L0(NA_STR) else L0(srcfile);
  L0(srcfile_orDefault):
    st srcfile = srcfile_orDefault;
    r = clos inner2708337952;
    checkFun.0(r);
    r1 = r as cls;
    r2 = dyn r1();
    check L1() else D0();
  D0():
    deopt 3 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner2708337952() {
  () -+> V { reg integer:cls, reg r:V, reg srcfile:*, reg srcfile1:V, reg r1:cls, reg r2:cls, reg r3:cls, reg structure:cls, reg environment:cls, reg r4:V, reg p:p(V +), reg r6:V |
    mkenv;
    st lastSrcref = NULL;
    integer = ldf integer;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r = dyn integer();
    check L1() else D1();
  D1():
    deopt 5 [r];
  L1():
    st srcLinenum = r;
    srcfile = ld srcfile;
    check L2() else D2();
  D2():
    deopt 7 [srcfile];
  L2():
    srcfile1 = force? srcfile;
    checkMissing(srcfile1);
    st srcFile = srcfile1;
    st offset = 0.0;
    st lastText = "";
    r1 = clos inner3428017826;
    st saveSrcref = r1;
    r2 = clos inner3773442701;
    st addToConcordance = r2;
    r3 = clos inner2708337952;
    st finish = r3;
    structure = ldf structure;
    check L3() else D3();
  D3():
    deopt 26 [];
  L3():
    p = prom<V +>{
      environment = ldf environment;
      r4 = dyn environment();
      return r4;
    };
    r6 = dyn structure[, class](p, "activeConcordance");
    check L4() else D4();
  D4():
    deopt 30 [r6];
  L4():
    popenv;
    return r6;
  }
}
fun inner3428017826(node) {
  (reg node:*) -+> V { var node:*, reg __:cls, reg r:V, reg r1:cls, reg node1:*, reg node2:V, reg p:p(V +), reg r3:V |
    mkenv;
    st node = node;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn __("utils", "getSrcref");
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      node1 = ld node;
      node2 = force? node1;
      checkMissing(node2);
      return node2;
    };
    r3 = dyn r1(p);
    check L2() else D2();
  D2():
    deopt 7 [r3];
  L2():
    sst lastSrcref = r3;
    invisible.0();
    popenv;
    return r3;
  }
}
fun inner3773442701(text) {
  (reg text:*) -+> V { var text:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg text1:*, reg text2:V, reg nchar:cls, reg r4:V, reg r5:V, reg any:cls, reg r6:V, reg c:L, reg text3:*, reg text4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg srcLinenum:*, reg srcLinenum1:V, reg length:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg gsub:cls, reg text5:*, reg text6:V, reg p:p(V +), reg r15:V, reg nchar1:cls, reg r16:V, reg sum:cls, reg r17:V, reg __:cls, reg r18:V, reg r19:cls, reg lastSrcref:*, reg lastSrcref1:V, reg p1:p(V +), reg r21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg srcLine:*, reg srcLine1:V, reg c1:V, reg r24:V, reg c2:L, reg concordanceUsed:*, reg concordanceUsed1:V, reg c3:L, reg text7:*, reg text8:V, reg c4:L, reg text10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r25:V, reg r26:V, reg c5:L, reg concordanceUsed2:*, reg concordanceUsed3:V, reg r27:V, reg r28:V, reg newlines:*, reg newlines1:V, reg r29:V, reg srcLine2:*, reg srcLine3:V, reg l:*, reg c6:L, reg srcLine5:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg srcLine7:V, reg dx3:V, reg concordanceUsed4:*, reg concordanceUsed5:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg srcLine12:V, reg l5:*, reg srcLine13:V, reg concordanceUsed8:V, reg r32:V, reg newlines2:*, reg newlines3:V, reg r33:V, reg r34:I, reg r35:V, reg ___:cls, reg r36:V, reg concordanceUsed9:*, reg concordanceUsed10:V, reg r37:V, reg c7:L, reg offset:*, reg offset1:V, reg newlines4:*, reg newlines5:V, reg r38:V |
    mkenv;
    st text = text;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    c = `as.logical`(r1);
    if c then L23() else L2();
  L16():
    sym1 = ldf nchar;
    base1 = ldf nchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L17():
    r = dyn base(<lang `>`(nchar(text), 0.0)>);
    goto L0(r);
  L1(r3):
    r5 = `>`(r3, 0.0);
    any = ldf any in base;
    r6 = dyn any(r5);
    check L22() else D2();
  L2():
    invisible.0();
    popenv;
    return NULL;
  L18():
    text1 = ld text;
    check L20() else D0();
  L19():
    r2 = dyn base1(<sym text>);
    goto L1(r2);
  L23():
    text3 = ld text;
    check L24() else D3();
  D0():
    deopt 4 [text1];
  D2():
    deopt 14 [r6];
  D3():
    deopt 15 [text3];
  L20():
    text2 = force? text1;
    checkMissing(text2);
    nchar = ldf nchar in base;
    r4 = dyn nchar(text2, "chars", FALSE, NA_LGL);
    check L21() else D1();
  L22():
    goto L0(r6);
  L24():
    text4 = force? text3;
    checkMissing(text4);
    sst lastText = text4;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  D1():
    deopt 10 [r4];
  L3(r8):
    st concordanceUsed = r8;
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L21():
    goto L1(r4);
  L25():
    srcLinenum = ld srcLinenum;
    check L27() else D4();
  L26():
    r7 = dyn base2(<sym srcLinenum>);
    goto L3(r7);
  D4():
    deopt 20 [srcLinenum];
  L4(r11):
    st newlines = r11;
    __ = ldf `::`;
    check L37() else D10();
  L27():
    srcLinenum1 = force? srcLinenum;
    checkMissing(srcLinenum1);
    length = ldf length in base;
    r9 = dyn length(srcLinenum1);
    check L28() else D5();
  L29():
    sym4 = ldf nchar;
    base4 = ldf nchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L31() else L32();
  L30():
    r10 = dyn base3(<lang nchar(gsub("[^\n]", "", text))>);
    goto L4(r10);
  D5():
    deopt 23 [r9];
  D10():
    deopt 44 [];
  L5(r13):
    sum = ldf sum in base;
    r17 = dyn sum(r13);
    check L36() else D9();
  L28():
    goto L3(r9);
  L31():
    gsub = ldf gsub;
    check L33() else D6();
  L32():
    r12 = dyn base4(<lang gsub("[^\n]", "", text)>);
    goto L5(r12);
  L37():
    r18 = dyn __("utils", "getSrcLocation");
    check L38() else D11();
  D6():
    deopt 30 [];
  D9():
    deopt 41 [r17];
  D11():
    deopt 47 [r18];
  L33():
    p = prom<V +>{
      text5 = ld text;
      text6 = force? text5;
      checkMissing(text6);
      return text6;
    };
    r15 = dyn gsub("[^\n]", "", p);
    check L34() else D7();
  L36():
    goto L4(r17);
  L38():
    checkFun.0(r18);
    r19 = r18 as cls;
    p1 = prom<V +>{
      lastSrcref = ld lastSrcref;
      lastSrcref1 = force? lastSrcref;
      checkMissing(lastSrcref1);
      return lastSrcref1;
    };
    r21 = dyn r19(p1, "line");
    check L39() else D12();
  D7():
    deopt 34 [r15];
  D12():
    deopt 51 [r21];
  L34():
    nchar1 = ldf nchar in base;
    r16 = dyn nchar1(r15, "chars", FALSE, NA_LGL);
    check L35() else D8();
  L39():
    st srcLine = r21;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L40() else L41();
  D8():
    deopt 39 [r16];
  L6(r23):
    r24 = `!`(r23);
    c2 = `as.logical`(r24);
    if c2 then L43() else L7();
  L35():
    goto L5(r16);
  L40():
    srcLine = ld srcLine;
    check L42() else D13();
  L41():
    r22 = dyn base5(<sym srcLine>);
    goto L6(r22);
  D13():
    deopt 54 [srcLine];
  L7():
    concordanceUsed9 = ld concordanceUsed;
    check L64() else D21();
  L42():
    srcLine1 = force? srcLine;
    checkMissing(srcLine1);
    c1 = `==`(srcLine1, NULL);
    goto L6(c1);
  L43():
    concordanceUsed = ld concordanceUsed;
    check L44() else D14();
  D14():
    deopt 58 [concordanceUsed];
  D21():
    deopt 93 [concordanceUsed9];
  L44():
    concordanceUsed1 = force? concordanceUsed;
    checkMissing(concordanceUsed1);
    c3 = `as.logical`(concordanceUsed1);
    if c3 then L45() else L8();
  L64():
    concordanceUsed10 = force? concordanceUsed9;
    checkMissing(concordanceUsed10);
    r37 = `!`(concordanceUsed10);
    c7 = `as.logical`(r37);
    if c7 then L65() else L15();
  L8():
    goto L12();
  L12():
    srcLine2 = ld srcLine;
    check L55() else D18();
  L15():
    invisible.0();
    popenv;
    return NULL;
  L45():
    text7 = ld text;
    check L46() else D15();
  L65():
    offset = ld offset;
    check L66() else D22();
  D15():
    deopt 60 [text7];
  D18():
    deopt 79 [srcLine2];
  D22():
    deopt 96 [offset];
  L46():
    text8 = force? text7;
    checkMissing(text8);
    c4 = `is.object`(text8);
    if c4 then L47() else L48(text8);
  L55():
    srcLine3 = force? srcLine2;
    checkMissing(srcLine3);
    l = sld srcLinenum;
    c6 = `is.object`(l);
    if c6 then L56() else L57(srcLine3, l);
  L66():
    offset1 = force? offset;
    checkMissing(offset1);
    newlines4 = ld newlines;
    check L67() else D23();
  D23():
    deopt 97 [offset1, newlines4];
  L9(dx1):
    r26 = `!=`(dx1, "\n");
    c5 = `as.logical`(r26);
    if c5 then L50() else L10();
  L13(srcLine7, dx3):
    sst srcLinenum = dx3;
    invisible.0();
    popenv;
    return srcLine7;
  L47():
    dr = tryDispatchBuiltin.1("[", text8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L49() else L48(dr);
  L48(text10):
    __1 = ldf `[` in base;
    r25 = dyn __1(text10, 1.0);
    goto L9(r25);
  L56():
    dr2 = tryDispatchBuiltin.0("[<-", l, srcLine3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L58() else L57(srcLine3, dr2);
  L57(srcLine5, l2):
    concordanceUsed4 = ld concordanceUsed;
    check L59() else D19();
  L67():
    newlines5 = force? newlines4;
    checkMissing(newlines5);
    r38 = `+`(offset1, newlines5);
    sst offset = r38;
    invisible.0();
    popenv;
    return r38;
  D19():
    deopt 82 [srcLine5, l2, srcLine3, concordanceUsed4];
  L10():
    newlines = ld newlines;
    check L53() else D17();
  L11(r28):
    goto L12();
  L49():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L50():
    concordanceUsed2 = ld concordanceUsed;
    check L51() else D16();
  L58():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(srcLine3, dx2);
  L59():
    concordanceUsed5 = force? concordanceUsed4;
    checkMissing(concordanceUsed5);
    sym6 = ldf seq_len;
    base6 = ldf seq_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L60() else L61();
  D16():
    deopt 67 [concordanceUsed2];
  D17():
    deopt 72 [newlines];
  L14(srcLine12, l5, srcLine13, concordanceUsed8, r32):
    r35 = `+`(concordanceUsed8, r32);
    ___ = ldf `[<-` in base;
    r36 = dyn ___(l5, srcLine13, r35);
    goto L13(srcLine12, r36);
  L51():
    concordanceUsed3 = force? concordanceUsed2;
    checkMissing(concordanceUsed3);
    r27 = `-`(concordanceUsed3, 1.0);
    st concordanceUsed = r27;
    goto L11(r27);
  L53():
    newlines1 = force? newlines;
    checkMissing(newlines1);
    r29 = `-`(newlines1, 1.0);
    st newlines = r29;
    goto L11(r29);
  L60():
    newlines2 = ld newlines;
    check L62() else D20();
  L61():
    r31 = dyn base6(<lang `+`(1.0, newlines)>);
    goto L14(srcLine5, l2, srcLine3, concordanceUsed5, r31);
  D20():
    deopt 85 [srcLine5, l2, srcLine3, concordanceUsed5, 1.0, newlines2];
  L62():
    newlines3 = force? newlines2;
    checkMissing(newlines3);
    r33 = `+`(1.0, newlines3);
    r34 = seq_len(r33);
    goto L14(srcLine5, l2, srcLine3, concordanceUsed5, r34);
  }
}