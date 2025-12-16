fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1664700589;
    st `format.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1664700589(x, format, usetz, digits, `...`) {
  (reg x:*, reg format:*, reg usetz:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var format:*, reg format_isMissing:L, reg format_orDefault:*, var usetz:*, reg usetz_isMissing:L, reg usetz_orDefault:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg inherits:cls, reg r4:V, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg format1:*, reg format2:V, reg r10:V, reg any:cls, reg r11:V, reg c1:L, reg unlist:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg x3:*, reg x4:V, reg unclass:cls, reg r14:V, reg c2:L, reg r16:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r17:V, reg p1:p(V +), reg r19:V, reg c3:L, reg r21:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg f0:*, reg f1:V, reg __1:cls, reg r22:V, reg x5:*, reg x6:V, reg c4:L, reg x8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r23:V, reg c5:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg f2:*, reg f3:V, reg __2:cls, reg r24:V, reg secs:*, reg secs1:V, reg c6:L, reg secs3:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg secs6:V, reg r26:V, reg secs7:*, reg secs8:V, reg is_finite:cls, reg r27:V, reg __3:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg digits1:*, reg digits2:V, reg c7:V, reg c8:L, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg digits3:*, reg digits4:V, reg min:cls, reg r33:V, reg np:*, reg np1:V, reg r34:V, reg c9:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg np2:*, reg np3:V, reg r37:I, reg r38:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c10:L, reg x9:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg i7:I, reg r40:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg i10:I, reg r42:V, reg secs9:*, reg secs10:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg i13:I, reg secs13:V, reg r44:V, reg round:cls, reg r45:V, reg r46:V, reg abs:cls, reg r47:V, reg r48:V, reg all:cls, reg r49:V, reg c11:L, reg i16:*, reg i17:V, reg i18:I, reg sym10:cls, reg base10:cls, reg guard10:L, reg r51:V, reg r52:V, reg times:*, reg times1:V, reg c12:L, reg times3:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r53:V, reg times6:V, reg r54:V, reg times7:*, reg times8:V, reg is_finite1:cls, reg r55:V, reg __4:cls, reg r56:V, reg r57:V, reg all1:cls, reg r58:V, reg c13:L, reg r59:V, reg np4:*, reg np5:V, reg r60:V, reg c14:L, reg paste0:cls, reg np6:*, reg np7:V, reg p2:p(V +), reg r62:V, reg l1:*, reg c15:L, reg r64:V, reg l3:*, reg dr12:V, reg dc6:L, reg dx14:V, reg r66:V, reg dx15:V, reg f4:*, reg f5:V, reg ___:cls, reg r67:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r69:V, reg r70:V, reg x10:*, reg x11:V, reg format3:*, reg format4:V, reg usetz1:*, reg usetz2:V, reg format_POSIXlt:cls, reg r71:V |
    mkenv;
    st x = x;
    format_isMissing = missing.0(format);
    if format_isMissing then L0("") else L0(format);
  L0(format_orDefault):
    st format = format_orDefault;
    usetz_isMissing = missing.0(usetz);
    if usetz_isMissing then L1(FALSE) else L1(usetz);
  L1(usetz_orDefault):
    st usetz = usetz_orDefault;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L2() else L3(digits);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits.secs");
      return r;
    };
    goto L3(p);
  L3(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L4(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L40() else L5();
  L36():
    x1 = ld x;
    check L38() else D0();
  L37():
    r2 = dyn base(<sym x>, "POSIXlt");
    goto L4(r2);
  D0():
    deopt 2 [x1];
  L5():
    goto L6();
  L6():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  L38():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r4 = dyn inherits(x2, "POSIXlt", FALSE);
    check L39() else D1();
  L40():
    stop = ldf stop;
    check L41() else D2();
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  L7(r9):
    c1 = `as.logical`(r9);
    if c1 then L48() else L8();
  L39():
    goto L4(r4);
  L41():
    r6 = dyn stop("wrong class");
    check L42() else D3();
  L44():
    format1 = ld format;
    check L46() else D4();
  L45():
    r8 = dyn base1(<lang `<-`(f0, `==`(format, ""))>);
    goto L7(r8);
  D3():
    deopt 12 [r6];
  D4():
    deopt 17 [format1];
  L8():
    goto L34();
  L34():
    sym12 = ldf `.Internal`;
    base12 = ldf `.Internal` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L124() else L125();
  L42():
    goto L6();
  L46():
    format2 = force? format1;
    checkMissing(format2);
    r10 = `==`(format2, "");
    st f0 = r10;
    any = ldf any in base;
    r11 = dyn any(r10);
    check L47() else D5();
  L48():
    unlist = ldf unlist;
    check L49() else D6();
  D5():
    deopt 23 [r11];
  D6():
    deopt 25 [];
  L35(r70):
    popenv;
    return r70;
  L47():
    goto L7(r11);
  L49():
    p1 = prom<V +>{
      sym2 = ldf unclass;
      base2 = ldf unclass in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r13):
      c2 = `is.object`(r13);
      if c2 then L4() else L5(r13);
    L2():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      unclass = ldf unclass in base;
      r14 = dyn unclass(x4);
      goto L0(r14);
    L3():
      r12 = dyn base2(<sym x>);
      goto L0(r12);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[", r13);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r16):
      __ = ldf `[` in base;
      r17 = dyn __(r16, <int 1, 2, 3>);
      goto L1(r17);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    r19 = dyn unlist(p1);
    check L50() else D7();
  L124():
    x10 = ld x;
    check L126() else D31();
  L125():
    r69 = dyn base12(<lang format.POSIXlt(x, format, usetz)>);
    goto L35(r69);
  D7():
    deopt 27 [r19];
  D31():
    deopt 137 [x10];
  L50():
    c3 = `is.object`(r19);
    if c3 then L51() else L52(r19);
  L126():
    x11 = force? x10;
    checkMissing(x11);
    format3 = ld format;
    check L127() else D32();
  D32():
    deopt 139 [format3];
  L9(dx3):
    st times = dx3;
    x5 = ld x;
    check L55() else D9();
  L51():
    dr2 = tryDispatchBuiltin.1("[", r19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(dr2);
  L52(r21):
    f0 = ld f0;
    check L54() else D8();
  L127():
    format4 = force? format3;
    checkMissing(format4);
    usetz1 = ld usetz;
    check L128() else D33();
  D8():
    deopt 28 [r21, f0];
  D9():
    deopt 32 [x5];
  D33():
    deopt 141 [usetz1];
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L54():
    f1 = force? f0;
    __1 = ldf `[` in base;
    r22 = dyn __1(r21, f1);
    goto L9(r22);
  L55():
    x6 = force? x5;
    checkMissing(x6);
    c4 = `is.object`(x6);
    if c4 then L57() else L58(x6);
  L128():
    usetz2 = force? usetz1;
    checkMissing(usetz2);
    format_POSIXlt = ldf `format.POSIXlt` in base;
    r71 = dyn format_POSIXlt(x11, format4, usetz2);
    check L129() else D34();
  D34():
    deopt 144 [r71];
  L56(dx5):
    c5 = `is.object`(dx5);
    if c5 then L60() else L61(dx5);
  L57():
    dr4 = tryDispatchBuiltin.1("$", x6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L59() else L58(dr4);
  L58(x8):
    r23 = `$`(x8, <sym sec>);
    goto L56(r23);
  L129():
    goto L35(r71);
  L10(dx9):
    st secs = dx9;
    secs = ld secs;
    check L64() else D11();
  L59():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L56(dx4);
  L60():
    dr6 = tryDispatchBuiltin.1("[", dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L62() else L61(dr6);
  L61(dx7):
    f2 = ld f0;
    check L63() else D10();
  D10():
    deopt 35 [dx7, f2];
  D11():
    deopt 39 [secs];
  L62():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx8);
  L63():
    f3 = force? f2;
    __2 = ldf `[` in base;
    r24 = dyn __2(dx7, f3);
    goto L10(r24);
  L64():
    secs1 = force? secs;
    checkMissing(secs1);
    c6 = `is.object`(secs1);
    if c6 then L65() else L66(secs1);
  L11(dx11):
    st secs = dx11;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L72() else L73();
  L65():
    dr8 = tryDispatchBuiltin.1("[", secs1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L67() else L66(dr8);
  L66(secs3):
    sym3 = ldf `is.finite`;
    base3 = ldf `is.finite` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L68() else L69();
  L12(secs6, r26):
    __3 = ldf `[` in base;
    r28 = dyn __3(secs6, r26);
    goto L11(r28);
  L13(r30):
    c8 = `as.logical`(r30);
    if c8 then L75() else L14();
  L67():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L11(dx10);
  L68():
    secs7 = ld secs;
    check L70() else D12();
  L69():
    r25 = dyn base3(<sym secs>);
    goto L12(secs3, r25);
  L72():
    digits1 = ld digits;
    check L74() else D14();
  L73():
    r29 = dyn base4(<sym digits>);
    goto L13(r29);
  D12():
    deopt 43 [secs3, secs7];
  D14():
    deopt 50 [digits1];
  L14():
    sym5 = ldf min;
    base5 = ldf min in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L77() else L78();
  L15(r31):
    st np = r31;
    np = ld np;
    check L81() else D17();
  L70():
    secs8 = force? secs7;
    checkMissing(secs8);
    is_finite = ldf `is.finite` in base;
    r27 = dyn is_finite(secs8);
    check L71() else D13();
  L74():
    digits2 = force? digits1;
    checkMissing(digits2);
    c7 = `==`(digits2, NULL);
    goto L13(c7);
  L75():
    goto L15(0);
  D13():
    deopt 46 [secs3, r27];
  D17():
    deopt 63 [np];
  L71():
    goto L12(secs3, r27);
  L77():
    digits3 = ld digits;
    check L79() else D15();
  L78():
    r32 = dyn base5(6, <sym digits>);
    goto L15(r32);
  L81():
    np1 = force? np;
    checkMissing(np1);
    r34 = `>=`(np1, 1);
    c9 = `as.logical`(r34);
    if c9 then L82() else L16();
  D15():
    deopt 58 [digits3];
  L16():
    goto L26();
  L26():
    sym10 = ldf all;
    base10 = ldf all in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L101() else L102();
  L79():
    digits4 = force? digits3;
    checkMissing(digits4);
    min = ldf min in base;
    r33 = dyn min(6, digits4);
    check L80() else D16();
  L82():
    sym6 = ldf seq_len;
    base6 = ldf seq_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L83() else L84();
  D16():
    deopt 61 [r33];
  L17(r36):
    r38 = `-`(r36, 1);
    s = toForSeq(r38);
    l = length(s);
    i = 0;
    goto L18(i);
  L27(r52):
    c13 = `as.logical`(r52);
    if c13 then L112() else L30();
  L80():
    goto L15(r33);
  L83():
    np2 = ld np;
    check L85() else D18();
  L84():
    r35 = dyn base6(<sym np>);
    goto L17(r35);
  L101():
    times = ld times;
    check L103() else D23();
  L102():
    r51 = dyn base10(<lang `==`(`[`(times, is.finite(times)), 0.0)>);
    goto L27(r51);
  D18():
    deopt 68 [np2];
  D23():
    deopt 102 [times];
  L18(i1):
    i2 = `+`.1(i1, 1);
    c10 = `<`.1(l, i2);
    if c10 then L86() else L25();
  L30():
    np4 = ld np;
    check L114() else D27();
  L31(r59):
    l1 = ld format;
    c15 = `is.object`(l1);
    if c15 then L119() else L120(r59, l1);
  L85():
    np3 = force? np2;
    checkMissing(np3);
    r37 = seq_len(np3);
    goto L17(r37);
  L103():
    times1 = force? times;
    checkMissing(times1);
    c12 = `is.object`(times1);
    if c12 then L104() else L105(times1);
  L112():
    goto L31("%Y-%m-%d");
  D27():
    deopt 117 [np4];
  L23(i18):
    goto L26();
  L25():
    x9 = `[[`(s, i2, NULL, TRUE);
    st i = x9;
    sym7 = ldf all;
    base7 = ldf all in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L87() else L88();
  L28(dx13):
    r57 = `==`(dx13, 0.0);
    all1 = ldf all in base;
    r58 = dyn all1(r57);
    check L111() else D26();
  L33(r66, dx15):
    st format = dx15;
    goto L34();
  L86():
    goto L23(i2);
  L104():
    dr10 = tryDispatchBuiltin.1("[", times1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L106() else L105(dr10);
  L105(times3):
    sym11 = ldf `is.finite`;
    base11 = ldf `is.finite` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L107() else L108();
  L114():
    np5 = force? np4;
    checkMissing(np5);
    r60 = `==`(np5, 0);
    c14 = `as.logical`(r60);
    if c14 then L115() else L32();
  L119():
    dr12 = tryDispatchBuiltin.0("[<-", l1, r59);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L121() else L120(r59, dr12);
  L120(r64, l3):
    f4 = ld f0;
    check L122() else D30();
  D26():
    deopt 114 [r58];
  D30():
    deopt 129 [r64, l3, r59, f4];
  L19(i7, r40):
    c11 = `as.logical`(r40);
    if c11 then L96() else L22();
  L29(times6, r54):
    __4 = ldf `[` in base;
    r56 = dyn __4(times6, r54);
    goto L28(r56);
  L32():
    paste0 = ldf paste0;
    check L117() else D28();
  L87():
    sym8 = ldf abs;
    base8 = ldf abs in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L89() else L90();
  L88():
    r39 = dyn base7(<lang `<`(abs(`-`(secs, round(secs, i))), 1.0E-6)>);
    goto L19(i2, r39);
  L106():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L28(dx12);
  L107():
    times7 = ld times;
    check L109() else D24();
  L108():
    r53 = dyn base11(<sym times>);
    goto L29(times3, r53);
  L111():
    goto L27(r58);
  L115():
    goto L31("%Y-%m-%d %H:%M:%S");
  L121():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L33(r59, dx14);
  L122():
    f5 = force? f4;
    ___ = ldf `[<-` in base;
    r67 = dyn ___(l3, r59, f5);
    goto L33(r64, r67);
  D24():
    deopt 106 [times3, times7];
  D28():
    deopt 124 [];
  L20(i10, r42):
    r48 = `<`(r42, 1.0E-6);
    all = ldf all in base;
    r49 = dyn all(r48);
    check L95() else D21();
  L22():
    goto L18(i7);
  L89():
    secs9 = ld secs;
    check L91() else D19();
  L90():
    r41 = dyn base8(<lang `-`(secs, round(secs, i))>);
    goto L20(i2, r41);
  L96():
    i16 = ld i;
    check L97() else D22();
  L109():
    times8 = force? times7;
    checkMissing(times8);
    is_finite1 = ldf `is.finite` in base;
    r55 = dyn is_finite1(times8);
    check L110() else D25();
  L117():
    p2 = prom<V +>{
      np6 = ld np;
      np7 = force? np6;
      checkMissing(np7);
      return np7;
    };
    r62 = dyn paste0("%Y-%m-%d %H:%M:%OS", p2);
    check L118() else D29();
  D19():
    deopt 77 [i2, secs9];
  D21():
    deopt 87 [i10, r49];
  D22():
    deopt 88 [i7, i16];
  D25():
    deopt 109 [times3, r55];
  D29():
    deopt 127 [r62];
  L91():
    secs10 = force? secs9;
    checkMissing(secs10);
    sym9 = ldf round;
    base9 = ldf round in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L92() else L93();
  L95():
    goto L19(i10, r49);
  L97():
    i17 = force? i16;
    checkMissing(i17);
    st np = i17;
    goto L23(i7);
  L110():
    goto L29(times3, r55);
  L118():
    goto L31(r62);
  L21(i13, secs13, r44):
    r46 = `-`(secs13, r44);
    abs = ldf abs in base;
    r47 = dyn abs(r46);
    check L94() else D20();
  L92():
    round = ldf round in base;
    r45 = dyn round(<sym secs>, <sym i>);
    goto L21(i2, secs10, r45);
  L93():
    r43 = dyn base9(<sym secs>, <sym i>);
    goto L21(i2, secs10, r43);
  D20():
    deopt 83 [i13, r47];
  L94():
    goto L20(i13, r47);
  }
}