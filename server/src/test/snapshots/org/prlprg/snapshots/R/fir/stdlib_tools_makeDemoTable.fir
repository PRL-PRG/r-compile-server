fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4247406614;
    st makeDemoTable = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4247406614(demos, depth) {
  (reg demos:*, reg depth:*) -+> V { var demos:*, var depth:*, reg depth_isMissing:L, reg depth_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg nrow:cls, reg demos1:*, reg demos2:V, reg p:p(V +), reg r6:V, reg r7:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg demos3:*, reg demos4:V, reg c2:L, reg i6:I, reg demos6:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r8:V, reg demos7:*, reg demos8:V, reg c3:L, reg i12:I, reg demos10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i14:I, reg dx3:V, reg i15:*, reg i16:V, reg __1:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg i19:I, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg i22:I, reg r13:V, reg depth1:*, reg depth2:V, reg rep_int:cls, reg r14:V, reg pkg:*, reg pkg1:V, reg c4:cls, reg r15:V, reg demos11:*, reg demos12:V, reg c5:L, reg i24:I, reg demos14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i26:I, reg dx5:V, reg i27:*, reg i28:V, reg __2:cls, reg r16:V, reg file_path:cls, reg demos15:*, reg demos16:V, reg c6:L, reg demos18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i29:*, reg i30:V, reg __3:cls, reg r17:V, reg p1:p(V +), reg r19:V, reg basename:cls, reg list_files_with_type:cls, reg path:*, reg path1:V, reg p2:p(V +), reg r21:V, reg p3:p(V +), reg r23:V, reg files:*, reg files1:V, reg c7:L, reg i32:I, reg files3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i34:I, reg dx9:V, reg topic:*, reg topic1:V, reg file_path_sans_ext:cls, reg files4:*, reg files5:V, reg p4:p(V +), reg r25:V, reg r26:V, reg __4:cls, reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg i37:I, reg r29:V, reg file:*, reg file1:V, reg length:cls, reg r30:V, reg r31:V, reg c8:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg i42:I, reg r33:V, reg root:*, reg root1:V, reg file2:*, reg file3:V, reg pkg2:*, reg pkg3:V, reg topic2:*, reg topic3:V, reg c9:cls, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg i45:I, reg r36:V, reg root2:*, reg root3:V, reg topic4:*, reg topic5:V, reg c10:cls, reg r37:V, reg i46:I, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg i49:I, reg r40:V, reg pkg4:*, reg pkg5:V, reg topic6:*, reg topic7:V, reg c11:cls, reg r41:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg i52:I, reg r43:V, reg link:*, reg link1:V, reg Title:*, reg Title1:V, reg runlink:*, reg runlink1:V, reg c12:cls, reg r44:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg i55:I, reg r46:V, reg out:*, reg out1:V, reg paste:cls, reg line:*, reg line1:V, reg p5:p(V +), reg r48:V, reg c13:cls, reg r49:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r50:V, reg r51:V, reg out2:*, reg out3:V, reg c14:cls, reg r52:V |
    mkenv;
    st demos = demos;
    depth_isMissing = missing.0(depth);
    if depth_isMissing then L0(2.0) else L0(depth);
  L0(depth_orDefault):
    st depth = depth_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L1(r1):
    st out = r1;
    sym1 = ldf seq_len;
    base1 = ldf seq_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L20():
    c = ldf c in base;
    r2 = dyn c("<table style=\"width: 100%;\">", "<col style=\"width: 22%;\" />", "<col style=\"width:  2%;\" />", "<col style=\"width: 54%;\" />", "<col style=\"width: 20%;\" />");
    check L22() else D0();
  L21():
    r = dyn base("<table style=\"width: 100%;\">", "<col style=\"width: 22%;\" />", "<col style=\"width:  2%;\" />", "<col style=\"width: 54%;\" />", "<col style=\"width: 20%;\" />");
    goto L1(r);
  D0():
    deopt 8 [r2];
  L2(r4):
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L3(i);
  L22():
    goto L1(r2);
  L23():
    nrow = ldf nrow;
    check L25() else D1();
  L24():
    r3 = dyn base1(<lang nrow(demos)>);
    goto L2(r3);
  D1():
    deopt 12 [];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L27() else L18();
  L25():
    p = prom<V +>{
      demos1 = ld demos;
      demos2 = force? demos1;
      checkMissing(demos2);
      return demos2;
    };
    r6 = dyn nrow(p);
    check L26() else D2();
  D2():
    deopt 14 [r6];
  L18():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    demos3 = ld demos;
    check L28() else D3();
  L26():
    r7 = seq_len(r6);
    goto L2(r7);
  L27():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L97() else L98();
  D3():
    deopt 16 [i2, demos3];
  L19(r51):
    popenv;
    return r51;
  L28():
    demos4 = force? demos3;
    checkMissing(demos4);
    c2 = `is.object`(demos4);
    if c2 then L29() else L30(i2, demos4);
  L97():
    out2 = ld out;
    check L99() else D42();
  L98():
    r50 = dyn base10(<sym out>, "</table>");
    goto L19(r50);
  D42():
    deopt 158 [out2];
  L4(i8, dx1):
    st topic = dx1;
    demos7 = ld demos;
    check L33() else D5();
  L29():
    dr = tryDispatchBuiltin.1("[", demos4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(i2, dr);
  L30(i6, demos6):
    i9 = ld i;
    check L32() else D4();
  L99():
    out3 = force? out2;
    checkMissing(out3);
    c14 = ldf c in base;
    r52 = dyn c14(out3, "</table>");
    check L100() else D43();
  D4():
    deopt 18 [i6, demos6, i9];
  D5():
    deopt 23 [i8, demos7];
  D43():
    deopt 162 [r52];
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(i2, dx);
  L32():
    i10 = force? i9;
    __ = ldf `[` in base;
    r8 = dyn __(demos6, i10, "Topic");
    goto L4(i6, r8);
  L33():
    demos8 = force? demos7;
    checkMissing(demos8);
    c3 = `is.object`(demos8);
    if c3 then L34() else L35(i8, demos8);
  L100():
    goto L19(r52);
  L5(i14, dx3):
    st pkg = dx3;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L34():
    dr2 = tryDispatchBuiltin.1("[", demos8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(i8, dr2);
  L35(i12, demos10):
    i15 = ld i;
    check L37() else D6();
  D6():
    deopt 25 [i12, demos10, i15];
  L6(i19, r11):
    st root = r11;
    demos11 = ld demos;
    check L46() else D11();
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(i8, dx2);
  L37():
    i16 = force? i15;
    __1 = ldf `[` in base;
    r9 = dyn __1(demos10, i16, "Package");
    goto L5(i12, r9);
  L38():
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L39():
    r10 = dyn base2(<lang rep.int("../", depth)>, "library/", <sym pkg>, "/");
    goto L6(i14, r10);
  D11():
    deopt 46 [i19, demos11];
  L7(i22, r13):
    pkg = ld pkg;
    check L44() else D9();
  L40():
    depth1 = ld depth;
    check L42() else D7();
  L41():
    r12 = dyn base3("../", <sym depth>);
    goto L7(i14, r12);
  L46():
    demos12 = force? demos11;
    checkMissing(demos12);
    c5 = `is.object`(demos12);
    if c5 then L47() else L48(i19, demos12);
  D7():
    deopt 35 [i14, depth1];
  D9():
    deopt 40 [i22, pkg];
  L8(i26, dx5):
    st Title = dx5;
    file_path = ldf `file.path`;
    check L51() else D13();
  L42():
    depth2 = force? depth1;
    checkMissing(depth2);
    rep_int = ldf `rep.int` in base;
    r14 = dyn rep_int("../", depth2);
    check L43() else D8();
  L44():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    c4 = ldf c in base;
    r15 = dyn c4(r13, "library/", pkg1, "/");
    check L45() else D10();
  L47():
    dr4 = tryDispatchBuiltin.1("[", demos12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L49() else L48(i19, dr4);
  L48(i24, demos14):
    i27 = ld i;
    check L50() else D12();
  D8():
    deopt 38 [i14, r14];
  D10():
    deopt 44 [i22, r15];
  D12():
    deopt 48 [i24, demos14, i27];
  D13():
    deopt 54 [i26];
  L43():
    goto L7(i14, r14);
  L45():
    goto L6(i22, r15);
  L49():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(i19, dx4);
  L50():
    i28 = force? i27;
    __2 = ldf `[` in base;
    r16 = dyn __2(demos14, i28, "Title");
    goto L8(i24, r16);
  L51():
    p1 = prom<V +>{
      demos15 = ld demos;
      demos16 = force? demos15;
      checkMissing(demos16);
      c6 = `is.object`(demos16);
      if c6 then L1() else L2(demos16);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", demos16);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(demos18):
      i29 = ld i;
      i30 = force? i29;
      __3 = ldf `[` in base;
      r17 = dyn __3(demos18, i30, "LibPath");
      goto L0(r17);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r19 = dyn file_path(p1, "demo");
    check L52() else D14();
  D14():
    deopt 57 [i26, r19];
  L52():
    st path = r19;
    basename = ldf basename;
    check L53() else D15();
  D15():
    deopt 60 [i26];
  L53():
    p3 = prom<V +>{
      list_files_with_type = ldf list_files_with_type;
      p2 = prom<V +>{
        path = ld path;
        path1 = force? path;
        checkMissing(path1);
        return path1;
      };
      r21 = dyn list_files_with_type[, , `full.names`](p2, "demo", FALSE);
      return r21;
    };
    r23 = dyn basename(p3);
    check L54() else D16();
  D16():
    deopt 62 [i26, r23];
  L54():
    st files = r23;
    files = ld files;
    check L55() else D17();
  D17():
    deopt 64 [i26, files];
  L55():
    files1 = force? files;
    checkMissing(files1);
    c7 = `is.object`(files1);
    if c7 then L56() else L57(i26, files1);
  L9(i34, dx9):
    st file = dx9;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L56():
    dr8 = tryDispatchBuiltin.1("[", files1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L58() else L57(i26, dr8);
  L57(i32, files3):
    topic = ld topic;
    check L59() else D18();
  D18():
    deopt 66 [i32, files3, topic];
  L10(i37, r29):
    r31 = `==`(r29, 1.0);
    c8 = `as.logical`(r31);
    if c8 then L66() else L11();
  L58():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L9(i26, dx8);
  L59():
    topic1 = force? topic;
    checkMissing(topic1);
    file_path_sans_ext = ldf file_path_sans_ext;
    check L60() else D19();
  L62():
    file = ld file;
    check L64() else D21();
  L63():
    r28 = dyn base4(<sym file>);
    goto L10(i34, r28);
  D19():
    deopt 68 [i32, files3, topic1];
  D21():
    deopt 76 [i34, file];
  L11():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L80() else L81();
  L14(i46):
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L85() else L86();
  L60():
    p4 = prom<V +>{
      files4 = ld files;
      files5 = force? files4;
      checkMissing(files5);
      return files5;
    };
    r25 = dyn file_path_sans_ext(p4);
    check L61() else D20();
  L64():
    file1 = force? file;
    checkMissing(file1);
    length = ldf length in base;
    r30 = dyn length(file1);
    check L65() else D22();
  L66():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  D20():
    deopt 70 [i32, files3, topic1, r25];
  D22():
    deopt 79 [i34, r30];
  L12(i42, r33):
    st link = r33;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L74() else L75();
  L15(i49, r40):
    st link = r40;
    st runlink = "";
    goto L14(i49);
  L16(i52, r43):
    st line = r43;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L91() else L92();
  L61():
    r26 = `==`(topic1, r25);
    __4 = ldf `[` in base;
    r27 = dyn __4(files3, r26);
    goto L9(i32, r27);
  L65():
    goto L10(i34, r30);
  L67():
    root = ld root;
    check L69() else D23();
  L68():
    r32 = dyn base5("<a href=\"", <sym root>, "demo/", <sym file>, "\">", <sym pkg>, "::", <sym topic>, "</a>");
    goto L12(i37, r32);
  L80():
    pkg4 = ld pkg;
    check L82() else D31();
  L81():
    r39 = dyn base7(<sym pkg>, "::", <sym topic>);
    goto L15(i37, r39);
  L85():
    link = ld link;
    check L87() else D34();
  L86():
    r42 = dyn base8("<tr><td style=\"text-align: right; vertical-align: top;\">", <sym link>, "</td>\n<td></td><td style=\"vertical-align: top;\">", <sym Title>, "</td>\n<td style=\"vertical-align: top; white-space: nowrap\">", <sym runlink>, "</td></tr>");
    goto L16(i46, r42);
  D23():
    deopt 85 [i37, root];
  D31():
    deopt 114 [i37, pkg4];
  D34():
    deopt 128 [i46, link];
  L13(i45, r36):
    st runlink = r36;
    goto L14(i45);
  L17(i55, r46):
    st out = r46;
    goto L3(i55);
  L69():
    root1 = force? root;
    checkMissing(root1);
    file2 = ld file;
    check L70() else D24();
  L74():
    root2 = ld root;
    check L76() else D28();
  L75():
    r35 = dyn base6(" <a href=\"", <sym root>, "Demo/", <sym topic>, "\">(Run demo)</a>");
    goto L13(i42, r35);
  L82():
    pkg5 = force? pkg4;
    checkMissing(pkg5);
    topic6 = ld topic;
    check L83() else D32();
  L87():
    link1 = force? link;
    checkMissing(link1);
    Title = ld Title;
    check L88() else D35();
  L91():
    out = ld out;
    check L93() else D38();
  L92():
    r45 = dyn base9(<sym out>, <lang paste(line, collapse="")>);
    goto L17(i52, r45);
  D24():
    deopt 88 [i37, file2];
  D28():
    deopt 103 [i42, root2];
  D32():
    deopt 117 [i37, topic6];
  D35():
    deopt 131 [i46, Title];
  D38():
    deopt 142 [i52, out];
  L70():
    file3 = force? file2;
    checkMissing(file3);
    pkg2 = ld pkg;
    check L71() else D25();
  L76():
    root3 = force? root2;
    checkMissing(root3);
    topic4 = ld topic;
    check L77() else D29();
  L83():
    topic7 = force? topic6;
    checkMissing(topic7);
    c11 = ldf c in base;
    r41 = dyn c11(pkg5, "::", topic7);
    check L84() else D33();
  L88():
    Title1 = force? Title;
    checkMissing(Title1);
    runlink = ld runlink;
    check L89() else D36();
  L93():
    out1 = force? out;
    checkMissing(out1);
    paste = ldf paste;
    check L94() else D39();
  D25():
    deopt 91 [i37, pkg2];
  D29():
    deopt 106 [i42, topic4];
  D33():
    deopt 120 [i37, r41];
  D36():
    deopt 134 [i46, runlink];
  D39():
    deopt 145 [i52];
  L71():
    pkg3 = force? pkg2;
    checkMissing(pkg3);
    topic2 = ld topic;
    check L72() else D26();
  L77():
    topic5 = force? topic4;
    checkMissing(topic5);
    c10 = ldf c in base;
    r37 = dyn c10(" <a href=\"", root3, "Demo/", topic5, "\">(Run demo)</a>");
    check L78() else D30();
  L84():
    goto L15(i37, r41);
  L89():
    runlink1 = force? runlink;
    checkMissing(runlink1);
    c12 = ldf c in base;
    r44 = dyn c12("<tr><td style=\"text-align: right; vertical-align: top;\">", link1, "</td>\n<td></td><td style=\"vertical-align: top;\">", Title1, "</td>\n<td style=\"vertical-align: top; white-space: nowrap\">", runlink1, "</td></tr>");
    check L90() else D37();
  L94():
    p5 = prom<V +>{
      line = ld line;
      line1 = force? line;
      checkMissing(line1);
      return line1;
    };
    r48 = dyn paste[, collapse](p5, "");
    check L95() else D40();
  D26():
    deopt 94 [i37, topic2];
  D30():
    deopt 110 [i42, r37];
  D37():
    deopt 138 [i46, r44];
  D40():
    deopt 149 [i52, r48];
  L72():
    topic3 = force? topic2;
    checkMissing(topic3);
    c9 = ldf c in base;
    r34 = dyn c9("<a href=\"", root1, "demo/", file3, "\">", pkg3, "::", topic3, "</a>");
    check L73() else D27();
  L78():
    goto L13(i42, r37);
  L90():
    goto L16(i46, r44);
  L95():
    c13 = ldf c in base;
    r49 = dyn c13(out1, r48);
    check L96() else D41();
  D27():
    deopt 98 [i37, r34];
  D41():
    deopt 151 [i52, r49];
  L73():
    goto L12(i37, r34);
  L96():
    goto L17(i52, r49);
  }
}