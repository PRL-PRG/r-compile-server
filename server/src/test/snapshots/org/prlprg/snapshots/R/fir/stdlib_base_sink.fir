fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner30290481;
    st sink = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner30290481(file, append, type, split) {
  (reg file:*, reg append:*, reg type:*, reg split:*) -+> V { var file:*, reg file_isMissing:L, reg file_orDefault:*, var append:*, reg append_isMissing:L, reg append_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var split:*, reg split_isMissing:L, reg split_orDefault:*, reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r5:V, reg type3:*, reg type4:V, reg r6:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg file1:*, reg file2:V, reg c2:V, reg c3:L, reg stderr:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg file3:*, reg file4:V, reg inherits:cls, reg r13:V, reg r14:V, reg c4:L, reg c5:V, reg isOpen:cls, reg file5:*, reg file6:V, reg p2:p(V +), reg r16:V, reg r17:V, reg c7:L, reg c8:V, reg c10:L, reg stop:cls, reg r18:V, reg split1:*, reg split2:V, reg c11:L, reg stop1:cls, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg file7:*, reg file8:V, reg sink:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg file9:*, reg file10:V, reg c12:V, reg c13:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg file11:*, reg file12:V, reg c14:L, reg c15:L, reg file13:cls, reg file14:*, reg file15:V, reg p3:p(V +), reg append1:*, reg append2:V, reg c16:L, reg p4:p(V +), reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg file16:*, reg file17:V, reg inherits1:cls, reg r34:V, reg r35:V, reg c17:L, reg stop2:cls, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg file18:*, reg file19:V, reg closeOnExit:*, reg closeOnExit1:V, reg split3:*, reg split4:V, reg sink1:cls, reg r39:V |
    mkenv;
    file_isMissing = missing.0(file);
    if file_isMissing then L0(NULL) else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L1(FALSE) else L1(append);
  L1(append_orDefault):
    st append = append_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L2() else L3(type);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("output", "message");
      goto L0(r2);
    L2():
      r = dyn base("output", "message");
      goto L0(r);
    };
    goto L3(p);
  L3(type_orDefault):
    st type = type_orDefault;
    split_isMissing = missing.0(split);
    if split_isMissing then L4(FALSE) else L4(split);
  L4(split_orDefault):
    st split = split_orDefault;
    match_arg = ldf `match.arg`;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r5 = dyn match_arg(p1);
    check L24() else D1();
  D1():
    deopt 3 [r5];
  L24():
    st type = r5;
    type3 = ld type;
    check L25() else D2();
  D2():
    deopt 5 [type3];
  L25():
    type4 = force? type3;
    checkMissing(type4);
    r6 = `==`(type4, "message");
    c1 = `as.logical`(r6);
    if c1 then L26() else L5();
  L5():
    st closeOnExit = FALSE;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L26():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L6(r8):
    c3 = `as.logical`(r8);
    if c3 then L30() else L7();
  L15(r25):
    c13 = `as.logical`(r25);
    if c13 then L59() else L16();
  L27():
    file1 = ld file;
    check L29() else D3();
  L28():
    r7 = dyn base1(<sym file>);
    goto L6(r7);
  L56():
    file9 = ld file;
    check L58() else D17();
  L57():
    r24 = dyn base4(<sym file>);
    goto L15(r24);
  D3():
    deopt 10 [file1];
  D17():
    deopt 59 [file9];
  L7():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L8():
    split1 = ld split;
    check L46() else D12();
  L16():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L17():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L29():
    file2 = force? file1;
    checkMissing(file2);
    c2 = `==`(file2, NULL);
    goto L6(c2);
  L30():
    stderr = ldf stderr;
    check L31() else D4();
  L58():
    file10 = force? file9;
    checkMissing(file10);
    c12 = `==`(file10, NULL);
    goto L15(c12);
  L59():
    st file = -1;
    goto L17();
  D4():
    deopt 14 [];
  D12():
    deopt 38 [split1];
  L9(r12):
    r14 = `!`(r12);
    c4 = `as.logical`(r14);
    if c4 then L10(c4) else L38();
  L18(r28):
    c15 = `as.logical`(r28);
    if c15 then L64() else L19();
  L22(r38):
    popenv;
    return r38;
  L31():
    r9 = dyn stderr();
    check L32() else D5();
  L34():
    file3 = ld file;
    check L36() else D6();
  L35():
    r11 = dyn base2(<sym file>, "connection");
    goto L9(r11);
  L46():
    split2 = force? split1;
    checkMissing(split2);
    c11 = `as.logical`(split2);
    if c11 then L47() else L12();
  L61():
    file11 = ld file;
    check L63() else D18();
  L62():
    r27 = dyn base5(<sym file>);
    goto L18(r27);
  L76():
    file18 = ld file;
    check L78() else D25();
  L77():
    r37 = dyn base7(<lang sink(file, closeOnExit, FALSE, split)>);
    goto L22(r37);
  D5():
    deopt 15 [r9];
  D6():
    deopt 19 [file3];
  D18():
    deopt 66 [file11];
  D25():
    deopt 95 [file18];
  L10(c5):
    c10 = `as.logical`(c5);
    if c10 then L42() else L11();
  L12():
    goto L13();
  L13():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L19():
    sym6 = ldf inherits;
    base6 = ldf inherits in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  L32():
    st file = r9;
    goto L8();
  L36():
    file4 = force? file3;
    checkMissing(file4);
    inherits = ldf inherits in base;
    r13 = dyn inherits(file4, "connection", FALSE);
    check L37() else D7();
  L38():
    isOpen = ldf isOpen;
    check L39() else D8();
  L47():
    stop1 = ldf stop;
    check L48() else D13();
  L63():
    file12 = force? file11;
    checkMissing(file12);
    c14 = `is.character`(file12);
    goto L18(c14);
  L64():
    file13 = ldf file;
    check L65() else D19();
  L78():
    file19 = force? file18;
    checkMissing(file19);
    closeOnExit = ld closeOnExit;
    check L79() else D26();
  D7():
    deopt 24 [r13];
  D8():
    deopt 27 [c4];
  D13():
    deopt 41 [];
  D19():
    deopt 70 [];
  D26():
    deopt 97 [closeOnExit];
  L11():
    goto L8();
  L14(r22):
    popenv;
    return r22;
  L20(r33):
    r35 = `!`(r33);
    c17 = `as.logical`(r35);
    if c17 then L72() else L21();
  L37():
    goto L9(r13);
  L39():
    p2 = prom<V +>{
      file5 = ld file;
      file6 = force? file5;
      checkMissing(file6);
      return file6;
    };
    r16 = dyn isOpen(p2);
    check L40() else D9();
  L42():
    stop = ldf stop;
    check L43() else D10();
  L48():
    r19 = dyn stop1("cannot split the message connection");
    check L49() else D14();
  L51():
    file7 = ld file;
    check L53() else D15();
  L52():
    r21 = dyn base3(<lang sink(file, FALSE, TRUE, FALSE)>);
    goto L14(r21);
  L65():
    p3 = prom<V +>{
      file14 = ld file;
      file15 = force? file14;
      checkMissing(file15);
      return file15;
    };
    p4 = prom<V +>{
      append1 = ld append;
      append2 = force? append1;
      checkMissing(append2);
      c16 = `as.logical`(append2);
      if c16 then L1() else L0();
    L0():
      return "w";
    L1():
      return "a";
    };
    r31 = dyn file13(p3, p4);
    check L66() else D20();
  L68():
    file16 = ld file;
    check L70() else D21();
  L69():
    r32 = dyn base6(<sym file>, "connection");
    goto L20(r32);
  L79():
    closeOnExit1 = force? closeOnExit;
    checkMissing(closeOnExit1);
    split3 = ld split;
    check L80() else D27();
  D9():
    deopt 29 [c4, r16];
  D10():
    deopt 33 [];
  D14():
    deopt 43 [r19];
  D15():
    deopt 48 [file7];
  D20():
    deopt 73 [r31];
  D21():
    deopt 80 [file16];
  D27():
    deopt 100 [split3];
  L21():
    goto L17();
  L40():
    r17 = `!`(r16);
    c7 = `as.logical`(r17);
    c8 = `||`(c4, c7);
    goto L10(c8);
  L43():
    r18 = dyn stop("'file' must be NULL or an already open connection");
    check L44() else D11();
  L49():
    goto L13();
  L53():
    file8 = force? file7;
    checkMissing(file8);
    sink = ldf sink in base;
    r23 = dyn sink(file8, FALSE, TRUE, FALSE);
    check L54() else D16();
  L66():
    st file = r31;
    st closeOnExit = TRUE;
    goto L17();
  L70():
    file17 = force? file16;
    checkMissing(file17);
    inherits1 = ldf inherits in base;
    r34 = dyn inherits1(file17, "connection", FALSE);
    check L71() else D22();
  L72():
    stop2 = ldf stop;
    check L73() else D23();
  L80():
    split4 = force? split3;
    checkMissing(split4);
    sink1 = ldf sink in base;
    r39 = dyn sink1(file19, closeOnExit1, FALSE, split4);
    check L81() else D28();
  D11():
    deopt 35 [r18];
  D16():
    deopt 54 [r23];
  D22():
    deopt 85 [r34];
  D23():
    deopt 88 [];
  D28():
    deopt 103 [r39];
  L44():
    goto L8();
  L54():
    goto L14(r23);
  L71():
    goto L20(r34);
  L73():
    r36 = dyn stop2("'file' must be NULL, a connection or a character string");
    check L74() else D24();
  L81():
    goto L22(r39);
  D24():
    deopt 90 [r36];
  L74():
    goto L17();
  }
}