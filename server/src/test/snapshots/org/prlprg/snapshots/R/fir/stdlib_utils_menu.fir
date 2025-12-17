fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3191336243;
    st menu = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3191336243(choices, graphics, title) {
  (reg choices:*, reg graphics:*, reg title:*) -+> V { var choices:*, var graphics:*, reg graphics_isMissing:L, reg graphics_orDefault:*, var title:*, reg title_isMissing:L, reg title_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg interactive:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg isTRUE:cls, reg graphics1:*, reg graphics2:V, reg p:p(V +), reg r7:V, reg c1:L, reg _Platform:*, reg _Platform1:V, reg c2:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg r9:V, reg c3:L, reg c4:V, reg _Platform4:*, reg _Platform5:V, reg c6:L, reg c8:L, reg _Platform7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c10:L, reg dx3:V, reg r10:V, reg r11:V, reg c11:L, reg c12:V, reg c14:L, reg c15:V, reg capabilities:cls, reg r12:V, reg c17:L, reg c20:L, reg c21:V, reg capabilities1:cls, reg r13:V, reg c22:L, reg c23:V, reg c26:L, reg c29:L, reg c30:V, reg suppressWarnings:cls, reg __:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg c31:L, reg c32:V, reg c35:L, reg c36:V, reg c38:L, reg select_list:cls, reg choices1:*, reg choices2:V, reg p2:p(V +), reg title1:*, reg title2:V, reg p3:p(V +), reg r19:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg res:*, reg res1:V, reg choices3:*, reg choices4:V, reg match:cls, reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg choices5:*, reg choices6:V, reg length:cls, reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg title3:*, reg title4:V, reg length1:cls, reg r31:V, reg c39:L, reg c41:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg c44:L, reg r33:V, reg title5:*, reg title6:V, reg c45:L, reg c47:L, reg title8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c49:L, reg dx5:V, reg __1:cls, reg r34:V, reg nzchar:cls, reg r35:V, reg c50:L, reg c51:V, reg c53:L, reg cat:cls, reg title9:*, reg title10:V, reg c54:L, reg title12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r36:V, reg p4:p(V +), reg r38:V, reg paste0:cls, reg format:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg nc:*, reg nc1:V, reg r42:I, reg p5:p(V +), reg r44:V, reg p6:p(V +), reg choices7:*, reg choices8:V, reg p7:p(V +), reg r47:V, reg nc2:*, reg nc3:V, reg r48:V, reg c55:L, reg format1:cls, reg op:*, reg op1:V, reg p8:p(V +), reg r50:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg r52:V, reg fop:*, reg fop1:V, reg c56:L, reg fop3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r53:V, reg nchar:cls, reg r54:V, reg r55:V, reg getOption:cls, reg r56:V, reg nw:*, reg nw1:V, reg ___:cls, reg r57:V, reg ncol:*, reg ncol1:V, reg r58:V, reg c57:L, reg paste1:cls, reg fop4:*, reg fop5:V, reg p9:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r60:V, reg r61:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r62:V, reg r63:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r64:V, reg r65:V, reg nc4:*, reg nc5:V, reg ncol2:*, reg ncol3:V, reg min:cls, reg r66:V, reg r67:V, reg rep_int:cls, reg r68:V, reg c58:cls, reg r69:V, reg p10:p(V +), reg r71:V, reg r72:V, reg cat1:cls, reg op2:*, reg op3:V, reg p11:p(V +), reg r75:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r76:V, reg r77:V, reg C_menu:*, reg C_menu1:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r78:V, reg C_menu4:V, reg r79:V, reg choices9:*, reg choices10:V, reg as_character:cls, reg r80:V, reg vargs:dots, reg r81:V, reg ind:*, reg ind1:V, reg nc6:*, reg nc7:V, reg r82:V, reg c59:L, reg ind2:*, reg ind3:V, reg cat2:cls, reg gettext:cls, reg r85:V, reg p12:p(V +), reg r87:V |
    mkenv;
    st choices = choices;
    graphics_isMissing = missing.0(graphics);
    if graphics_isMissing then L0(FALSE) else L0(graphics);
  L0(graphics_orDefault):
    st graphics = graphics_orDefault;
    title_isMissing = missing.0(title);
    if title_isMissing then L1(NULL) else L1(title);
  L1(title_orDefault):
    st title = title_orDefault;
    sym = ldf interactive;
    base = ldf interactive in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L35() else L3();
  L32():
    interactive = ldf interactive in base;
    r2 = dyn interactive();
    check L34() else D0();
  L33():
    r = dyn base();
    goto L2(r);
  D0():
    deopt 3 [r2];
  L3():
    goto L4();
  L4():
    isTRUE = ldf isTRUE;
    check L39() else D3();
  L34():
    goto L2(r2);
  L35():
    stop = ldf stop;
    check L36() else D1();
  D1():
    deopt 6 [];
  D3():
    deopt 12 [];
  L36():
    r4 = dyn stop("menu() cannot be used non-interactively");
    check L37() else D2();
  L39():
    p = prom<V +>{
      graphics1 = ld graphics;
      graphics2 = force? graphics1;
      checkMissing(graphics2);
      return graphics2;
    };
    r7 = dyn isTRUE(p);
    check L40() else D4();
  D2():
    deopt 8 [r4];
  D4():
    deopt 14 [r7];
  L37():
    goto L4();
  L40():
    c1 = `as.logical`(r7);
    if c1 then L41() else L5();
  L5():
    goto L13();
  L13():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L77() else L78();
  L41():
    _Platform = ld `.Platform`;
    check L42() else D5();
  D5():
    deopt 15 [_Platform];
  L14(r27):
    st nc = r27;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L81() else L82();
  L42():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c2 = `is.object`(_Platform1);
    if c2 then L44() else L45(_Platform1);
  L77():
    choices5 = ld choices;
    check L79() else D18();
  L78():
    r26 = dyn base2(<sym choices>);
    goto L14(r26);
  D18():
    deopt 69 [choices5];
  L15(r30):
    c39 = `as.logical`(r30);
    if c39 then L85() else L16(c39);
  L43(dx1):
    r9 = `==`(dx1, "windows");
    c3 = `as.logical`(r9);
    if c3 then L6(c3) else L47();
  L44():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(_Platform3):
    r8 = `$`(_Platform3, <sym OS.type>);
    goto L43(r8);
  L79():
    choices6 = force? choices5;
    checkMissing(choices6);
    length = ldf length in base;
    r28 = dyn length(choices6);
    check L80() else D19();
  L81():
    title3 = ld title;
    check L83() else D20();
  L82():
    r29 = dyn base3(<sym title>);
    goto L15(r29);
  D19():
    deopt 72 [r28];
  D20():
    deopt 76 [title3];
  L6(c4):
    c14 = `as.logical`(c4);
    if c14 then L7(c14) else L54();
  L16(c41):
    c53 = `as.logical`(c41);
    if c53 then L94() else L19();
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L43(dx);
  L47():
    _Platform4 = ld `.Platform`;
    check L48() else D6();
  L80():
    goto L14(r28);
  L83():
    title4 = force? title3;
    checkMissing(title4);
    length1 = ldf length in base;
    r31 = dyn length1(title4);
    check L84() else D21();
  L85():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L86() else L87();
  D6():
    deopt 20 [c3, _Platform4];
  D21():
    deopt 79 [r31];
  L7(c15):
    c38 = `as.logical`(c15);
    if c38 then L66() else L10();
  L17(c44, r33):
    c50 = `as.logical`(r33);
    c51 = `&&`(c44, c50);
    goto L16(c51);
  L19():
    goto L20();
  L20():
    paste0 = ldf paste0;
    check L98() else D26();
  L48():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c6 = `is.object`(_Platform5);
    if c6 then L50() else L51(c3, _Platform5);
  L54():
    capabilities = ldf capabilities;
    check L55() else D7();
  L84():
    goto L15(r31);
  L86():
    title5 = ld title;
    check L88() else D22();
  L87():
    r32 = dyn base4(<lang `[`(title, 1)>);
    goto L17(c39, r32);
  L94():
    cat = ldf cat;
    check L95() else D24();
  D7():
    deopt 27 [c14];
  D22():
    deopt 82 [c39, title5];
  D24():
    deopt 91 [];
  D26():
    deopt 98 [];
  L10():
    goto L13();
  L49(c10, dx3):
    r11 = `==`(dx3, "AQUA");
    c11 = `as.logical`(r11);
    c12 = `||`(c10, c11);
    goto L6(c12);
  L50():
    dr2 = tryDispatchBuiltin.1("$", _Platform5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L52() else L51(c3, dr2);
  L51(c8, _Platform7):
    r10 = `$`(_Platform7, <sym GUI>);
    goto L49(c8, r10);
  L55():
    r12 = dyn capabilities("tcltk");
    check L56() else D8();
  L66():
    select_list = ldf `select.list`;
    check L67() else D13();
  L88():
    title6 = force? title5;
    checkMissing(title6);
    c45 = `is.object`(title6);
    if c45 then L89() else L90(c39, title6);
  L95():
    p4 = prom<V +>{
      title9 = ld title;
      title10 = force? title9;
      checkMissing(title10);
      c54 = `is.object`(title10);
      if c54 then L1() else L2(title10);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", title10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(title12):
      __2 = ldf `[` in base;
      r36 = dyn __2(title12, 1);
      goto L0(r36);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r38 = dyn cat(p4, "\n");
    check L96() else D25();
  L98():
    p6 = prom<V +>{
      format = ldf format;
      p5 = prom<V +>{
        sym5 = ldf seq_len;
        base5 = ldf seq_len in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r41):
        return r41;
      L1():
        nc = ld nc;
        nc1 = force? nc;
        checkMissing(nc1);
        r42 = seq_len(nc1);
        goto L0(r42);
      L2():
        r40 = dyn base5(<sym nc>);
        goto L0(r40);
      };
      r44 = dyn format(p5);
      return r44;
    };
    p7 = prom<V +>{
      choices7 = ld choices;
      choices8 = force? choices7;
      checkMissing(choices8);
      return choices8;
    };
    r47 = dyn paste0(p6, ": ", p7);
    check L99() else D27();
  D8():
    deopt 29 [c14, r12];
  D13():
    deopt 42 [];
  D25():
    deopt 94 [r38];
  D27():
    deopt 102 [r47];
  L18(c49, dx5):
    nzchar = ldf nzchar in base;
    r35 = dyn nzchar(dx5);
    check L92() else D23();
  L52():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L49(c3, dx2);
  L56():
    c17 = `as.logical`(r12);
    if c17 then L57() else L8(c14, c17);
  L67():
    p2 = prom<V +>{
      choices1 = ld choices;
      choices2 = force? choices1;
      checkMissing(choices2);
      return choices2;
    };
    p3 = prom<V +>{
      title1 = ld title;
      title2 = force? title1;
      checkMissing(title2);
      return title2;
    };
    r19 = dyn select_list[, multiple, title, graphics](p2, FALSE, p3, TRUE);
    check L68() else D14();
  L89():
    dr4 = tryDispatchBuiltin.1("[", title6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L91() else L90(c39, dr4);
  L90(c47, title8):
    __1 = ldf `[` in base;
    r34 = dyn __1(title8, 1);
    goto L18(c47, r34);
  L96():
    goto L20();
  L99():
    st op = r47;
    nc2 = ld nc;
    check L100() else D28();
  D14():
    deopt 50 [r19];
  D23():
    deopt 88 [c49, r35];
  D28():
    deopt 104 [nc2];
  L8(c20, c21):
    c26 = `as.logical`(c21);
    if c26 then L61() else L9(c20, c26);
  L57():
    capabilities1 = ldf capabilities;
    check L58() else D9();
  L68():
    st res = r19;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L69() else L70();
  L91():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(c39, dx4);
  L92():
    goto L17(c49, r35);
  L100():
    nc3 = force? nc2;
    checkMissing(nc3);
    r48 = `>`(nc3, 10);
    c55 = `as.logical`(r48);
    if c55 then L101() else L21();
  D9():
    deopt 31 [c14, c17];
  L9(c29, c30):
    c35 = `as.logical`(c30);
    c36 = `||`(c29, c35);
    goto L7(c36);
  L11(r21):
    popenv;
    return r21;
  L21():
    goto L26();
  L26():
    cat1 = ldf cat;
    check L121() else D40();
  L58():
    r13 = dyn capabilities1("X11");
    check L59() else D10();
  L61():
    suppressWarnings = ldf suppressWarnings;
    check L62() else D11();
  L69():
    res = ld res;
    check L71() else D15();
  L70():
    r20 = dyn base1[, , nomatch](<sym res>, <sym choices>, 0);
    goto L11(r20);
  L101():
    format1 = ldf format;
    check L102() else D29();
  D10():
    deopt 33 [c14, c17, r13];
  D11():
    deopt 36 [c20, c26];
  D15():
    deopt 54 [res];
  D29():
    deopt 109 [];
  D40():
    deopt 155 [];
  L59():
    c22 = `as.logical`(r13);
    c23 = `&&`(c17, c22);
    goto L8(c14, c23);
  L62():
    p1 = prom<V +>{
      __ = ldf `::`;
      r14 = dyn __("tcltk", ".TkUp");
      return r14;
    };
    r16 = dyn suppressWarnings(p1);
    check L63() else D12();
  L71():
    res1 = force? res;
    checkMissing(res1);
    choices3 = ld choices;
    check L72() else D16();
  L102():
    p8 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r50 = dyn format1(p8);
    check L103() else D30();
  L121():
    p11 = prom<V +>{
      op2 = ld op;
      op3 = force? op2;
      checkMissing(op3);
      return op3;
    };
    r75 = dyn cat1[, , , sep]("", p11, "", "\n");
    check L122() else D41();
  D12():
    deopt 38 [c20, c26, r16];
  D16():
    deopt 56 [choices3];
  D30():
    deopt 111 [r50];
  D41():
    deopt 161 [r75];
  L63():
    c31 = `as.logical`(r16);
    c32 = `&&`(c26, c31);
    goto L9(c20, c32);
  L72():
    choices4 = force? choices3;
    checkMissing(choices4);
    match = ldf match in base;
    r22 = dyn match(res1, choices4, 0, NULL);
    check L73() else D17();
  L103():
    st fop = r50;
    sym6 = ldf nchar;
    base6 = ldf nchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L104() else L105();
  L122():
    goto L31();
  D17():
    deopt 61 [r22];
  L22(r52):
    r55 = `+`(r52, 2);
    st nw = r55;
    getOption = ldf getOption;
    check L111() else D33();
  L31():
    sym10 = ldf `.Call`;
    base10 = ldf `.Call` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L123() else L124();
  L73():
    goto L11(r22);
  L104():
    fop = ld fop;
    check L106() else D31();
  L105():
    r51 = dyn base6(<lang `[`(fop, 1)>, "w");
    goto L22(r51);
  D31():
    deopt 115 [fop];
  D33():
    deopt 130 [];
  L27(r77):
    st ind = r77;
    ind = ld ind;
    check L130() else D45();
  L106():
    fop1 = force? fop;
    checkMissing(fop1);
    c56 = `is.object`(fop1);
    if c56 then L107() else L108(fop1);
  L111():
    r56 = dyn getOption("width");
    check L112() else D34();
  L123():
    C_menu = ld C_menu;
    check L125() else D42();
  L124():
    r76 = dyn base10(<sym C_menu>, <lang as.character(choices)>);
    goto L27(r76);
  D34():
    deopt 132 [r56];
  D42():
    deopt 163 [C_menu];
  D45():
    deopt 172 [ind];
  L23(dx9):
    nchar = ldf nchar in base;
    r54 = dyn nchar(dx9, "w", FALSE, NA_LGL);
    check L110() else D32();
  L107():
    dr8 = tryDispatchBuiltin.1("[", fop1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L109() else L108(dr8);
  L108(fop3):
    __3 = ldf `[` in base;
    r53 = dyn __3(fop3, 1);
    goto L23(r53);
  L112():
    nw = ld nw;
    check L113() else D35();
  L125():
    C_menu1 = force? C_menu;
    checkMissing(C_menu1);
    sym11 = ldf `as.character`;
    base11 = ldf `as.character` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L126() else L127();
  L130():
    ind1 = force? ind;
    checkMissing(ind1);
    nc6 = ld nc;
    check L131() else D46();
  D32():
    deopt 124 [r54];
  D35():
    deopt 133 [nw];
  D46():
    deopt 173 [ind1, nc6];
  L28(C_menu4, r79):
    vargs = dots[r79];
    r81 = `.Call`(C_menu4, vargs, <missing>);
    goto L27(r81);
  L109():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L23(dx8);
  L110():
    goto L22(r54);
  L113():
    nw1 = force? nw;
    checkMissing(nw1);
    ___ = ldf `%/%` in base;
    r57 = dyn ___(r56, nw1);
    check L114() else D36();
  L126():
    choices9 = ld choices;
    check L128() else D43();
  L127():
    r78 = dyn base11(<sym choices>);
    goto L28(C_menu1, r78);
  L131():
    nc7 = force? nc6;
    checkMissing(nc7);
    r82 = `<=`(ind1, nc7);
    c59 = `as.logical`(r82);
    if c59 then L132() else L29();
  D36():
    deopt 136 [r57];
  D43():
    deopt 166 [C_menu1, choices9];
  L29():
    cat2 = ldf cat;
    check L136() else D48();
  L114():
    st ncol = r57;
    ncol = ld ncol;
    check L115() else D37();
  L128():
    choices10 = force? choices9;
    checkMissing(choices10);
    as_character = ldf `as.character` in base;
    r80 = dyn as_character(choices10);
    check L129() else D44();
  L132():
    ind2 = ld ind;
    check L133() else D47();
  D37():
    deopt 138 [ncol];
  D44():
    deopt 169 [C_menu1, r80];
  D47():
    deopt 176 [ind2];
  D48():
    deopt 182 [];
  L115():
    ncol1 = force? ncol;
    checkMissing(ncol1);
    r58 = `>`(ncol1, 1);
    c57 = `as.logical`(r58);
    if c57 then L116() else L24();
  L129():
    goto L28(C_menu1, r80);
  L133():
    ind3 = force? ind2;
    checkMissing(ind3);
    popenv;
    return ind3;
  L136():
    p12 = prom<V +>{
      gettext = ldf gettext;
      r85 = dyn gettext("Enter an item from the menu, or 0 to exit\n");
      return r85;
    };
    r87 = dyn cat2(p12);
    check L137() else D49();
  D49():
    deopt 184 [r87];
  L24():
    goto L25(NULL);
  L25(r72):
    goto L26();
  L116():
    paste1 = ldf paste0;
    check L117() else D38();
  L137():
    goto L31();
  D38():
    deopt 143 [];
  L117():
    p9 = prom<V +>{
      fop4 = ld fop;
      fop5 = force? fop4;
      checkMissing(fop5);
      return fop5;
    };
    p10 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L3() else L4();
    L0(r61):
      return r61;
    L3():
      sym8 = ldf `rep.int`;
      base8 = ldf `rep.int` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L5() else L6();
    L4():
      r60 = dyn base7(<lang rep.int("  ", `-`(min(nc, ncol), 1))>, "\n");
      goto L0(r60);
    L1(r63):
      c58 = ldf c in base;
      r69 = dyn c58(r63, "\n");
      goto L0(r69);
    L5():
      sym9 = ldf min;
      base9 = ldf min in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L7() else L8();
    L6():
      r62 = dyn base8("  ", <lang `-`(min(nc, ncol), 1)>);
      goto L1(r62);
    L2(r65):
      r67 = `-`(r65, 1);
      rep_int = ldf `rep.int` in base;
      r68 = dyn rep_int("  ", r67);
      goto L1(r68);
    L7():
      nc4 = ld nc;
      nc5 = force? nc4;
      checkMissing(nc5);
      ncol2 = ld ncol;
      ncol3 = force? ncol2;
      checkMissing(ncol3);
      min = ldf min in base;
      r66 = dyn min(nc5, ncol3);
      goto L2(r66);
    L8():
      r64 = dyn base9(<sym nc>, <sym ncol>);
      goto L2(r64);
    };
    r71 = dyn paste1[, , collapse](p9, p10, "");
    check L118() else D39();
  D39():
    deopt 148 [r71];
  L118():
    st op = r71;
    goto L25(r71);
  }
}