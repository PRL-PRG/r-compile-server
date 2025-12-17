fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1515340230;
    st mirror2html = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1515340230(mirrors, file, head, foot) {
  (reg mirrors:*, reg file:*, reg head:*, reg foot:*) -+> V { var mirrors:*, reg mirrors_isMissing:L, reg mirrors_orDefault:*, var file:*, reg file_isMissing:L, reg file_orDefault:*, var head:*, reg head_isMissing:L, reg head_orDefault:*, var foot:*, reg foot_isMissing:L, reg foot_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg mirrors1:*, reg mirrors2:V, reg c:V, reg c1:L, reg getCRANmirrors:cls, reg r2:V, reg gsub:cls, reg mirrors3:*, reg mirrors4:V, reg c2:L, reg mirrors6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg p:p(V +), reg r6:V, reg l:*, reg c3:L, reg r8:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r11:V, reg file_exists:cls, reg head1:*, reg head2:V, reg p1:p(V +), reg r13:V, reg c4:L, reg readLines:cls, reg head3:*, reg head4:V, reg p2:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg z:*, reg z1:V, reg c5:cls, reg r19:V, reg unique:cls, reg mirrors7:*, reg mirrors8:V, reg c6:L, reg mirrors10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r20:V, reg p3:p(V +), reg r22:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x:V, reg mirrors11:*, reg mirrors12:V, reg c8:L, reg i6:I, reg mirrors14:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i8:I, reg dx7:V, reg mirrors15:*, reg mirrors16:V, reg c9:L, reg i10:I, reg mirrors19:V, reg mirrors20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i12:I, reg mirrors22:V, reg dx9:V, reg r23:V, reg country:*, reg country1:V, reg r24:V, reg __:cls, reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg i15:I, reg r27:V, reg z2:*, reg z3:V, reg paste0:cls, reg country2:*, reg country3:V, reg p4:p(V +), reg r29:V, reg c10:cls, reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg i18:I, reg r32:V, reg nrow:cls, reg m:*, reg m1:V, reg p5:p(V +), reg r34:V, reg r35:I, reg s1:V, reg l4:I, reg i19:I, reg i20:I, reg i21:I, reg i22:I, reg c11:L, reg x1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg i31:I, reg i32:I, reg r37:V, reg z4:*, reg z5:V, reg sprintf:cls, reg m2:*, reg m3:V, reg c12:L, reg m5:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r38:V, reg c13:L, reg dx13:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg k:*, reg k1:V, reg __1:cls, reg r39:V, reg p6:p(V +), reg m6:*, reg m7:V, reg c14:L, reg m9:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r41:V, reg c15:L, reg dx19:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg k2:*, reg k3:V, reg __2:cls, reg r42:V, reg p7:p(V +), reg r44:V, reg m10:*, reg m11:V, reg c16:L, reg i35:I, reg i36:I, reg m13:V, reg dr18:V, reg dc9:L, reg dx22:V, reg i39:I, reg i40:I, reg dx23:V, reg r45:V, reg c17:L, reg i43:I, reg i44:I, reg dx25:V, reg dr20:V, reg dc10:L, reg dx26:V, reg i47:I, reg i48:I, reg dx27:V, reg k4:*, reg k5:V, reg __3:cls, reg r46:V, reg c18:cls, reg r47:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg i51:I, reg r49:V, reg z6:*, reg z7:V, reg c19:cls, reg r50:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg r52:V, reg z8:*, reg z9:V, reg c20:cls, reg r53:V, reg file_exists1:cls, reg foot1:*, reg foot2:V, reg p8:p(V +), reg r55:V, reg c21:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg z10:*, reg z11:V, reg readLines1:cls, reg foot3:*, reg foot4:V, reg p9:p(V +), reg r59:V, reg c22:cls, reg r60:V, reg file1:*, reg file2:V, reg r62:V, reg c23:L, reg writeLines:cls, reg z12:*, reg z13:V, reg p10:p(V +), reg file3:*, reg file4:V, reg p11:p(V +), reg r65:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r67:V, reg r68:V, reg z14:*, reg z15:V, reg invisible:cls, reg r69:V |
    mkenv;
    mirrors_isMissing = missing.0(mirrors);
    if mirrors_isMissing then L0(NULL) else L0(mirrors);
  L0(mirrors_orDefault):
    st mirrors = mirrors_orDefault;
    file_isMissing = missing.0(file);
    if file_isMissing then L1("mirrors.html") else L1(file);
  L1(file_orDefault):
    st file = file_orDefault;
    head_isMissing = missing.0(head);
    if head_isMissing then L2("mirrors-head.html") else L2(head);
  L2(head_orDefault):
    st head = head_orDefault;
    foot_isMissing = missing.0(foot);
    if foot_isMissing then L3("mirrors-foot.html") else L3(foot);
  L3(foot_orDefault):
    st foot = foot_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L4(r1):
    c1 = `as.logical`(r1);
    if c1 then L30() else L5();
  L27():
    mirrors1 = ld mirrors;
    check L29() else D0();
  L28():
    r = dyn base(<sym mirrors>);
    goto L4(r);
  D0():
    deopt 1 [mirrors1];
  L5():
    goto L6();
  L6():
    gsub = ldf gsub;
    check L34() else D3();
  L29():
    mirrors2 = force? mirrors1;
    checkMissing(mirrors2);
    c = `==`(mirrors2, NULL);
    goto L4(c);
  L30():
    getCRANmirrors = ldf getCRANmirrors;
    check L31() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 15 [];
  L31():
    r2 = dyn getCRANmirrors[all, `local.only`](FALSE, TRUE);
    check L32() else D2();
  L34():
    p = prom<V +>{
      mirrors3 = ld mirrors;
      mirrors4 = force? mirrors3;
      checkMissing(mirrors4);
      c2 = `is.object`(mirrors4);
      if c2 then L1() else L2(mirrors4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", mirrors4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(mirrors6):
      r4 = `$`(mirrors6, <sym Host>);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn gsub[, , , fixed]("&", "&amp;", p, TRUE);
    check L35() else D4();
  D2():
    deopt 10 [r2];
  D4():
    deopt 21 [r6];
  L32():
    st mirrors = r2;
    goto L6();
  L35():
    l = ld mirrors;
    c3 = `is.object`(l);
    if c3 then L37() else L38(r6, l);
  L36(dx3):
    st mirrors = dx3;
    st z = NULL;
    file_exists = ldf `file.exists`;
    check L40() else D5();
  L37():
    dr2 = tryDispatchBuiltin.0("$<-", l, r6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(r6, dr2);
  L38(r8, l2):
    r11 = `$<-`(l2, <sym Host>, r6);
    goto L36(r11);
  D5():
    deopt 29 [];
  L39():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L36(dx2);
  L40():
    p1 = prom<V +>{
      head1 = ld head;
      head2 = force? head1;
      checkMissing(head2);
      return head2;
    };
    r13 = dyn file_exists(p1);
    check L41() else D6();
  D6():
    deopt 31 [r13];
  L41():
    c4 = `as.logical`(r13);
    if c4 then L42() else L7();
  L7():
    goto L8();
  L8():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  L42():
    readLines = ldf readLines;
    check L43() else D7();
  D7():
    deopt 33 [];
  L9(r18):
    st z = r18;
    unique = ldf unique;
    check L50() else D11();
  L43():
    p2 = prom<V +>{
      head3 = ld head;
      head4 = force? head3;
      checkMissing(head4);
      return head4;
    };
    r15 = dyn readLines(p2);
    check L44() else D8();
  L46():
    z = ld z;
    check L48() else D9();
  L47():
    r17 = dyn base1(<sym z>, "<dl>");
    goto L9(r17);
  D8():
    deopt 35 [r15];
  D9():
    deopt 41 [z];
  D11():
    deopt 48 [];
  L44():
    st z = r15;
    goto L8();
  L48():
    z1 = force? z;
    checkMissing(z1);
    c5 = ldf c in base;
    r19 = dyn c5(z1, "<dl>");
    check L49() else D10();
  L50():
    p3 = prom<V +>{
      mirrors7 = ld mirrors;
      mirrors8 = force? mirrors7;
      checkMissing(mirrors8);
      c6 = `is.object`(mirrors8);
      if c6 then L1() else L2(mirrors8);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", mirrors8);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(mirrors10):
      r20 = `$`(mirrors10, <sym Country>);
      goto L0(r20);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r22 = dyn unique(p3);
    check L51() else D12();
  D10():
    deopt 45 [r19];
  D12():
    deopt 50 [r22];
  L49():
    goto L9(r19);
  L51():
    s = toForSeq(r22);
    l3 = length(s);
    i = 0;
    goto L10(i);
  L10(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l3, i2);
    if c7 then L52() else L19();
  L19():
    x = `[[`(s, i2, NULL, TRUE);
    st country = x;
    mirrors11 = ld mirrors;
    check L53() else D13();
  L52():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L93() else L94();
  D13():
    deopt 51 [i2, mirrors11];
  L20(r52):
    st z = r52;
    file_exists1 = ldf `file.exists`;
    check L97() else D32();
  L53():
    mirrors12 = force? mirrors11;
    checkMissing(mirrors12);
    c8 = `is.object`(mirrors12);
    if c8 then L54() else L55(i2, mirrors12);
  L93():
    z8 = ld z;
    check L95() else D30();
  L94():
    r51 = dyn base6(<sym z>, "</dl>");
    goto L20(r51);
  D30():
    deopt 125 [z8];
  D32():
    deopt 132 [];
  L11(i8, dx7):
    st m = dx7;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L63() else L64();
  L54():
    dr6 = tryDispatchBuiltin.1("[", mirrors12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L56() else L55(i2, dr6);
  L55(i6, mirrors14):
    mirrors15 = ld mirrors;
    check L57() else D14();
  L95():
    z9 = force? z8;
    checkMissing(z9);
    c20 = ldf c in base;
    r53 = dyn c20(z9, "</dl>");
    check L96() else D31();
  L97():
    p8 = prom<V +>{
      foot1 = ld foot;
      foot2 = force? foot1;
      checkMissing(foot2);
      return foot2;
    };
    r55 = dyn file_exists1(p8);
    check L98() else D33();
  D14():
    deopt 53 [i6, mirrors14, mirrors15];
  D31():
    deopt 129 [r53];
  D33():
    deopt 134 [r55];
  L12(i15, r27):
    st z = r27;
    sym3 = ldf seq_len;
    base3 = ldf seq_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L69() else L70();
  L56():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L11(i2, dx6);
  L57():
    mirrors16 = force? mirrors15;
    checkMissing(mirrors16);
    c9 = `is.object`(mirrors16);
    if c9 then L59() else L60(i6, mirrors14, mirrors16);
  L63():
    z2 = ld z;
    check L65() else D16();
  L64():
    r26 = dyn base2(<sym z>, <lang paste0("<dt>", country, "</dt>")>, "<dd>", "<table border=0 style=\"width: 90%;\">");
    goto L12(i8, r26);
  L96():
    goto L20(r53);
  L98():
    c21 = `as.logical`(r55);
    if c21 then L99() else L21();
  D16():
    deopt 64 [i8, z2];
  L13(i18, r32):
    s1 = toForSeq(r32);
    l4 = length(s1);
    i19 = 0;
    goto L14(i18, i19);
  L21():
    goto L23();
  L23():
    file1 = ld file;
    check L107() else D38();
  L58(i12, mirrors22, dx9):
    country = ld country;
    check L62() else D15();
  L59():
    dr8 = tryDispatchBuiltin.1("$", mirrors16);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L61() else L60(i6, mirrors14, dr8);
  L60(i10, mirrors19, mirrors20):
    r23 = `$`(mirrors20, <sym Country>);
    goto L58(i10, mirrors19, r23);
  L65():
    z3 = force? z2;
    checkMissing(z3);
    paste0 = ldf paste0;
    check L66() else D17();
  L69():
    nrow = ldf nrow;
    check L71() else D20();
  L70():
    r31 = dyn base3(<lang nrow(m)>);
    goto L13(i15, r31);
  L99():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L100() else L101();
  D15():
    deopt 55 [i12, mirrors22, dx9, country];
  D17():
    deopt 67 [i8];
  D20():
    deopt 79 [i15];
  D38():
    deopt 148 [file1];
  L14(i20, i21):
    i22 = `+`.1(i21, 1);
    c11 = `<`.1(l4, i22);
    if c11 then L73() else L17();
  L22(r57):
    st z = r57;
    goto L23();
  L61():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L58(i6, mirrors14, dx8);
  L62():
    country1 = force? country;
    checkMissing(country1);
    r24 = `==`(dx9, country1);
    __ = ldf `[` in base;
    r25 = dyn __(mirrors12, r24, <missing>);
    goto L11(i12, r25);
  L66():
    p4 = prom<V +>{
      country2 = ld country;
      country3 = force? country2;
      checkMissing(country3);
      return country3;
    };
    r29 = dyn paste0("<dt>", p4, "</dt>");
    check L67() else D18();
  L71():
    p5 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r34 = dyn nrow(p5);
    check L72() else D21();
  L100():
    z10 = ld z;
    check L102() else D34();
  L101():
    r56 = dyn base7(<sym z>, <lang readLines(foot)>);
    goto L22(r56);
  L107():
    file2 = force? file1;
    checkMissing(file2);
    r62 = `!=`(file2, "");
    c23 = `as.logical`(r62);
    if c23 then L108() else L24();
  D18():
    deopt 71 [i8, r29];
  D21():
    deopt 81 [i15, r34];
  D34():
    deopt 137 [z10];
  L17():
    x1 = `[[`(s1, i22, NULL, TRUE);
    st k = x1;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L74() else L75();
  L24():
    goto L25();
  L25():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L112() else L113();
  L67():
    c10 = ldf c in base;
    r30 = dyn c10(z3, r29, "<dd>", "<table border=0 style=\"width: 90%;\">");
    check L68() else D19();
  L72():
    r35 = seq_len(r34);
    goto L13(i15, r35);
  L73():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L89() else L90();
  L102():
    z11 = force? z10;
    checkMissing(z11);
    readLines1 = ldf readLines;
    check L103() else D35();
  L108():
    writeLines = ldf writeLines;
    check L109() else D39();
  D19():
    deopt 75 [i8, r30];
  D35():
    deopt 140 [];
  D39():
    deopt 153 [];
  L15(i31, i32, r37):
    st z = r37;
    goto L14(i31, i32);
  L18(i51, r49):
    st z = r49;
    goto L10(i51);
  L26(r68):
    popenv;
    return r68;
  L68():
    goto L12(i8, r30);
  L74():
    z4 = ld z;
    check L76() else D22();
  L75():
    r36 = dyn base4(<sym z>, "<tr>", "<td style=\"width: 45%;\">", <lang sprintf("<a href=\"%s\" target=\"_top\">%s</a>", `[`(`$`(m, URL), k), `[`(`$`(m, URL), k))>, "</td>\n", "<td>", <lang `[`(`$`(m, Host), k)>, "</td>", "</tr>");
    goto L15(i20, i22, r36);
  L89():
    z6 = ld z;
    check L91() else D28();
  L90():
    r48 = dyn base5(<sym z>, "</table>", "</dd>");
    goto L18(i20, r48);
  L103():
    p9 = prom<V +>{
      foot3 = ld foot;
      foot4 = force? foot3;
      checkMissing(foot4);
      return foot4;
    };
    r59 = dyn readLines1(p9);
    check L104() else D36();
  L109():
    p10 = prom<V +>{
      z12 = ld z;
      z13 = force? z12;
      checkMissing(z13);
      return z13;
    };
    p11 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r65 = dyn writeLines(p10, p11);
    check L110() else D40();
  L112():
    z14 = ld z;
    check L114() else D41();
  L113():
    r67 = dyn base8(<sym z>);
    goto L26(r67);
  D22():
    deopt 85 [i20, i22, z4];
  D28():
    deopt 113 [i20, z6];
  D36():
    deopt 142 [r59];
  D40():
    deopt 156 [r65];
  D41():
    deopt 161 [z14];
  L76():
    z5 = force? z4;
    checkMissing(z5);
    sprintf = ldf sprintf;
    check L77() else D23();
  L91():
    z7 = force? z6;
    checkMissing(z7);
    c19 = ldf c in base;
    r50 = dyn c19(z7, "</table>", "</dd>");
    check L92() else D29();
  L104():
    c22 = ldf c in base;
    r60 = dyn c22(z11, r59);
    check L105() else D37();
  L110():
    goto L25();
  L114():
    z15 = force? z14;
    checkMissing(z15);
    invisible = ldf invisible in base;
    r69 = dyn invisible(z15);
    check L115() else D42();
  D23():
    deopt 90 [i20, i22];
  D29():
    deopt 118 [i20, r50];
  D37():
    deopt 144 [r60];
  D42():
    deopt 164 [r69];
  L77():
    p6 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      c12 = `is.object`(m3);
      if c12 then L2() else L3(m3);
    L1(dx11):
      c13 = `is.object`(dx11);
      if c13 then L5() else L6(dx11);
    L2():
      dr10 = tryDispatchBuiltin.1("$", m3);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(m5):
      r38 = `$`(m5, <sym URL>);
      goto L1(r38);
    L0(dx15):
      return dx15;
    L4():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx10);
    L5():
      dr12 = tryDispatchBuiltin.1("[", dx11);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx13):
      k = ld k;
      k1 = force? k;
      __1 = ldf `[` in base;
      r39 = dyn __1(dx13, k1);
      goto L0(r39);
    L7():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    p7 = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      c14 = `is.object`(m7);
      if c14 then L2() else L3(m7);
    L1(dx17):
      c15 = `is.object`(dx17);
      if c15 then L5() else L6(dx17);
    L2():
      dr14 = tryDispatchBuiltin.1("$", m7);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L4() else L3(dr14);
    L3(m9):
      r41 = `$`(m9, <sym URL>);
      goto L1(r41);
    L0(dx21):
      return dx21;
    L4():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx16);
    L5():
      dr16 = tryDispatchBuiltin.1("[", dx17);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L7() else L6(dr16);
    L6(dx19):
      k2 = ld k;
      k3 = force? k2;
      __2 = ldf `[` in base;
      r42 = dyn __2(dx19, k3);
      goto L0(r42);
    L7():
      dx20 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx20);
    };
    r44 = dyn sprintf("<a href=\"%s\" target=\"_top\">%s</a>", p6, p7);
    check L78() else D24();
  L92():
    goto L18(i20, r50);
  L105():
    goto L22(r60);
  L115():
    goto L26(r69);
  D24():
    deopt 94 [i20, i22, r44];
  L78():
    m10 = ld m;
    check L79() else D25();
  D25():
    deopt 97 [i20, i22, m10];
  L79():
    m11 = force? m10;
    checkMissing(m11);
    c16 = `is.object`(m11);
    if c16 then L81() else L82(i20, i22, m11);
  L80(i39, i40, dx23):
    c17 = `is.object`(dx23);
    if c17 then L84() else L85(i39, i40, dx23);
  L81():
    dr18 = tryDispatchBuiltin.1("$", m11);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L83() else L82(i20, i22, dr18);
  L82(i35, i36, m13):
    r45 = `$`(m13, <sym Host>);
    goto L80(i35, i36, r45);
  L16(i47, i48, dx27):
    c18 = ldf c in base;
    r47 = dyn c18(z5, "<tr>", "<td style=\"width: 45%;\">", r44, "</td>\n", "<td>", dx27, "</td>", "</tr>");
    check L88() else D27();
  L83():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L80(i20, i22, dx22);
  L84():
    dr20 = tryDispatchBuiltin.1("[", dx23);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L86() else L85(i39, i40, dr20);
  L85(i43, i44, dx25):
    k4 = ld k;
    check L87() else D26();
  D26():
    deopt 100 [i43, i44, dx25, k4];
  D27():
    deopt 106 [i47, i48, r47];
  L86():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L16(i39, i40, dx26);
  L87():
    k5 = force? k4;
    __3 = ldf `[` in base;
    r46 = dyn __3(dx25, k5);
    goto L16(i43, i44, r46);
  L88():
    goto L15(i47, i48, r47);
  }
}