fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg c2:cls, reg r12:V, reg list:cls, reg r13:V, reg p1:p(V +), reg r15:V, reg Performance:*, reg Performance1:V, reg mcnemar_test:cls, reg Performance2:*, reg Performance3:V, reg p2:p(V +), reg r17:V |
    mkenv;
    r = clos inner411413160;
    st `mcnemar.test` = r;
    matrix = ldf matrix;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(794.0, 86.0, 150.0, 570.0);
      goto L0(r3);
    L2():
      r1 = dyn base(794.0, 86.0, 150.0, 570.0);
      goto L0(r1);
    };
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r6):
      return r6;
    L3():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L4():
      r5 = dyn base1[`1st Survey`, `2nd Survey`](<lang c("Approve", "Disapprove")>, <lang c("Approve", "Disapprove")>);
      goto L0(r5);
    L1(r8):
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L7() else L8();
    L5():
      c1 = ldf c in base;
      r9 = dyn c1("Approve", "Disapprove");
      goto L1(r9);
    L6():
      r7 = dyn base2("Approve", "Disapprove");
      goto L1(r7);
    L2(r11):
      list = ldf list in base;
      r13 = dyn list(r8, r11);
      goto L0(r13);
    L7():
      c2 = ldf c in base;
      r12 = dyn c2("Approve", "Disapprove");
      goto L2(r12);
    L8():
      r10 = dyn base3("Approve", "Disapprove");
      goto L2(r10);
    };
    r15 = dyn matrix[, nrow, dimnames](p, 2.0, p1);
    check L1() else D1();
  D1():
    deopt 10 [r15];
  L1():
    st Performance = r15;
    Performance = ld Performance;
    check L2() else D2();
  D2():
    deopt 12 [Performance];
  L2():
    Performance1 = force? Performance;
    checkMissing(Performance1);
    mcnemar_test = ldf `mcnemar.test`;
    check L3() else D3();
  D3():
    deopt 15 [];
  L3():
    p2 = prom<V +>{
      Performance2 = ld Performance;
      Performance3 = force? Performance2;
      checkMissing(Performance3);
      return Performance3;
    };
    r17 = dyn mcnemar_test(p2);
    check L4() else D4();
  D4():
    deopt 17 [r17];
  L4():
    popenv;
    return r17;
  }
}
fun inner411413160(x, y, correct) {
  (reg x:*, reg y:*, reg correct:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var correct:*, reg correct_isMissing:L, reg correct_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r2:V, reg c:L, reg nrow:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r4:V, reg r5:*, reg r6:V, reg r7:V, reg c1:L, reg c2:V, reg ncol:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r9:V, reg r10:*, reg r11:V, reg r12:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg x7:*, reg x8:V, reg r17:V, reg any:cls, reg r18:V, reg c8:L, reg c9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg c13:L, reg r20:V, reg x9:*, reg x10:V, reg anyNA:cls, reg r21:V, reg c14:L, reg c15:V, reg c17:L, reg stop1:cls, reg r22:V, reg deparse1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg substitute:cls, reg r26:V, reg p2:p(V +), reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg y1:*, reg y2:V, reg c18:V, reg c19:L, reg stop2:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg x11:*, reg x12:V, reg length:cls, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg r41:V, reg y3:*, reg y4:V, reg length1:cls, reg r42:V, reg r43:V, reg c20:L, reg stop3:cls, reg r44:V, reg paste:cls, reg deparse2:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg substitute1:cls, reg r48:V, reg p3:p(V +), reg r50:V, reg p4:p(V +), reg deparse3:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg r53:V, reg substitute2:cls, reg r54:V, reg p5:p(V +), reg r56:V, reg p6:p(V +), reg r58:V, reg complete_cases:cls, reg x13:*, reg x14:V, reg p7:p(V +), reg y5:*, reg y6:V, reg p8:p(V +), reg r61:V, reg as_factor:cls, reg x15:*, reg x16:V, reg c21:L, reg x18:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg OK:*, reg OK1:V, reg __:cls, reg r62:V, reg p9:p(V +), reg r64:V, reg as_factor1:cls, reg y7:*, reg y8:V, reg c22:L, reg y10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg OK2:*, reg OK3:V, reg __1:cls, reg r65:V, reg p10:p(V +), reg r67:V, reg nlevels:cls, reg x19:*, reg x20:V, reg p11:p(V +), reg r69:V, reg r70:*, reg r71:V, reg r72:V, reg c23:L, reg c24:V, reg nlevels1:cls, reg y11:*, reg y12:V, reg p12:p(V +), reg r74:V, reg r75:*, reg r76:V, reg r77:V, reg c26:L, reg c27:V, reg c29:L, reg stop4:cls, reg r78:V, reg table:cls, reg x21:*, reg x22:V, reg p13:p(V +), reg y13:*, reg y14:V, reg p14:p(V +), reg r82:V, reg r83:*, reg r84:V, reg r85:*, reg r86:V, reg r87:V, reg r88:V, reg r89:V, reg correct1:*, reg correct2:V, reg c30:L, reg c32:V, reg r90:*, reg r91:V, reg r92:V, reg c33:L, reg c34:V, reg c36:L, reg c38:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r93:V, reg c41:L, reg r94:V, reg x23:*, reg x24:V, reg t:cls, reg x25:*, reg x26:V, reg p15:p(V +), reg r96:V, reg r97:V, reg r98:V, reg any1:cls, reg r99:V, reg c42:L, reg c43:V, reg c45:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r100:V, reg r101:V, reg x27:*, reg x28:V, reg t1:cls, reg x29:*, reg x30:V, reg p16:p(V +), reg r103:V, reg r104:V, reg abs:cls, reg r105:V, reg r106:V, reg paste1:cls, reg METHOD:*, reg METHOD1:V, reg p17:p(V +), reg r108:V, reg x31:*, reg x32:V, reg t2:cls, reg x33:*, reg x34:V, reg p18:p(V +), reg r111:V, reg r112:V, reg x35:*, reg x36:V, reg t3:cls, reg x37:*, reg x38:V, reg p19:p(V +), reg r114:V, reg r115:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r116:V, reg r117:V, reg y15:*, reg y16:V, reg c46:L, reg y18:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg upper_tri:cls, reg x39:*, reg x40:V, reg p20:p(V +), reg r119:V, reg __2:cls, reg r120:V, reg r121:V, reg x41:*, reg x42:V, reg c47:L, reg r123:V, reg x44:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r125:V, reg dx7:V, reg upper_tri1:cls, reg x45:*, reg x46:V, reg p21:p(V +), reg r127:V, reg __3:cls, reg r128:V, reg r129:V, reg sum:cls, reg r130:V, reg pchisq:cls, reg STATISTIC:*, reg STATISTIC1:V, reg p22:p(V +), reg PARAMETER:*, reg PARAMETER1:V, reg p23:p(V +), reg r133:V, reg l:*, reg names__:cls, reg r134:V, reg l1:*, reg names__1:cls, reg r135:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r136:V, reg r137:V, reg STATISTIC2:*, reg STATISTIC3:V, reg PARAMETER2:*, reg PARAMETER3:V, reg PVAL:*, reg PVAL1:V, reg METHOD2:*, reg METHOD3:V, reg DNAME:*, reg DNAME1:V, reg list:cls, reg r138:V, reg l2:*, reg class__:cls, reg r139:V, reg RVAL:*, reg RVAL1:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    correct_isMissing = missing.0(correct);
    if correct_isMissing then L1(TRUE) else L1(correct);
  L1(correct_orDefault):
    st correct = correct_orDefault;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L33() else L34();
  L2(r1):
    c = `as.logical`(r1);
    if c then L37() else L3();
  L33():
    x1 = ld x;
    check L35() else D0();
  L34():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  L12():
    r83 = ld r;
    check L108() else D45();
  L35():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r2 = dyn is_matrix(x2);
    check L36() else D1();
  L37():
    nrow = ldf nrow;
    check L38() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D45():
    deopt 133 [r83];
  L13(r31):
    c19 = `as.logical`(r31);
    if c19 then L70() else L14();
  L36():
    goto L2(r2);
  L38():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r4 = dyn nrow(p);
    check L39() else D3();
  L67():
    y1 = ld y;
    check L69() else D18();
  L68():
    r30 = dyn base4(<sym y>);
    goto L13(r30);
  L108():
    r84 = force? r83;
    checkMissing(r84);
    r85 = ld r;
    check L109() else D46();
  D3():
    deopt 9 [r4];
  D18():
    deopt 55 [y1];
  D46():
    deopt 134 [r84, r85];
  L14():
    goto L15();
  L15():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  L39():
    st r = r4;
    r5 = ld r;
    check L40() else D4();
  L69():
    y2 = force? y1;
    checkMissing(y2);
    c18 = `==`(y2, NULL);
    goto L13(c18);
  L70():
    stop2 = ldf stop;
    check L71() else D19();
  L109():
    r86 = force? r85;
    checkMissing(r86);
    r87 = `-`(r86, 1.0);
    r88 = `*`(r84, r87);
    r89 = `/`(r88, 2.0);
    st PARAMETER = r89;
    st METHOD = "McNemar's Chi-squared test";
    correct1 = ld correct;
    check L110() else D47();
  D4():
    deopt 11 [r5];
  D19():
    deopt 59 [];
  D47():
    deopt 145 [correct1];
  L16(r35):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L78() else L79();
  L40():
    r6 = force? r5;
    checkMissing(r6);
    r7 = `<`(r6, 2.0);
    c1 = `as.logical`(r7);
    if c1 then L4(c1) else L41();
  L71():
    r32 = dyn stop2("if 'x' is not a matrix, 'y' must be given");
    check L72() else D20();
  L74():
    x11 = ld x;
    check L76() else D21();
  L75():
    r34 = dyn base5(<sym x>);
    goto L16(r34);
  L110():
    correct2 = force? correct1;
    checkMissing(correct2);
    c30 = `as.logical`(correct2);
    if c30 then L111() else L23(c30);
  D20():
    deopt 61 [r32];
  D21():
    deopt 66 [x11];
  L4(c2):
    c7 = `as.logical`(c2);
    if c7 then L46() else L5();
  L17(r40, r41):
    r43 = `!=`(r40, r41);
    c20 = `as.logical`(r43);
    if c20 then L82() else L18();
  L23(c32):
    c36 = `as.logical`(c32);
    if c36 then L114() else L24(c36);
  L41():
    ncol = ldf ncol;
    check L42() else D5();
  L72():
    goto L15();
  L76():
    x12 = force? x11;
    checkMissing(x12);
    length = ldf length in base;
    r36 = dyn length(x12);
    check L77() else D22();
  L78():
    y3 = ld y;
    check L80() else D23();
  L79():
    r39 = dyn base6(<sym y>);
    goto L17(r35, r39);
  L111():
    r90 = ld r;
    check L112() else D48();
  D5():
    deopt 16 [c1];
  D22():
    deopt 69 [r36];
  D23():
    deopt 71 [r35, y3];
  D48():
    deopt 147 [c30, r90];
  L5():
    goto L6();
  L6():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L50() else L51();
  L18():
    goto L19();
  L19():
    paste = ldf paste;
    check L86() else D27();
  L24(c38):
    c45 = `as.logical`(c38);
    if c45 then L122() else L26();
  L42():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r9 = dyn ncol(p1);
    check L43() else D6();
  L46():
    stop = ldf stop;
    check L47() else D8();
  L77():
    goto L16(r36);
  L80():
    y4 = force? y3;
    checkMissing(y4);
    length1 = ldf length in base;
    r42 = dyn length1(y4);
    check L81() else D24();
  L82():
    stop3 = ldf stop;
    check L83() else D25();
  L112():
    r91 = force? r90;
    checkMissing(r91);
    r92 = `==`(r91, 2.0);
    c33 = `as.logical`(r92);
    c34 = `&&`(c30, c33);
    goto L23(c34);
  L114():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L115() else L116();
  D6():
    deopt 18 [c1, r9];
  D8():
    deopt 23 [];
  D24():
    deopt 74 [r35, r42];
  D25():
    deopt 77 [];
  D27():
    deopt 83 [];
  L7(r16):
    c8 = `as.logical`(r16);
    if c8 then L8(c8) else L54();
  L25(c41, r94):
    c42 = `as.logical`(r94);
    c43 = `&&`(c41, c42);
    goto L24(c43);
  L26():
    x31 = ld x;
    check L132() else D59();
  L28():
    x35 = ld x;
    check L135() else D62();
  L43():
    r10 = ld r;
    check L44() else D7();
  L47():
    r13 = dyn stop("'x' must be square with at least two rows and columns");
    check L48() else D9();
  L50():
    x7 = ld x;
    check L52() else D10();
  L51():
    r15 = dyn base1(<lang `<`(x, 0.0)>);
    goto L7(r15);
  L81():
    goto L17(r35, r42);
  L83():
    r44 = dyn stop3("'x' and 'y' must have the same length");
    check L84() else D26();
  L86():
    p4 = prom<V +>{
      deparse2 = ldf deparse1;
      p3 = prom<V +>{
        sym7 = ldf substitute;
        base7 = ldf substitute in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r47):
        return r47;
      L1():
        substitute1 = ldf substitute in base;
        r48 = dyn substitute1(<sym x>);
        goto L0(r48);
      L2():
        r46 = dyn base7(<sym x>);
        goto L0(r46);
      };
      r50 = dyn deparse2(p3);
      return r50;
    };
    p6 = prom<V +>{
      deparse3 = ldf deparse1;
      p5 = prom<V +>{
        sym8 = ldf substitute;
        base8 = ldf substitute in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r53):
        return r53;
      L1():
        substitute2 = ldf substitute in base;
        r54 = dyn substitute2(<sym y>);
        goto L0(r54);
      L2():
        r52 = dyn base8(<sym y>);
        goto L0(r52);
      };
      r56 = dyn deparse3(p5);
      return r56;
    };
    r58 = dyn paste(p4, "and", p6);
    check L87() else D28();
  L115():
    x23 = ld x;
    check L117() else D49();
  L116():
    r93 = dyn base9(<lang `!=`(`-`(x, t(x)), 0.0)>);
    goto L25(c36, r93);
  L122():
    sym10 = ldf abs;
    base10 = ldf abs in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L123() else L124();
  D7():
    deopt 18 [c1, r9, r10];
  D9():
    deopt 25 [r13];
  D10():
    deopt 30 [x7];
  D26():
    deopt 79 [r44];
  D28():
    deopt 87 [r58];
  D49():
    deopt 154 [c36, x23];
  D59():
    deopt 184 [x31];
  D62():
    deopt 191 [x35];
  L8(c9):
    c17 = `as.logical`(c9);
    if c17 then L60() else L10();
  L27(r101):
    r106 = `-`(r101, 1.0);
    st y = r106;
    paste1 = ldf paste;
    check L129() else D57();
  L44():
    r11 = force? r10;
    checkMissing(r11);
    r12 = `!=`(r9, r11);
    c4 = `as.logical`(r12);
    c5 = `||`(c1, c4);
    goto L4(c5);
  L48():
    goto L6();
  L52():
    x8 = force? x7;
    checkMissing(x8);
    r17 = `<`(x8, 0.0);
    any = ldf any in base;
    r18 = dyn any(r17);
    check L53() else D11();
  L54():
    sym2 = ldf anyNA;
    base2 = ldf anyNA in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L55() else L56();
  L84():
    goto L19();
  L87():
    st DNAME = r58;
    complete_cases = ldf `complete.cases`;
    check L88() else D29();
  L117():
    x24 = force? x23;
    checkMissing(x24);
    t = ldf t;
    check L118() else D50();
  L123():
    x27 = ld x;
    check L125() else D53();
  L124():
    r100 = dyn base10(<lang `-`(x, t(x))>);
    goto L27(r100);
  L132():
    x32 = force? x31;
    checkMissing(x32);
    t2 = ldf t;
    check L133() else D60();
  L135():
    x36 = force? x35;
    checkMissing(x36);
    t3 = ldf t;
    check L136() else D63();
  D11():
    deopt 35 [r18];
  D29():
    deopt 90 [];
  D50():
    deopt 156 [c36, x24];
  D53():
    deopt 167 [x27];
  D57():
    deopt 179 [];
  D60():
    deopt 186 [x32];
  D63():
    deopt 193 [x36];
  L9(c13, r20):
    c14 = `as.logical`(r20);
    c15 = `||`(c13, c14);
    goto L8(c15);
  L10():
    goto L11();
  L11():
    deparse1 = ldf deparse1;
    check L64() else D16();
  L53():
    goto L7(r18);
  L55():
    x9 = ld x;
    check L57() else D12();
  L56():
    r19 = dyn base2(<sym x>);
    goto L9(c8, r19);
  L60():
    stop1 = ldf stop;
    check L61() else D14();
  L88():
    p7 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p8 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    r61 = dyn complete_cases(p7, p8);
    check L89() else D30();
  L118():
    p15 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    };
    r96 = dyn t(p15);
    check L119() else D51();
  L125():
    x28 = force? x27;
    checkMissing(x28);
    t1 = ldf t;
    check L126() else D54();
  L129():
    p17 = prom<V +>{
      METHOD = ld METHOD;
      METHOD1 = force? METHOD;
      checkMissing(METHOD1);
      return METHOD1;
    };
    r108 = dyn paste1(p17, "with continuity correction");
    check L130() else D58();
  L133():
    p18 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      return x34;
    };
    r111 = dyn t2(p18);
    check L134() else D61();
  L136():
    p19 = prom<V +>{
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      return x38;
    };
    r114 = dyn t3(p19);
    check L137() else D64();
  D12():
    deopt 38 [c8, x9];
  D14():
    deopt 44 [];
  D16():
    deopt 50 [];
  D30():
    deopt 93 [r61];
  D51():
    deopt 158 [c36, x24, r96];
  D54():
    deopt 169 [x28];
  D58():
    deopt 182 [r108];
  D61():
    deopt 188 [x32, r111];
  D64():
    deopt 195 [x36, r114];
  L57():
    x10 = force? x9;
    checkMissing(x10);
    anyNA = ldf anyNA in base;
    r21 = dyn anyNA(x10);
    check L58() else D13();
  L61():
    r22 = dyn stop1("all entries of 'x' must be nonnegative and finite");
    check L62() else D15();
  L64():
    p2 = prom<V +>{
      sym3 = ldf substitute;
      base3 = ldf substitute in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      substitute = ldf substitute in base;
      r26 = dyn substitute(<sym x>);
      goto L0(r26);
    L2():
      r24 = dyn base3(<sym x>);
      goto L0(r24);
    };
    r28 = dyn deparse1(p2);
    check L65() else D17();
  L89():
    st OK = r61;
    as_factor = ldf `as.factor`;
    check L90() else D31();
  L119():
    r97 = `-`(x24, r96);
    r98 = `!=`(r97, 0.0);
    any1 = ldf any in base;
    r99 = dyn any1(r98);
    check L120() else D52();
  L126():
    p16 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    r103 = dyn t1(p16);
    check L127() else D55();
  L130():
    st METHOD = r108;
    goto L28();
  L134():
    r112 = `-`(x32, r111);
    st y = r112;
    goto L28();
  L137():
    r115 = `+`(x36, r114);
    st x = r115;
    sym11 = ldf sum;
    base11 = ldf sum in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L138() else L139();
  D13():
    deopt 41 [c8, r21];
  D15():
    deopt 46 [r22];
  D17():
    deopt 52 [r28];
  D31():
    deopt 96 [];
  D52():
    deopt 163 [c36, r99];
  D55():
    deopt 171 [x28, r103];
  L29(r117):
    st STATISTIC = r117;
    pchisq = ldf pchisq;
    check L153() else D72();
  L58():
    goto L9(c8, r21);
  L62():
    goto L11();
  L65():
    st DNAME = r28;
    goto L12();
  L90():
    p9 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      c21 = `is.object`(x16);
      if c21 then L1() else L2(x16);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x16);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x18):
      OK = ld OK;
      OK1 = force? OK;
      __ = ldf `[` in base;
      r62 = dyn __(x18, OK1);
      goto L0(r62);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r64 = dyn as_factor(p9);
    check L91() else D32();
  L120():
    goto L25(c36, r99);
  L127():
    r104 = `-`(x28, r103);
    abs = ldf abs in base;
    r105 = dyn abs(r104);
    check L128() else D56();
  L138():
    y15 = ld y;
    check L140() else D65();
  L139():
    r116 = dyn base11(<lang `/`(`^`(`[`(y, upper.tri(x)), 2.0), `[`(x, upper.tri(x)))>);
    goto L29(r116);
  D32():
    deopt 98 [r64];
  D56():
    deopt 174 [r105];
  D65():
    deopt 200 [y15];
  D72():
    deopt 220 [];
  L91():
    st x = r64;
    as_factor1 = ldf `as.factor`;
    check L92() else D33();
  L128():
    goto L27(r105);
  L140():
    y16 = force? y15;
    checkMissing(y16);
    c46 = `is.object`(y16);
    if c46 then L141() else L142(y16);
  L153():
    p22 = prom<V +>{
      STATISTIC = ld STATISTIC;
      STATISTIC1 = force? STATISTIC;
      checkMissing(STATISTIC1);
      return STATISTIC1;
    };
    p23 = prom<V +>{
      PARAMETER = ld PARAMETER;
      PARAMETER1 = force? PARAMETER;
      checkMissing(PARAMETER1);
      return PARAMETER1;
    };
    r133 = dyn pchisq[, , `lower.tail`](p22, p23, FALSE);
    check L154() else D73();
  D33():
    deopt 101 [];
  D73():
    deopt 225 [r133];
  L30(dx5):
    r121 = `^`(dx5, 2.0);
    x41 = ld x;
    check L146() else D68();
  L92():
    p10 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      c22 = `is.object`(y8);
      if c22 then L1() else L2(y8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", y8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(y10):
      OK2 = ld OK;
      OK3 = force? OK2;
      __1 = ldf `[` in base;
      r65 = dyn __1(y10, OK3);
      goto L0(r65);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r67 = dyn as_factor1(p10);
    check L93() else D34();
  L141():
    dr4 = tryDispatchBuiltin.1("[", y16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L143() else L142(dr4);
  L142(y18):
    upper_tri = ldf `upper.tri`;
    check L144() else D66();
  L154():
    st PVAL = r133;
    l = ld STATISTIC;
    names__ = ldf `names<-`;
    check L155() else D74();
  D34():
    deopt 103 [r67];
  D66():
    deopt 203 [y18];
  D68():
    deopt 208 [r121, x41];
  D74():
    deopt 230 ["McNemar's chi-squared", l, "McNemar's chi-squared"];
  L93():
    st y = r67;
    nlevels = ldf nlevels;
    check L94() else D35();
  L143():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L30(dx4);
  L144():
    p20 = prom<V +>{
      x39 = ld x;
      x40 = force? x39;
      checkMissing(x40);
      return x40;
    };
    r119 = dyn upper_tri(p20);
    check L145() else D67();
  L146():
    x42 = force? x41;
    checkMissing(x42);
    c47 = `is.object`(x42);
    if c47 then L147() else L148(r121, x42);
  L155():
    r134 = dyn names__(l, NULL, "McNemar's chi-squared");
    check L156() else D75();
  D35():
    deopt 106 [];
  D67():
    deopt 205 [y18, r119];
  D75():
    deopt 232 ["McNemar's chi-squared", r134];
  L31(r125, dx7):
    r129 = `/`(r125, dx7);
    sum = ldf sum in base;
    r130 = dyn sum(r129);
    check L152() else D71();
  L94():
    p11 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r69 = dyn nlevels(p11);
    check L95() else D36();
  L145():
    __2 = ldf `[` in base;
    r120 = dyn __2(y18, r119);
    goto L30(r120);
  L147():
    dr6 = tryDispatchBuiltin.1("[", x42);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L149() else L148(r121, dr6);
  L148(r123, x44):
    upper_tri1 = ldf `upper.tri`;
    check L150() else D69();
  L156():
    st STATISTIC = r134;
    l1 = ld PARAMETER;
    names__1 = ldf `names<-`;
    check L157() else D76();
  D36():
    deopt 108 [r69];
  D69():
    deopt 211 [r123, x44];
  D71():
    deopt 217 [r130];
  D76():
    deopt 237 ["df", l1, "df"];
  L95():
    st r = r69;
    r70 = ld r;
    check L96() else D37();
  L149():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L31(r121, dx6);
  L150():
    p21 = prom<V +>{
      x45 = ld x;
      x46 = force? x45;
      checkMissing(x46);
      return x46;
    };
    r127 = dyn upper_tri1(p21);
    check L151() else D70();
  L152():
    goto L29(r130);
  L157():
    r135 = dyn names__1(l1, NULL, "df");
    check L158() else D77();
  D37():
    deopt 110 [r70];
  D70():
    deopt 213 [r123, x44, r127];
  D77():
    deopt 239 ["df", r135];
  L96():
    r71 = force? r70;
    checkMissing(r71);
    r72 = `<`(r71, 2.0);
    c23 = `as.logical`(r72);
    if c23 then L20(c23) else L97();
  L151():
    __3 = ldf `[` in base;
    r128 = dyn __3(x44, r127);
    goto L31(r123, r128);
  L158():
    st PARAMETER = r135;
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L159() else L160();
  L20(c24):
    c29 = `as.logical`(c24);
    if c29 then L102() else L21();
  L32(r137):
    st RVAL = r137;
    l2 = ld RVAL;
    class__ = ldf `class<-`;
    check L167() else D84();
  L97():
    nlevels1 = ldf nlevels;
    check L98() else D38();
  L159():
    STATISTIC2 = ld STATISTIC;
    check L161() else D78();
  L160():
    r136 = dyn base12[statistic, parameter, `p.value`, method, `data.name`](<sym STATISTIC>, <sym PARAMETER>, <sym PVAL>, <sym METHOD>, <sym DNAME>);
    goto L32(r136);
  D38():
    deopt 115 [c23];
  D78():
    deopt 243 [STATISTIC2];
  D84():
    deopt 264 ["htest", l2, "htest"];
  L21():
    goto L22();
  L22():
    table = ldf table;
    check L106() else D43();
  L98():
    p12 = prom<V +>{
      y11 = ld y;
      y12 = force? y11;
      checkMissing(y12);
      return y12;
    };
    r74 = dyn nlevels1(p12);
    check L99() else D39();
  L102():
    stop4 = ldf stop;
    check L103() else D41();
  L161():
    STATISTIC3 = force? STATISTIC2;
    checkMissing(STATISTIC3);
    PARAMETER2 = ld PARAMETER;
    check L162() else D79();
  L167():
    r139 = dyn class__(l2, NULL, "htest");
    check L168() else D85();
  D39():
    deopt 117 [c23, r74];
  D41():
    deopt 122 [];
  D43():
    deopt 128 [];
  D79():
    deopt 246 [PARAMETER2];
  D85():
    deopt 266 ["htest", r139];
  L99():
    r75 = ld r;
    check L100() else D40();
  L103():
    r78 = dyn stop4("'x' and 'y' must have the same number of levels (minimum 2)");
    check L104() else D42();
  L106():
    p13 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    p14 = prom<V +>{
      y13 = ld y;
      y14 = force? y13;
      checkMissing(y14);
      return y14;
    };
    r82 = dyn table(p13, p14);
    check L107() else D44();
  L162():
    PARAMETER3 = force? PARAMETER2;
    checkMissing(PARAMETER3);
    PVAL = ld PVAL;
    check L163() else D80();
  L168():
    st RVAL = r139;
    RVAL = ld RVAL;
    check L169() else D86();
  D40():
    deopt 117 [c23, r74, r75];
  D42():
    deopt 124 [r78];
  D44():
    deopt 131 [r82];
  D80():
    deopt 249 [PVAL];
  D86():
    deopt 268 [RVAL];
  L100():
    r76 = force? r75;
    checkMissing(r76);
    r77 = `!=`(r74, r76);
    c26 = `as.logical`(r77);
    c27 = `||`(c23, c26);
    goto L20(c27);
  L104():
    goto L22();
  L107():
    st x = r82;
    goto L12();
  L163():
    PVAL1 = force? PVAL;
    checkMissing(PVAL1);
    METHOD2 = ld METHOD;
    check L164() else D81();
  L169():
    RVAL1 = force? RVAL;
    checkMissing(RVAL1);
    popenv;
    return RVAL1;
  D81():
    deopt 252 [METHOD2];
  L164():
    METHOD3 = force? METHOD2;
    checkMissing(METHOD3);
    DNAME = ld DNAME;
    check L165() else D82();
  D82():
    deopt 255 [DNAME];
  L165():
    DNAME1 = force? DNAME;
    checkMissing(DNAME1);
    list = ldf list in base;
    r138 = dyn list(STATISTIC3, PARAMETER3, PVAL1, METHOD3, DNAME1);
    check L166() else D83();
  D83():
    deopt 259 [r138];
  L166():
    goto L32(r138);
  }
}