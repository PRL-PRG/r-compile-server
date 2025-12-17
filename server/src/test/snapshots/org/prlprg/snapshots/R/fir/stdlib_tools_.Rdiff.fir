fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner192714890;
    st `.Rdiff` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner192714890(`no.q`) {
  (reg no_q:*) -+> V { var `no.q`:*, reg no_q_isMissing:L, reg no_q_orDefault:*, reg options:cls, reg r:V, reg r1:cls, reg no_q1:*, reg no_q2:V, reg c:L, reg r2:cls, reg r3:cls, reg r4:cls, reg commandArgs:cls, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg args:*, reg args1:V, reg length:cls, reg r8:V, reg r9:V, reg c1:L, reg Usage:cls, reg r10:V, reg do_exit:cls, reg r11:V, reg paste:cls, reg args2:*, reg args3:V, reg p:p(V +), reg r14:V, reg strsplit:cls, reg args4:*, reg args5:V, reg p1:p(V +), reg r16:V, reg c2:L, reg r18:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r19:V, reg c3:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg args6:*, reg args7:V, reg length1:cls, reg r23:V, reg r24:V, reg c4:L, reg _in_:cls, reg args8:*, reg args9:V, reg c5:L, reg args11:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r25:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg c6:cls, reg r29:V, reg p3:p(V +), reg r31:V, reg c7:L, reg Usage1:cls, reg r32:V, reg do_exit1:cls, reg r33:V, reg _in_1:cls, reg args12:*, reg args13:V, reg c8:L, reg args15:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r35:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r38:V, reg c9:cls, reg r39:V, reg p5:p(V +), reg r41:V, reg c10:L, reg cat:cls, reg R_version:*, reg R_version1:V, reg c11:L, reg R_version3:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r42:V, reg p6:p(V +), reg R_version4:*, reg R_version5:V, reg c12:L, reg R_version7:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r44:V, reg p7:p(V +), reg R_version8:*, reg R_version9:V, reg c13:L, reg R_version11:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg __6:cls, reg r46:V, reg p8:p(V +), reg r48:V, reg cat1:cls, reg _R_copyright_msg:cls, reg r49:V, reg p9:p(V +), reg r51:V, reg do_exit2:cls, reg r52:V, reg Usage2:cls, reg r54:V, reg do_exit3:cls, reg r55:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r57:V, reg r58:V, reg args16:*, reg args17:V, reg length2:cls, reg r59:V, reg r60:V, reg c14:L, reg Usage3:cls, reg r61:V, reg do_exit4:cls, reg r62:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r64:V, reg r65:V, reg _in_2:cls, reg args18:*, reg args19:V, reg p10:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r67:V, reg r68:V, reg c15:cls, reg r69:V, reg p11:p(V +), reg r71:V, reg any:cls, reg r72:V, reg forEx:*, reg forEx1:V, reg c16:L, reg args20:*, reg args21:V, reg c17:L, reg args23:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg is_ex:*, reg is_ex1:V, reg r73:V, reg __7:cls, reg r74:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r75:V, reg r76:V, reg args24:*, reg args25:V, reg c18:L, reg args27:V, reg dr16:V, reg dc8:L, reg dx19:V, reg dx20:V, reg __8:cls, reg r77:V, reg as_integer:cls, reg r78:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r79:V, reg r80:V, reg exitstatus:*, reg exitstatus1:V, reg is_na:cls, reg r81:V, reg c19:L, reg args28:*, reg args29:V, reg c20:L, reg args31:V, reg dr18:V, reg dc9:L, reg dx21:V, reg dx22:V, reg __9:cls, reg r83:V, reg left:*, reg left1:V, reg r84:V, reg c21:L, reg Rdiff:cls, reg left2:*, reg left3:V, reg p12:p(V +), reg args32:*, reg args33:V, reg c22:L, reg args35:V, reg dr20:V, reg dc10:L, reg dx23:V, reg dx24:V, reg __10:cls, reg r87:V, reg p13:p(V +), reg forEx2:*, reg forEx3:V, reg p14:p(V +), reg r90:V, reg status:*, reg status1:V, reg c23:L, reg exitstatus2:*, reg exitstatus3:V, reg do_exit5:cls, reg status2:*, reg status3:V, reg p15:p(V +), reg r92:V |
    mkenv;
    no_q_isMissing = missing.0(no_q);
    if no_q_isMissing then L0(FALSE) else L0(no_q);
  L0(no_q_orDefault):
    st `no.q` = no_q_orDefault;
    options = ldf options;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    r = dyn options[showErrorCalls](FALSE);
    check L33() else D1();
  D1():
    deopt 4 [r];
  L33():
    r1 = clos inner2708337952;
    st Usage = r1;
    no_q1 = ld `no.q`;
    check L34() else D2();
  D2():
    deopt 8 [no_q1];
  L34():
    no_q2 = force? no_q1;
    checkMissing(no_q2);
    c = `as.logical`(no_q2);
    if c then L35() else L1();
  L1():
    r4 = clos inner1714259301;
    goto L2(r4);
  L2(r3):
    st do_exit = r3;
    commandArgs = ldf commandArgs;
    check L37() else D3();
  L35():
    r2 = clos inner1714259301;
    goto L2(r2);
  D3():
    deopt 16 [];
  L37():
    r5 = dyn commandArgs(TRUE);
    check L38() else D4();
  D4():
    deopt 18 [r5];
  L38():
    st args = r5;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L3(r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L43() else L4();
  L39():
    args = ld args;
    check L41() else D5();
  L40():
    r6 = dyn base(<sym args>);
    goto L3(r6);
  D5():
    deopt 22 [args];
  L4():
    goto L5();
  L5():
    paste = ldf paste;
    check L49() else D11();
  L41():
    args1 = force? args;
    checkMissing(args1);
    length = ldf length in base;
    r8 = dyn length(args1);
    check L42() else D6();
  L43():
    Usage = ldf Usage;
    check L44() else D7();
  D6():
    deopt 25 [r8];
  D7():
    deopt 28 [];
  D11():
    deopt 37 [];
  L42():
    goto L3(r8);
  L44():
    r10 = dyn Usage();
    check L45() else D8();
  L49():
    p = prom<V +>{
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      return args3;
    };
    r14 = dyn paste[, collapse](p, " ");
    check L50() else D12();
  D8():
    deopt 29 [r10];
  D12():
    deopt 41 [r14];
  L45():
    do_exit = ldf do_exit;
    check L46() else D9();
  L50():
    st args = r14;
    strsplit = ldf strsplit;
    check L51() else D13();
  D9():
    deopt 31 [];
  D13():
    deopt 44 [];
  L46():
    r11 = dyn do_exit(1);
    check L47() else D10();
  L51():
    p1 = prom<V +>{
      args4 = ld args;
      args5 = force? args4;
      checkMissing(args5);
      return args5;
    };
    r16 = dyn strsplit[, , fixed](p1, "nextArg", TRUE);
    check L52() else D14();
  D10():
    deopt 33 [r11];
  D14():
    deopt 49 [r16];
  L47():
    goto L5();
  L52():
    c2 = `is.object`(r16);
    if c2 then L53() else L54(r16);
  L6(dx1):
    c3 = `is.object`(dx1);
    if c3 then L56() else L57(dx1);
  L53():
    dr = tryDispatchBuiltin.1("[[", r16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L55() else L54(dr);
  L54(r18):
    __ = ldf `[[` in base;
    r19 = dyn __(r18, 1);
    goto L6(r19);
  L7(dx5):
    st args = dx5;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L59() else L60();
  L55():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L56():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L58() else L57(dr2);
  L57(dx3):
    __1 = ldf `[` in base;
    r20 = dyn __1(dx3, -1);
    goto L7(r20);
  L8(r22):
    r24 = `==`(r22, 1);
    c4 = `as.logical`(r24);
    if c4 then L63() else L9();
  L58():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx4);
  L59():
    args6 = ld args;
    check L61() else D15();
  L60():
    r21 = dyn base1(<sym args>);
    goto L8(r21);
  D15():
    deopt 59 [args6];
  L9():
    goto L14();
  L14():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L87() else L88();
  L61():
    args7 = force? args6;
    checkMissing(args7);
    length1 = ldf length in base;
    r23 = dyn length1(args7);
    check L62() else D16();
  L63():
    _in_ = ldf `%in%`;
    check L64() else D17();
  D16():
    deopt 62 [r23];
  D17():
    deopt 66 [];
  L15(r58):
    r60 = `==`(r58, 0);
    c14 = `as.logical`(r60);
    if c14 then L91() else L16();
  L62():
    goto L8(r23);
  L64():
    p2 = prom<V +>{
      args8 = ld args;
      args9 = force? args8;
      checkMissing(args9);
      c5 = `is.object`(args9);
      if c5 then L1() else L2(args9);
    L0(dx7):
      return dx7;
    L1():
      dr4 = tryDispatchBuiltin.1("[", args9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(args11):
      __2 = ldf `[` in base;
      r25 = dyn __2(args11, 1);
      goto L0(r25);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx6);
    };
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c6 = ldf c in base;
      r29 = dyn c6("-h", "--help");
      goto L0(r29);
    L2():
      r27 = dyn base2("-h", "--help");
      goto L0(r27);
    };
    r31 = dyn _in_(p2, p3);
    check L65() else D18();
  L87():
    args16 = ld args;
    check L89() else D35();
  L88():
    r57 = dyn base4(<sym args>);
    goto L15(r57);
  D18():
    deopt 69 [r31];
  D35():
    deopt 122 [args16];
  L16():
    goto L17();
  L17():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L97() else L98();
  L65():
    c7 = `as.logical`(r31);
    if c7 then L66() else L10();
  L89():
    args17 = force? args16;
    checkMissing(args17);
    length2 = ldf length in base;
    r59 = dyn length2(args17);
    check L90() else D36();
  L91():
    Usage3 = ldf Usage;
    check L92() else D37();
  D36():
    deopt 125 [r59];
  D37():
    deopt 129 [];
  L10():
    goto L11();
  L11():
    _in_1 = ldf `%in%`;
    check L72() else D23();
  L18(r65):
    st forEx = r65;
    forEx = ld forEx;
    check L102() else D44();
  L66():
    Usage1 = ldf Usage;
    check L67() else D19();
  L90():
    goto L15(r59);
  L92():
    r61 = dyn Usage3();
    check L93() else D38();
  L97():
    _in_2 = ldf `%in%`;
    check L99() else D41();
  L98():
    r64 = dyn base5(<lang `<-`(is.ex, `%in%`(args, c("-e", "--forEx")))>);
    goto L18(r64);
  D19():
    deopt 71 [];
  D23():
    deopt 80 [];
  D38():
    deopt 130 [r61];
  D41():
    deopt 140 [];
  D44():
    deopt 148 [forEx];
  L67():
    r32 = dyn Usage1();
    check L68() else D20();
  L72():
    p4 = prom<V +>{
      args12 = ld args;
      args13 = force? args12;
      checkMissing(args13);
      c8 = `is.object`(args13);
      if c8 then L1() else L2(args13);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("[", args13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(args15):
      __3 = ldf `[` in base;
      r35 = dyn __3(args15, 1);
      goto L0(r35);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    p5 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      c9 = ldf c in base;
      r39 = dyn c9("-v", "--version");
      goto L0(r39);
    L2():
      r37 = dyn base3("-v", "--version");
      goto L0(r37);
    };
    r41 = dyn _in_1(p4, p5);
    check L73() else D24();
  L93():
    do_exit4 = ldf do_exit;
    check L94() else D39();
  L99():
    p10 = prom<V +>{
      args18 = ld args;
      args19 = force? args18;
      checkMissing(args19);
      return args19;
    };
    p11 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r68):
      return r68;
    L1():
      c15 = ldf c in base;
      r69 = dyn c15("-e", "--forEx");
      goto L0(r69);
    L2():
      r67 = dyn base6("-e", "--forEx");
      goto L0(r67);
    };
    r71 = dyn _in_2(p10, p11);
    check L100() else D42();
  L102():
    forEx1 = force? forEx;
    checkMissing(forEx1);
    c16 = `as.logical`(forEx1);
    if c16 then L103() else L19();
  D20():
    deopt 72 [r32];
  D24():
    deopt 83 [r41];
  D39():
    deopt 132 [];
  D42():
    deopt 143 [r71];
  L19():
    goto L21();
  L21():
    sym7 = ldf `as.integer`;
    base7 = ldf `as.integer` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L110() else L111();
  L68():
    do_exit1 = ldf do_exit;
    check L69() else D21();
  L73():
    c10 = `as.logical`(r41);
    if c10 then L74() else L12();
  L94():
    r62 = dyn do_exit4(1);
    check L95() else D40();
  L100():
    st `is.ex` = r71;
    any = ldf any in base;
    r72 = dyn any(r71);
    check L101() else D43();
  L103():
    args20 = ld args;
    check L104() else D45();
  D21():
    deopt 74 [];
  D40():
    deopt 134 [r62];
  D43():
    deopt 146 [r72];
  D45():
    deopt 150 [args20];
  L12():
    goto L13();
  L13():
    Usage2 = ldf Usage;
    check L82() else D31();
  L22(r76):
    st exitstatus = r76;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L117() else L118();
  L69():
    r33 = dyn do_exit1(0.0);
    check L70() else D22();
  L74():
    cat = ldf cat;
    check L75() else D25();
  L95():
    goto L17();
  L101():
    goto L18(r72);
  L104():
    args21 = force? args20;
    checkMissing(args21);
    c17 = `is.object`(args21);
    if c17 then L105() else L106(args21);
  L110():
    args24 = ld args;
    check L112() else D47();
  L111():
    r75 = dyn base7(<lang `[`(args, 3)>);
    goto L22(r75);
  D22():
    deopt 76 [r33];
  D25():
    deopt 85 [];
  D31():
    deopt 112 [];
  D47():
    deopt 161 [args24];
  L20(dx17):
    st args = dx17;
    goto L21();
  L24(r80):
    c19 = `as.logical`(r80);
    if c19 then L121() else L25();
  L70():
    goto L11();
  L75():
    p6 = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c11 = `is.object`(R_version1);
      if c11 then L1() else L2(R_version1);
    L0(dx11):
      return dx11;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", R_version1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(R_version3):
      __4 = ldf `[[` in base;
      r42 = dyn __4(R_version3, "major");
      goto L0(r42);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx10);
    };
    p7 = prom<V +>{
      R_version4 = ld `R.version`;
      R_version5 = force? R_version4;
      checkMissing(R_version5);
      c12 = `is.object`(R_version5);
      if c12 then L1() else L2(R_version5);
    L0(dx13):
      return dx13;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", R_version5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(R_version7):
      __5 = ldf `[[` in base;
      r44 = dyn __5(R_version7, "minor");
      goto L0(r44);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    };
    p8 = prom<V +>{
      R_version8 = ld `R.version`;
      R_version9 = force? R_version8;
      checkMissing(R_version9);
      c13 = `is.object`(R_version9);
      if c13 then L1() else L2(R_version9);
    L0(dx15):
      return dx15;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", R_version9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(R_version11):
      __6 = ldf `[[` in base;
      r46 = dyn __6(R_version11, "svn rev");
      goto L0(r46);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    r48 = dyn cat[, , , , , , , sep]("R output diff: ", p6, ".", p7, " (r", p8, ")\n", "");
    check L76() else D26();
  L82():
    r54 = dyn Usage2();
    check L83() else D32();
  L105():
    dr14 = tryDispatchBuiltin.1("[", args21);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L107() else L106(dr14);
  L106(args23):
    is_ex = ld `is.ex`;
    check L108() else D46();
  L112():
    args25 = force? args24;
    checkMissing(args25);
    c18 = `is.object`(args25);
    if c18 then L113() else L114(args25);
  L117():
    exitstatus = ld exitstatus;
    check L119() else D49();
  L118():
    r79 = dyn base8(<sym exitstatus>);
    goto L24(r79);
  D26():
    deopt 95 [r48];
  D32():
    deopt 113 [r54];
  D46():
    deopt 152 [args23, is_ex];
  D49():
    deopt 171 [exitstatus];
  L23(dx20):
    as_integer = ldf `as.integer` in base;
    r78 = dyn as_integer(dx20);
    check L116() else D48();
  L25():
    goto L26();
  L26():
    args28 = ld args;
    check L123() else D51();
  L76():
    cat1 = ldf cat;
    check L77() else D27();
  L83():
    do_exit3 = ldf do_exit;
    check L84() else D33();
  L107():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L20(dx16);
  L108():
    is_ex1 = force? is_ex;
    checkMissing(is_ex1);
    r73 = `!`(is_ex1);
    __7 = ldf `[` in base;
    r74 = dyn __7(args23, r73);
    goto L20(r74);
  L113():
    dr16 = tryDispatchBuiltin.1("[", args25);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L115() else L114(dr16);
  L114(args27):
    __8 = ldf `[` in base;
    r77 = dyn __8(args27, 3);
    goto L23(r77);
  L119():
    exitstatus1 = force? exitstatus;
    checkMissing(exitstatus1);
    is_na = ldf `is.na` in base;
    r81 = dyn is_na(exitstatus1);
    check L120() else D50();
  L121():
    st exitstatus = 0;
    goto L26();
  D27():
    deopt 97 [];
  D33():
    deopt 115 [];
  D48():
    deopt 167 [r78];
  D50():
    deopt 174 [r81];
  D51():
    deopt 180 [args28];
  L77():
    p9 = prom<V +>{
      _R_copyright_msg = ldf `.R_copyright_msg`;
      r49 = dyn _R_copyright_msg(2000.0);
      return r49;
    };
    r51 = dyn cat1[, , , , sep]("", p9, "This is free software; see the GNU General Public License version 2", "or later for copying conditions.  There is NO warranty.", "\n");
    check L78() else D28();
  L84():
    r55 = dyn do_exit3(1);
    check L85() else D34();
  L115():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L23(dx19);
  L116():
    goto L22(r78);
  L120():
    goto L24(r81);
  L123():
    args29 = force? args28;
    checkMissing(args29);
    c20 = `is.object`(args29);
    if c20 then L124() else L125(args29);
  D28():
    deopt 104 [r51];
  D34():
    deopt 117 [r55];
  L27(dx22):
    st left = dx22;
    left = ld left;
    check L127() else D52();
  L78():
    do_exit2 = ldf do_exit;
    check L79() else D29();
  L85():
    goto L14();
  L124():
    dr18 = tryDispatchBuiltin.1("[", args29);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L126() else L125(dr18);
  L125(args31):
    __9 = ldf `[` in base;
    r83 = dyn __9(args31, 1);
    goto L27(r83);
  D29():
    deopt 106 [];
  D52():
    deopt 186 [left];
  L79():
    r52 = dyn do_exit2(0.0);
    check L80() else D30();
  L126():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L27(dx21);
  L127():
    left1 = force? left;
    checkMissing(left1);
    r84 = `==`(left1, "-");
    c21 = `as.logical`(r84);
    if c21 then L128() else L28();
  D30():
    deopt 108 [r52];
  L28():
    goto L29();
  L29():
    Rdiff = ldf Rdiff;
    check L130() else D53();
  L80():
    goto L13();
  L128():
    st left = "stdin";
    goto L29();
  D53():
    deopt 196 [];
  L130():
    p12 = prom<V +>{
      left2 = ld left;
      left3 = force? left2;
      checkMissing(left3);
      return left3;
    };
    p13 = prom<V +>{
      args32 = ld args;
      args33 = force? args32;
      checkMissing(args33);
      c22 = `is.object`(args33);
      if c22 then L1() else L2(args33);
    L0(dx24):
      return dx24;
    L1():
      dr20 = tryDispatchBuiltin.1("[", args33);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(args35):
      __10 = ldf `[` in base;
      r87 = dyn __10(args35, 2);
      goto L0(r87);
    L3():
      dx23 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx23);
    };
    p14 = prom<V +>{
      forEx2 = ld forEx;
      forEx3 = force? forEx2;
      checkMissing(forEx3);
      return forEx3;
    };
    r90 = dyn Rdiff[, , useDiff, forEx](p12, p13, TRUE, p14);
    check L131() else D54();
  D54():
    deopt 203 [r90];
  L131():
    st status = r90;
    status = ld status;
    check L132() else D55();
  D55():
    deopt 205 [status];
  L132():
    status1 = force? status;
    checkMissing(status1);
    c23 = `as.logical`(status1);
    if c23 then L133() else L30();
  L30():
    goto L31();
  L31():
    do_exit5 = ldf do_exit;
    check L136() else D57();
  L133():
    exitstatus2 = ld exitstatus;
    check L134() else D56();
  D56():
    deopt 207 [exitstatus2];
  D57():
    deopt 213 [];
  L134():
    exitstatus3 = force? exitstatus2;
    checkMissing(exitstatus3);
    st status = exitstatus3;
    goto L31();
  L136():
    p15 = prom<V +>{
      status2 = ld status;
      status3 = force? status2;
      checkMissing(status3);
      return status3;
    };
    r92 = dyn do_exit5(p15);
    check L137() else D58();
  D58():
    deopt 215 [r92];
  L137():
    popenv;
    return r92;
  }
}
fun inner2708337952() {
  () -+> V { reg cat:cls, reg r:V |
    mkenv;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn cat[, , , , , , , , , , , sep]("Usage: R CMD Rdiff [options] FROM-file TO-file EXITSTATUS", "", "Diff R output files FROM-FILE and TO-FILE discarding the R startup message,", "where FROM-FILE equal to '-' means stdin.", "", "Options:", "  -e, --forEx    uses 'forEx = TRUE' in Rdiff()", "  -h, --help     print this help message and exit", "  -v, --version  print version info and exit", "", "Report bugs at <https://bugs.R-project.org>.", "\n");
    check L1() else D1();
  D1():
    deopt 15 [r];
  L1():
    popenv;
    return r;
  }
}
fun inner1714259301(status) {
  (reg status:*) -+> V { var status:*, reg status_isMissing:L, reg status_orDefault:*, reg status1:*, reg status2:V, reg c:L, reg stop:*, reg stop1:V, reg stop2:V, reg message:*, reg message1:V, reg stop3:cls, reg status3:*, reg status4:V, reg p:p(V +), reg r1:V |
    mkenv;
    status_isMissing = missing.0(status);
    if status_isMissing then L0(0) else L0(status);
  L0(status_orDefault):
    st status = status_orDefault;
    status1 = ld status;
    check L3() else D0();
  D0():
    deopt 0 [status1];
  L3():
    status2 = force? status1;
    checkMissing(status2);
    c = `as.logical`(status2);
    if c then L4() else L1();
  L1():
    message = ld message;
    check L7() else D2();
  L2(stop2):
    checkFun.0(stop2);
    stop3 = stop2 as cls;
    p = prom<V +>{
      status3 = ld status;
      status4 = force? status3;
      checkMissing(status4);
      return status4;
    };
    r1 = dyn stop3(".Rdiff() exit status ", p);
    check L8() else D3();
  L4():
    stop = ld stop;
    check L5() else D1();
  D1():
    deopt 2 [stop];
  D2():
    deopt 4 [message];
  D3():
    deopt 9 [r1];
  L5():
    stop1 = force? stop;
    checkMissing(stop1);
    goto L2(stop1);
  L7():
    message1 = force? message;
    checkMissing(message1);
    goto L2(message1);
  L8():
    popenv;
    return r1;
  }
}