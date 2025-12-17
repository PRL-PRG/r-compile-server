fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.checkDocFiles` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg unlist:cls, reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg names:cls, reg r5:V, reg p:p(V +), reg _fmt:*, reg _fmt1:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg as_character:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg x3:*, reg x4:V, reg attr:cls, reg r16:V, reg length:cls, reg r17:V, reg c:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg y:*, reg y1:V, reg unlist1:cls, reg lapply1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg bad_lines:*, reg bad_lines1:V, reg names1:cls, reg r22:V, reg p3:p(V +), reg r24:cls, reg p4:p(V +), reg r26:V, reg p5:p(V +), reg r28:V, reg c1:cls, reg r29:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg y2:*, reg y3:V, reg length1:cls, reg r33:V, reg c2:L, reg c4:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg c7:L, reg r35:V, reg bad_lines2:*, reg bad_lines3:V, reg length2:cls, reg r36:V, reg r37:V, reg c8:L, reg c9:V, reg c11:L, reg c13:V, reg Sys_getenv:cls, reg r38:V, reg r39:V, reg c14:L, reg c15:V, reg c17:L, reg c19:V, reg isTRUE:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg x5:*, reg x6:V, reg attr1:cls, reg r42:V, reg p6:p(V +), reg r44:V, reg c20:L, reg c21:V, reg c23:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg r46:V, reg y4:*, reg y5:V, reg c24:cls, reg r47:V, reg y6:*, reg y7:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner3369547807;
    st `.fmt` = r;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r2):
    st y = r2;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L14():
    unlist = ldf unlist;
    check L16() else D0();
  L15():
    r1 = dyn base(<lang unlist(lapply(names(x), .fmt))>);
    goto L0(r1);
  D0():
    deopt 6 [];
  L1(r13):
    c = `as.logical`(r13);
    if c then L26() else L3();
  L16():
    p2 = prom<V +>{
      lapply = ldf lapply;
      p = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r4):
        return r4;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        names = ldf names in base;
        r5 = dyn names(x2);
        goto L0(r5);
      L2():
        r3 = dyn base1(<sym x>);
        goto L0(r3);
      };
      p1 = prom<V +>{
        _fmt = ld `.fmt`;
        _fmt1 = force? _fmt;
        checkMissing(_fmt1);
        return _fmt1;
      };
      r8 = dyn lapply(p, p1);
      return r8;
    };
    r10 = dyn unlist(p2);
    check L17() else D1();
  L19():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  L20():
    r12 = dyn base2(<lang `<-`(bad_lines, attr(x, "bad_lines"))>);
    goto L1(r12);
  D1():
    deopt 8 [r10];
  L2(r15):
    st bad_lines = r15;
    length = ldf length in base;
    r17 = dyn length(r15);
    check L25() else D5();
  L3():
    goto L5();
  L5():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L34() else L35();
  L17():
    as_character = ldf `as.character` in base;
    r11 = dyn as_character(r10);
    check L18() else D2();
  L21():
    x3 = ld x;
    check L23() else D3();
  L22():
    r14 = dyn base3(<sym x>, "bad_lines");
    goto L2(r14);
  L26():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L27() else L28();
  D2():
    deopt 10 [r11];
  D3():
    deopt 16 [x3];
  D5():
    deopt 23 [r17];
  L4(r19):
    st y = r19;
    goto L5();
  L6(r32):
    c2 = `as.logical`(r32);
    if c2 then L38() else L7(c2);
  L18():
    goto L0(r11);
  L23():
    x4 = force? x3;
    checkMissing(x4);
    attr = ldf attr in base;
    r16 = dyn attr(x4, "bad_lines");
    check L24() else D4();
  L25():
    goto L1(r17);
  L27():
    y = ld y;
    check L29() else D6();
  L28():
    r18 = dyn base4(<sym y>, <lang unlist(lapply(names(bad_lines), function((nm=), {
            c(gettextf("Bad \\usage lines found in Rd file '%s':", nm), paste0("  ", `[[`(bad_lines, nm)))
          }, NULL)))>, "");
    goto L4(r18);
  L34():
    y2 = ld y;
    check L36() else D10();
  L35():
    r31 = dyn base6(<sym y>);
    goto L6(r31);
  D4():
    deopt 20 [r16];
  D6():
    deopt 26 [y];
  D10():
    deopt 40 [y2];
  L7(c4):
    c11 = `as.logical`(c4);
    if c11 then L44() else L9(c11);
  L24():
    goto L2(r16);
  L29():
    y1 = force? y;
    checkMissing(y1);
    unlist1 = ldf unlist;
    check L30() else D7();
  L36():
    y3 = force? y2;
    checkMissing(y3);
    length1 = ldf length in base;
    r33 = dyn length1(y3);
    check L37() else D11();
  L38():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L39() else L40();
  D7():
    deopt 29 [];
  D11():
    deopt 43 [r33];
  L8(c7, r35):
    r37 = `!`(r35);
    c8 = `as.logical`(r37);
    c9 = `&&`(c7, c8);
    goto L7(c9);
  L9(c13):
    c17 = `as.logical`(c13);
    if c17 then L48() else L10(c17);
  L30():
    p5 = prom<V +>{
      lapply1 = ldf lapply;
      p3 = prom<V +>{
        sym5 = ldf names;
        base5 = ldf names in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r21):
        return r21;
      L1():
        bad_lines = ld bad_lines;
        bad_lines1 = force? bad_lines;
        checkMissing(bad_lines1);
        names1 = ldf names in base;
        r22 = dyn names1(bad_lines1);
        goto L0(r22);
      L2():
        r20 = dyn base5(<sym bad_lines>);
        goto L0(r20);
      };
      p4 = prom<V +>{
        r24 = clos inner3369547807;
        return r24;
      };
      r26 = dyn lapply1(p3, p4);
      return r26;
    };
    r28 = dyn unlist1(p5);
    check L31() else D8();
  L37():
    goto L6(r33);
  L39():
    bad_lines2 = ld bad_lines;
    check L41() else D12();
  L40():
    r34 = dyn base7(<sym bad_lines>);
    goto L8(c2, r34);
  L44():
    Sys_getenv = ldf `Sys.getenv`;
    check L45() else D14();
  D8():
    deopt 31 [r28];
  D12():
    deopt 46 [c2, bad_lines2];
  D14():
    deopt 53 [c11];
  L10(c19):
    c23 = `as.logical`(c19);
    if c23 then L52() else L11();
  L31():
    c1 = ldf c in base;
    r29 = dyn c1(y1, r28, "");
    check L32() else D9();
  L41():
    bad_lines3 = force? bad_lines2;
    checkMissing(bad_lines3);
    length2 = ldf length in base;
    r36 = dyn length2(bad_lines3);
    check L42() else D13();
  L45():
    r38 = dyn Sys_getenv("__R_CHECK_DOC_FILES_NOTE_IF_ALL_SPECIAL__", "FALSE");
    check L46() else D15();
  L48():
    isTRUE = ldf isTRUE;
    check L49() else D16();
  D9():
    deopt 34 [r29];
  D13():
    deopt 49 [c2, r36];
  D15():
    deopt 56 [c11, r38];
  D16():
    deopt 61 [c17];
  L11():
    goto L13();
  L13():
    y6 = ld y;
    check L58() else D20();
  L32():
    goto L4(r29);
  L42():
    goto L8(c2, r36);
  L46():
    r39 = `==`(r38, "TRUE");
    c14 = `as.logical`(r39);
    c15 = `&&`(c11, c14);
    goto L9(c15);
  L49():
    p6 = prom<V +>{
      sym8 = ldf attr;
      base8 = ldf attr in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      attr1 = ldf attr in base;
      r42 = dyn attr1(x6, "all_special");
      goto L0(r42);
    L2():
      r40 = dyn base8(<sym x>, "all_special");
      goto L0(r40);
    };
    r44 = dyn isTRUE(p6);
    check L50() else D17();
  L52():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L53() else L54();
  D17():
    deopt 63 [c17, r44];
  D20():
    deopt 75 [y6];
  L12(r46):
    st y = r46;
    goto L13();
  L50():
    c20 = `as.logical`(r44);
    c21 = `&&`(c17, c20);
    goto L10(c21);
  L53():
    y4 = ld y;
    check L55() else D18();
  L54():
    r45 = dyn base9(<sym y>, "All issues in internal Rd files checked specially.");
    goto L12(r45);
  L58():
    y7 = force? y6;
    checkMissing(y7);
    popenv;
    return y7;
  D18():
    deopt 67 [y4];
  L55():
    y5 = force? y4;
    checkMissing(y5);
    c24 = ldf c in base;
    r47 = dyn c24(y5, "All issues in internal Rd files checked specially.");
    check L56() else D19();
  D19():
    deopt 71 [r47];
  L56():
    goto L12(r47);
  }
}
fun inner3369547807(nm) {
  (reg nm:*) -+> V { var nm:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nm1:*, reg nm2:V, reg __:cls, reg r5:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r6:V, reg length:cls, reg r7:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg gettextf:cls, reg nm3:*, reg nm4:V, reg p:p(V +), reg r11:V, reg _pretty_format:cls, reg unique:cls, reg arg_names_in_usage_missing_in_arg_list:*, reg arg_names_in_usage_missing_in_arg_list1:V, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg r15:V, reg c3:cls, reg r16:V, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg x4:*, reg x5:V, reg c4:L, reg x7:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg nm5:*, reg nm6:V, reg __2:cls, reg r20:V, reg c5:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r21:V, reg length1:cls, reg r22:V, reg c6:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg gettextf1:cls, reg nm7:*, reg nm8:V, reg p3:p(V +), reg r26:V, reg _pretty_format1:cls, reg duplicated_args_in_arg_list:*, reg duplicated_args_in_arg_list1:V, reg p4:p(V +), reg r28:V, reg c7:cls, reg r29:V, reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg x8:*, reg x9:V, reg c8:L, reg x11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg nm9:*, reg nm10:V, reg __4:cls, reg r33:V, reg c9:L, reg dx15:V, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg __5:cls, reg r34:V, reg length2:cls, reg r35:V, reg c10:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg gettextf2:cls, reg nm11:*, reg nm12:V, reg p5:p(V +), reg r39:V, reg _pretty_format2:cls, reg unique1:cls, reg arg_names_in_arg_list_missing_in_usage:*, reg arg_names_in_arg_list_missing_in_usage1:V, reg p6:p(V +), reg r41:V, reg p7:p(V +), reg r43:V, reg c11:cls, reg r44:V, reg r45:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg x12:*, reg x13:V, reg c12:L, reg x15:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg nm13:*, reg nm14:V, reg __6:cls, reg r48:V, reg c13:L, reg dx21:V, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg __7:cls, reg r49:V, reg length3:cls, reg r50:V, reg c14:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg gettextf3:cls, reg nm15:*, reg nm16:V, reg p8:p(V +), reg r54:V, reg _pretty_format3:cls, reg unique2:cls, reg functions_not_in_aliases:*, reg functions_not_in_aliases1:V, reg p9:p(V +), reg r56:V, reg p10:p(V +), reg r58:V, reg c15:cls, reg r59:V, reg r60:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r61:V, reg r62:V, reg x16:*, reg x17:V, reg c16:L, reg x19:V, reg dr16:V, reg dc8:L, reg dx24:V, reg dx25:V, reg nm17:*, reg nm18:V, reg __8:cls, reg r63:V, reg c17:L, reg dx27:V, reg dr18:V, reg dc9:L, reg dx28:V, reg dx29:V, reg __9:cls, reg r64:V, reg length4:cls, reg r65:V, reg c18:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg r67:V, reg gettextf4:cls, reg nm19:*, reg nm20:V, reg p11:p(V +), reg r69:V, reg sprintf:cls, reg unlist:cls, reg lapply:cls, reg assignments:*, reg assignments1:V, reg p12:p(V +), reg format:*, reg format1:V, reg p13:p(V +), reg r72:V, reg p14:p(V +), reg r74:V, reg p15:p(V +), reg r76:V, reg c19:cls, reg r77:V, reg r78:V, reg c20:cls, reg r79:V |
    mkenv;
    st nm = nm;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L0(r1):
    popenv;
    return r1;
  L31():
    character = ldf character;
    check L33() else D0();
  L32():
    r = dyn base(<lang character()>, <lang if(length(`<-`(arg_names_in_usage_missing_in_arg_list, `[[`(`[[`(x, nm), "missing"))), {
        c(gettextf("Undocumented arguments in Rd file '%s'", nm), .pretty_format(unique(arg_names_in_usage_missing_in_arg_list)))
      })>, <lang if(length(`<-`(duplicated_args_in_arg_list, `[[`(`[[`(x, nm), "duplicated"))), {
        c(gettextf("Duplicated \\argument entries in Rd file '%s':", nm), .pretty_format(duplicated_args_in_arg_list))
      })>, <lang if(length(`<-`(arg_names_in_arg_list_missing_in_usage, `[[`(`[[`(x, nm), "overdoc"))), {
        c(gettextf("Documented arguments not in \\usage in Rd file '%s':", nm), .pretty_format(unique(arg_names_in_arg_list_missing_in_usage)))
      })>, <lang if(length(`<-`(functions_not_in_aliases, `[[`(`[[`(x, nm), "unaliased"))), {
        c(gettextf("Objects in \\usage without \\alias in Rd file '%s':", nm), .pretty_format(unique(functions_not_in_aliases)))
      })>, <lang if(length(`<-`(assignments, `[[`(`[[`(x, nm), "assignments"))), {
        c(gettextf("Assignments in \\usage in Rd file '%s':", nm), sprintf("  %s", unlist(lapply(assignments, format))))
      })>, "");
    goto L0(r);
  D0():
    deopt 3 [];
  L33():
    r2 = dyn character();
    check L34() else D1();
  D1():
    deopt 4 [r2];
  L34():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L1(r4):
    c2 = `as.logical`(r4);
    if c2 then L46() else L4();
  L35():
    x = ld x;
    check L37() else D2();
  L36():
    r3 = dyn base1(<lang `<-`(arg_names_in_usage_missing_in_arg_list, `[[`(`[[`(x, nm), "missing"))>);
    goto L1(r3);
  D2():
    deopt 7 [x];
  L4():
    goto L6(NULL);
  L6(r17):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L37():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L38() else L39(x1);
  L46():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  L2(dx1):
    c1 = `is.object`(dx1);
    if c1 then L42() else L43(dx1);
  L5(r9):
    goto L6(r9);
  L7(r19):
    c6 = `as.logical`(r19);
    if c6 then L66() else L10();
  L38():
    dr = tryDispatchBuiltin.1("[[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L40() else L39(dr);
  L39(x3):
    nm1 = ld nm;
    check L41() else D3();
  L47():
    gettextf = ldf gettextf;
    check L49() else D5();
  L48():
    r8 = dyn base2(<lang gettextf("Undocumented arguments in Rd file '%s'", nm)>, <lang .pretty_format(unique(arg_names_in_usage_missing_in_arg_list))>);
    goto L5(r8);
  L55():
    x4 = ld x;
    check L57() else D10();
  L56():
    r18 = dyn base3(<lang `<-`(duplicated_args_in_arg_list, `[[`(`[[`(x, nm), "duplicated"))>);
    goto L7(r18);
  D3():
    deopt 9 [x3, nm1];
  D5():
    deopt 21 [];
  D10():
    deopt 35 [x4];
  L3(dx5):
    st arg_names_in_usage_missing_in_arg_list = dx5;
    length = ldf length in base;
    r7 = dyn length(dx5);
    check L45() else D4();
  L10():
    goto L12(NULL);
  L12(r30):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  L40():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L41():
    nm2 = force? nm1;
    __ = ldf `[[` in base;
    r5 = dyn __(x3, nm2);
    goto L2(r5);
  L42():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(dr2);
  L43(dx3):
    __1 = ldf `[[` in base;
    r6 = dyn __1(dx3, "missing");
    goto L3(r6);
  L49():
    p = prom<V +>{
      nm3 = ld nm;
      nm4 = force? nm3;
      checkMissing(nm4);
      return nm4;
    };
    r11 = dyn gettextf("Undocumented arguments in Rd file '%s'", p);
    check L50() else D6();
  L57():
    x5 = force? x4;
    checkMissing(x5);
    c4 = `is.object`(x5);
    if c4 then L58() else L59(x5);
  L66():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  D4():
    deopt 17 [r7];
  D6():
    deopt 24 [r11];
  L8(dx7):
    c5 = `is.object`(dx7);
    if c5 then L62() else L63(dx7);
  L11(r24):
    goto L12(r24);
  L13(r32):
    c10 = `as.logical`(r32);
    if c10 then L86() else L16();
  L44():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx4);
  L45():
    goto L1(r7);
  L50():
    _pretty_format = ldf `.pretty_format`;
    check L51() else D7();
  L58():
    dr4 = tryDispatchBuiltin.1("[[", x5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L60() else L59(dr4);
  L59(x7):
    nm5 = ld nm;
    check L61() else D11();
  L67():
    gettextf1 = ldf gettextf;
    check L69() else D13();
  L68():
    r23 = dyn base4(<lang gettextf("Duplicated \\argument entries in Rd file '%s':", nm)>, <lang .pretty_format(duplicated_args_in_arg_list)>);
    goto L11(r23);
  L75():
    x8 = ld x;
    check L77() else D18();
  L76():
    r31 = dyn base5(<lang `<-`(arg_names_in_arg_list_missing_in_usage, `[[`(`[[`(x, nm), "overdoc"))>);
    goto L13(r31);
  D7():
    deopt 26 [];
  D11():
    deopt 37 [x7, nm5];
  D13():
    deopt 49 [];
  D18():
    deopt 63 [x8];
  L9(dx11):
    st duplicated_args_in_arg_list = dx11;
    length1 = ldf length in base;
    r22 = dyn length1(dx11);
    check L65() else D12();
  L16():
    goto L18(NULL);
  L18(r45):
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L95() else L96();
  L51():
    p2 = prom<V +>{
      unique = ldf unique;
      p1 = prom<V +>{
        arg_names_in_usage_missing_in_arg_list = ld arg_names_in_usage_missing_in_arg_list;
        arg_names_in_usage_missing_in_arg_list1 = force? arg_names_in_usage_missing_in_arg_list;
        checkMissing(arg_names_in_usage_missing_in_arg_list1);
        return arg_names_in_usage_missing_in_arg_list1;
      };
      r13 = dyn unique(p1);
      return r13;
    };
    r15 = dyn _pretty_format(p2);
    check L52() else D8();
  L60():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx6);
  L61():
    nm6 = force? nm5;
    __2 = ldf `[[` in base;
    r20 = dyn __2(x7, nm6);
    goto L8(r20);
  L62():
    dr6 = tryDispatchBuiltin.1("[[", dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L64() else L63(dr6);
  L63(dx9):
    __3 = ldf `[[` in base;
    r21 = dyn __3(dx9, "duplicated");
    goto L9(r21);
  L69():
    p3 = prom<V +>{
      nm7 = ld nm;
      nm8 = force? nm7;
      checkMissing(nm8);
      return nm8;
    };
    r26 = dyn gettextf1("Duplicated \\argument entries in Rd file '%s':", p3);
    check L70() else D14();
  L77():
    x9 = force? x8;
    checkMissing(x9);
    c8 = `is.object`(x9);
    if c8 then L78() else L79(x9);
  L86():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L87() else L88();
  D8():
    deopt 28 [r15];
  D12():
    deopt 45 [r22];
  D14():
    deopt 52 [r26];
  L14(dx13):
    c9 = `is.object`(dx13);
    if c9 then L82() else L83(dx13);
  L17(r37):
    goto L18(r37);
  L19(r47):
    c14 = `as.logical`(r47);
    if c14 then L106() else L22();
  L52():
    c3 = ldf c in base;
    r16 = dyn c3(r11, r15);
    check L53() else D9();
  L64():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L9(dx10);
  L65():
    goto L7(r22);
  L70():
    _pretty_format1 = ldf `.pretty_format`;
    check L71() else D15();
  L78():
    dr8 = tryDispatchBuiltin.1("[[", x9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L80() else L79(dr8);
  L79(x11):
    nm9 = ld nm;
    check L81() else D19();
  L87():
    gettextf2 = ldf gettextf;
    check L89() else D21();
  L88():
    r36 = dyn base6(<lang gettextf("Documented arguments not in \\usage in Rd file '%s':", nm)>, <lang .pretty_format(unique(arg_names_in_arg_list_missing_in_usage))>);
    goto L17(r36);
  L95():
    x12 = ld x;
    check L97() else D26();
  L96():
    r46 = dyn base7(<lang `<-`(functions_not_in_aliases, `[[`(`[[`(x, nm), "unaliased"))>);
    goto L19(r46);
  D9():
    deopt 30 [r16];
  D15():
    deopt 54 [];
  D19():
    deopt 65 [x11, nm9];
  D21():
    deopt 77 [];
  D26():
    deopt 91 [x12];
  L15(dx17):
    st arg_names_in_arg_list_missing_in_usage = dx17;
    length2 = ldf length in base;
    r35 = dyn length2(dx17);
    check L85() else D20();
  L22():
    goto L24(NULL);
  L24(r60):
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L115() else L116();
  L53():
    goto L5(r16);
  L71():
    p4 = prom<V +>{
      duplicated_args_in_arg_list = ld duplicated_args_in_arg_list;
      duplicated_args_in_arg_list1 = force? duplicated_args_in_arg_list;
      checkMissing(duplicated_args_in_arg_list1);
      return duplicated_args_in_arg_list1;
    };
    r28 = dyn _pretty_format1(p4);
    check L72() else D16();
  L80():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L14(dx12);
  L81():
    nm10 = force? nm9;
    __4 = ldf `[[` in base;
    r33 = dyn __4(x11, nm10);
    goto L14(r33);
  L82():
    dr10 = tryDispatchBuiltin.1("[[", dx13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L84() else L83(dr10);
  L83(dx15):
    __5 = ldf `[[` in base;
    r34 = dyn __5(dx15, "overdoc");
    goto L15(r34);
  L89():
    p5 = prom<V +>{
      nm11 = ld nm;
      nm12 = force? nm11;
      checkMissing(nm12);
      return nm12;
    };
    r39 = dyn gettextf2("Documented arguments not in \\usage in Rd file '%s':", p5);
    check L90() else D22();
  L97():
    x13 = force? x12;
    checkMissing(x13);
    c12 = `is.object`(x13);
    if c12 then L98() else L99(x13);
  L106():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L107() else L108();
  D16():
    deopt 56 [r28];
  D20():
    deopt 73 [r35];
  D22():
    deopt 80 [r39];
  L20(dx19):
    c13 = `is.object`(dx19);
    if c13 then L102() else L103(dx19);
  L23(r52):
    goto L24(r52);
  L25(r62):
    c18 = `as.logical`(r62);
    if c18 then L126() else L28();
  L72():
    c7 = ldf c in base;
    r29 = dyn c7(r26, r28);
    check L73() else D17();
  L84():
    dx16 = getTryDispatchBuiltinValue(dr10);
    goto L15(dx16);
  L85():
    goto L13(r35);
  L90():
    _pretty_format2 = ldf `.pretty_format`;
    check L91() else D23();
  L98():
    dr12 = tryDispatchBuiltin.1("[[", x13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L100() else L99(dr12);
  L99(x15):
    nm13 = ld nm;
    check L101() else D27();
  L107():
    gettextf3 = ldf gettextf;
    check L109() else D29();
  L108():
    r51 = dyn base8(<lang gettextf("Objects in \\usage without \\alias in Rd file '%s':", nm)>, <lang .pretty_format(unique(functions_not_in_aliases))>);
    goto L23(r51);
  L115():
    x16 = ld x;
    check L117() else D34();
  L116():
    r61 = dyn base9(<lang `<-`(assignments, `[[`(`[[`(x, nm), "assignments"))>);
    goto L25(r61);
  D17():
    deopt 58 [r29];
  D23():
    deopt 82 [];
  D27():
    deopt 93 [x15, nm13];
  D29():
    deopt 105 [];
  D34():
    deopt 119 [x16];
  L21(dx23):
    st functions_not_in_aliases = dx23;
    length3 = ldf length in base;
    r50 = dyn length3(dx23);
    check L105() else D28();
  L28():
    goto L30(NULL);
  L30(r78):
    c20 = ldf c in base;
    r79 = dyn c20(r2, r17, r30, r45, r60, r78, "");
    check L135() else D42();
  L73():
    goto L11(r29);
  L91():
    p7 = prom<V +>{
      unique1 = ldf unique;
      p6 = prom<V +>{
        arg_names_in_arg_list_missing_in_usage = ld arg_names_in_arg_list_missing_in_usage;
        arg_names_in_arg_list_missing_in_usage1 = force? arg_names_in_arg_list_missing_in_usage;
        checkMissing(arg_names_in_arg_list_missing_in_usage1);
        return arg_names_in_arg_list_missing_in_usage1;
      };
      r41 = dyn unique1(p6);
      return r41;
    };
    r43 = dyn _pretty_format2(p7);
    check L92() else D24();
  L100():
    dx18 = getTryDispatchBuiltinValue(dr12);
    goto L20(dx18);
  L101():
    nm14 = force? nm13;
    __6 = ldf `[[` in base;
    r48 = dyn __6(x15, nm14);
    goto L20(r48);
  L102():
    dr14 = tryDispatchBuiltin.1("[[", dx19);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L104() else L103(dr14);
  L103(dx21):
    __7 = ldf `[[` in base;
    r49 = dyn __7(dx21, "unaliased");
    goto L21(r49);
  L109():
    p8 = prom<V +>{
      nm15 = ld nm;
      nm16 = force? nm15;
      checkMissing(nm16);
      return nm16;
    };
    r54 = dyn gettextf3("Objects in \\usage without \\alias in Rd file '%s':", p8);
    check L110() else D30();
  L117():
    x17 = force? x16;
    checkMissing(x17);
    c16 = `is.object`(x17);
    if c16 then L118() else L119(x17);
  L126():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L127() else L128();
  D24():
    deopt 84 [r43];
  D28():
    deopt 101 [r50];
  D30():
    deopt 108 [r54];
  D42():
    deopt 148 [r79];
  L26(dx25):
    c17 = `is.object`(dx25);
    if c17 then L122() else L123(dx25);
  L29(r67):
    goto L30(r67);
  L92():
    c11 = ldf c in base;
    r44 = dyn c11(r39, r43);
    check L93() else D25();
  L104():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L21(dx22);
  L105():
    goto L19(r50);
  L110():
    _pretty_format3 = ldf `.pretty_format`;
    check L111() else D31();
  L118():
    dr16 = tryDispatchBuiltin.1("[[", x17);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L120() else L119(dr16);
  L119(x19):
    nm17 = ld nm;
    check L121() else D35();
  L127():
    gettextf4 = ldf gettextf;
    check L129() else D37();
  L128():
    r66 = dyn base10(<lang gettextf("Assignments in \\usage in Rd file '%s':", nm)>, <lang sprintf("  %s", unlist(lapply(assignments, format)))>);
    goto L29(r66);
  L135():
    goto L0(r79);
  D25():
    deopt 86 [r44];
  D31():
    deopt 110 [];
  D35():
    deopt 121 [x19, nm17];
  D37():
    deopt 133 [];
  L27(dx29):
    st assignments = dx29;
    length4 = ldf length in base;
    r65 = dyn length4(dx29);
    check L125() else D36();
  L93():
    goto L17(r44);
  L111():
    p10 = prom<V +>{
      unique2 = ldf unique;
      p9 = prom<V +>{
        functions_not_in_aliases = ld functions_not_in_aliases;
        functions_not_in_aliases1 = force? functions_not_in_aliases;
        checkMissing(functions_not_in_aliases1);
        return functions_not_in_aliases1;
      };
      r56 = dyn unique2(p9);
      return r56;
    };
    r58 = dyn _pretty_format3(p10);
    check L112() else D32();
  L120():
    dx24 = getTryDispatchBuiltinValue(dr16);
    goto L26(dx24);
  L121():
    nm18 = force? nm17;
    __8 = ldf `[[` in base;
    r63 = dyn __8(x19, nm18);
    goto L26(r63);
  L122():
    dr18 = tryDispatchBuiltin.1("[[", dx25);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L124() else L123(dr18);
  L123(dx27):
    __9 = ldf `[[` in base;
    r64 = dyn __9(dx27, "assignments");
    goto L27(r64);
  L129():
    p11 = prom<V +>{
      nm19 = ld nm;
      nm20 = force? nm19;
      checkMissing(nm20);
      return nm20;
    };
    r69 = dyn gettextf4("Assignments in \\usage in Rd file '%s':", p11);
    check L130() else D38();
  D32():
    deopt 112 [r58];
  D36():
    deopt 129 [r65];
  D38():
    deopt 136 [r69];
  L112():
    c15 = ldf c in base;
    r59 = dyn c15(r54, r58);
    check L113() else D33();
  L124():
    dx28 = getTryDispatchBuiltinValue(dr18);
    goto L27(dx28);
  L125():
    goto L25(r65);
  L130():
    sprintf = ldf sprintf;
    check L131() else D39();
  D33():
    deopt 114 [r59];
  D39():
    deopt 138 [];
  L113():
    goto L23(r59);
  L131():
    p15 = prom<V +>{
      unlist = ldf unlist;
      p14 = prom<V +>{
        lapply = ldf lapply;
        p12 = prom<V +>{
          assignments = ld assignments;
          assignments1 = force? assignments;
          checkMissing(assignments1);
          return assignments1;
        };
        p13 = prom<V +>{
          format = ld format;
          format1 = force? format;
          checkMissing(format1);
          return format1;
        };
        r72 = dyn lapply(p12, p13);
        return r72;
      };
      r74 = dyn unlist(p14);
      return r74;
    };
    r76 = dyn sprintf("  %s", p15);
    check L132() else D40();
  D40():
    deopt 141 [r76];
  L132():
    c19 = ldf c in base;
    r77 = dyn c19(r69, r76);
    check L133() else D41();
  D41():
    deopt 143 [r77];
  L133():
    goto L29(r77);
  }
}