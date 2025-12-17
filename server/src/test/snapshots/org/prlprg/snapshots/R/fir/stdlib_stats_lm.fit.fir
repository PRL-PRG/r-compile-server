fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner765495703;
    st `lm.fit` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner765495703(x, y, offset, method, tol, `singular.ok`, `...`) {
  (reg x:*, reg y:*, reg offset:*, reg method:*, reg tol:*, reg singular_ok:*, reg ddd:dots) -+> V { var x:*, var y:*, var offset:*, reg offset_isMissing:L, reg offset_orDefault:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, var `singular.ok`:*, reg singular_ok_isMissing:L, reg singular_ok_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nrow:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg c:V, reg c1:L, reg stop:cls, reg r4:V, reg n:*, reg n1:V, reg r6:V, reg c2:L, reg stop1:cls, reg r7:V, reg ncol:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r10:V, reg p2:*, reg p3:V, reg r11:V, reg c3:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg numeric:cls, reg r14:V, reg y1:*, reg y2:V, reg y3:*, reg y4:V, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg y5:*, reg y6:V, reg length:cls, reg r18:V, reg list:cls, reg r19:V, reg NCOL:cls, reg y7:*, reg y8:V, reg p4:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg y9:*, reg y10:V, reg is_matrix:cls, reg r26:V, reg c4:L, reg c6:V, reg ny:*, reg ny1:V, reg r27:V, reg c7:L, reg c8:V, reg c10:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg y11:*, reg y12:V, reg drop:cls, reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg offset1:*, reg offset2:V, reg c11:V, reg r34:V, reg c12:L, reg y13:*, reg y14:V, reg offset3:*, reg offset4:V, reg r35:V, reg NROW:cls, reg y15:*, reg y16:V, reg p5:p(V +), reg r38:V, reg n2:*, reg n3:V, reg r39:V, reg c13:L, reg stop2:cls, reg r40:V, reg method1:*, reg method2:V, reg r42:V, reg c14:L, reg warning:cls, reg gettextf:cls, reg method3:*, reg method4:V, reg p6:p(V +), reg r44:V, reg p7:p(V +), reg r46:V, reg chkDots:cls, reg ddd1:dots?, reg r48:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg C_Cdqrls:*, reg C_Cdqrls1:V, reg x5:*, reg x6:V, reg y17:*, reg y18:V, reg tol1:*, reg tol2:V, reg vargs:dots, reg r51:V, reg singular_ok1:*, reg singular_ok2:V, reg r52:V, reg c15:L, reg c17:V, reg z:*, reg z1:V, reg c18:L, reg c20:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg c22:L, reg dx1:V, reg r53:V, reg p8:*, reg p9:V, reg r54:V, reg c23:L, reg c24:V, reg c26:L, reg stop3:cls, reg r55:V, reg z4:*, reg z5:V, reg c27:L, reg z7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r57:V, reg z8:*, reg z9:V, reg c28:L, reg z11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r58:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg z12:*, reg z13:V, reg c29:L, reg z15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r61:V, reg r62:I, reg ____:cls, reg colnames:cls, reg x7:*, reg x8:V, reg p10:p(V +), reg r64:V, reg p11:p(V +), reg paste0:cls, reg p12:*, reg p13:V, reg r66:V, reg p14:p(V +), reg r68:V, reg p15:p(V +), reg r70:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r71:V, reg r72:V, reg dn:*, reg dn1:V, reg c30:L, reg dn3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg pivot:*, reg pivot1:V, reg c31:L, reg dn5:V, reg pivot3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dn7:V, reg dx11:V, reg r73:*, reg r74:V, reg __:cls, reg r75:V, reg __1:cls, reg r76:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r77:V, reg r78:V, reg n4:*, reg n5:V, reg z16:*, reg z17:V, reg c32:L, reg n7:V, reg z19:V, reg dr12:V, reg dc6:L, reg dx12:V, reg n9:V, reg dx13:V, reg r79:V, reg r80:V, reg rep_int:cls, reg r81:V, reg c33:cls, reg r82:V, reg z20:*, reg z21:V, reg c34:L, reg z23:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r83:V, reg p16:*, reg p17:V, reg r84:V, reg c35:L, reg z24:*, reg z25:V, reg c36:L, reg z27:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r85:V, reg r86:V, reg p18:*, reg p19:V, reg r87:V, reg r88:V, reg integer:cls, reg r89:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r90:V, reg r91:V, reg y19:*, reg y20:V, reg is_matrix1:cls, reg r92:V, reg c37:L, reg l:*, reg c38:L, reg r94:L, reg l2:*, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r97:*, reg r98:V, reg ___:cls, reg r99:V, reg z28:*, reg z29:V, reg c39:L, reg z31:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r100:V, reg c40:L, reg coef:*, reg coef1:V, reg l3:*, reg c41:L, reg coef3:V, reg l5:*, reg dr22:V, reg dc11:L, reg dx22:V, reg coef5:V, reg dx23:V, reg pivot4:*, reg pivot5:V, reg ___1:cls, reg r101:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r102:V, reg r103:V, reg dn8:*, reg dn9:V, reg colnames1:cls, reg y21:*, reg y22:V, reg p20:p(V +), reg r105:V, reg list1:cls, reg r106:V, reg l6:*, reg dimnames__:cls, reg r107:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r108:V, reg r109:V, reg nmeffects:*, reg nmeffects1:V, reg colnames2:cls, reg y23:*, reg y24:V, reg p21:p(V +), reg r111:V, reg list2:cls, reg r112:V, reg l7:*, reg c42:L, reg r115:V, reg l10:*, reg r116:V, reg l11:*, reg dr24:V, reg dc12:L, reg dx24:V, reg r119:V, reg l13:*, reg r120:V, reg dx25:V, reg r121:V, reg dimnames__1:cls, reg r122:V, reg c43:L, reg r124:V, reg l15:*, reg dr26:V, reg dc13:L, reg dx26:V, reg r126:V, reg dx27:V, reg r127:V, reg l16:*, reg c44:L, reg r130:L, reg l18:*, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r133:*, reg r134:V, reg ___2:cls, reg r135:V, reg z32:*, reg z33:V, reg c45:L, reg z35:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg r136:V, reg c46:L, reg coef7:*, reg coef8:V, reg l19:*, reg c47:L, reg coef10:V, reg l21:*, reg dr32:V, reg dc16:L, reg dx32:V, reg coef12:V, reg dx33:V, reg pivot6:*, reg pivot7:V, reg ___3:cls, reg r137:V, reg dn10:*, reg dn11:V, reg l22:*, reg names__:cls, reg r138:V, reg nmeffects2:*, reg nmeffects3:V, reg l23:*, reg c48:L, reg nmeffects6:V, reg l26:*, reg nmeffects7:V, reg l27:*, reg dr34:V, reg dc17:L, reg dx34:V, reg nmeffects10:V, reg l29:*, reg nmeffects11:V, reg dx35:V, reg r139:V, reg names__1:cls, reg r140:V, reg c49:L, reg nmeffects13:V, reg l31:*, reg dr36:V, reg dc18:L, reg dx36:V, reg nmeffects15:V, reg dx37:V, reg r141:V, reg coef14:*, reg coef15:V, reg l32:*, reg c50:L, reg coef17:V, reg l34:*, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg r142:V, reg y25:*, reg y26:V, reg z36:*, reg z37:V, reg c51:L, reg y28:V, reg z39:V, reg dr40:V, reg dc20:L, reg dx40:V, reg y30:V, reg dx41:V, reg r143:V, reg r144:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r145:V, reg r146:V, reg offset5:*, reg offset6:V, reg c52:V, reg r147:V, reg c53:L, reg r148:*, reg r149:V, reg offset7:*, reg offset8:V, reg r150:V, reg z40:*, reg z41:V, reg c54:L, reg z43:V, reg dr42:V, reg dc21:L, reg dx42:V, reg dx43:V, reg r152:V, reg c55:L, reg colnames3:cls, reg x9:*, reg x10:V, reg p22:p(V +), reg r154:V, reg c56:L, reg r156:V, reg dr44:V, reg dc22:L, reg dx44:V, reg dx45:V, reg z44:*, reg z45:V, reg c57:L, reg r158:V, reg z47:V, reg dr46:V, reg dc23:L, reg dx46:V, reg r160:V, reg dx47:V, reg r161:V, reg __2:cls, reg r162:V, reg l35:*, reg c58:L, reg dx50:V, reg l38:*, reg dx51:V, reg l39:*, reg dr48:V, reg dc24:L, reg dx54:V, reg dx55:V, reg l41:*, reg dx56:V, reg dx57:V, reg r163:V, reg colnames__:cls, reg r164:V, reg c59:L, reg dx59:V, reg l43:*, reg dr50:V, reg dc25:L, reg dx61:V, reg dx62:V, reg dx63:V, reg r165:V, reg z48:*, reg z49:V, reg c60:L, reg z51:V, reg dr52:V, reg dc26:L, reg dx65:V, reg dx66:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r166:V, reg z54:V, reg r167:V, reg c61:cls, reg r168:V, reg __3:cls, reg r169:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r170:V, reg r171:V, reg z55:*, reg z56:V, reg c62:L, reg z58:V, reg dr54:V, reg dc27:L, reg dx67:V, reg dx68:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r172:V, reg z61:V, reg r173:V, reg c63:cls, reg r174:V, reg __4:cls, reg r175:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r176:V, reg r177:V, reg r178:*, reg r179:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r180:V, reg r181:V, reg x11:*, reg x12:V, reg attr:cls, reg r182:V, reg structure:cls, reg qr:*, reg qr1:V, reg p23:p(V +), reg r184:V, reg n10:*, reg n11:V, reg z62:*, reg z63:V, reg c64:L, reg n13:V, reg z65:V, reg dr56:V, reg dc28:L, reg dx69:V, reg n15:V, reg dx70:V, reg r185:V, reg r186:V, reg list3:cls, reg r187:V, reg c65:cls, reg r188:V |
    mkenv;
    st x = x;
    st y = y;
    offset_isMissing = missing.0(offset);
    if offset_isMissing then L0(NULL) else L0(offset);
  L0(offset_orDefault):
    st offset = offset_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L1("qr") else L1(method);
  L1(method_orDefault):
    st method = method_orDefault;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L2(1.0E-7) else L2(tol);
  L2(tol_orDefault):
    st tol = tol_orDefault;
    singular_ok_isMissing = missing.0(singular_ok);
    if singular_ok_isMissing then L3(TRUE) else L3(singular_ok);
  L3(singular_ok_orDefault):
    st `singular.ok` = singular_ok_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L62() else L63();
  L4(r1):
    c1 = `as.logical`(r1);
    if c1 then L66() else L5();
  L62():
    nrow = ldf nrow;
    check L64() else D0();
  L63():
    r = dyn base(<lang `<-`(n, nrow(x))>);
    goto L4(r);
  D0():
    deopt 2 [];
  L5():
    goto L6();
  L6():
    n = ld n;
    check L70() else D4();
  L64():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn nrow(p);
    check L65() else D1();
  L66():
    stop = ldf stop;
    check L67() else D2();
  D1():
    deopt 4 [r3];
  D2():
    deopt 8 [];
  D4():
    deopt 13 [n];
  L65():
    st n = r3;
    c = `==`(r3, NULL);
    goto L4(c);
  L67():
    r4 = dyn stop("'x' must be a matrix");
    check L68() else D3();
  L70():
    n1 = force? n;
    checkMissing(n1);
    r6 = `==`(n1, 0);
    c2 = `as.logical`(r6);
    if c2 then L71() else L7();
  D3():
    deopt 10 [r4];
  L7():
    goto L8();
  L8():
    ncol = ldf ncol;
    check L75() else D7();
  L68():
    goto L6();
  L71():
    stop1 = ldf stop;
    check L72() else D5();
  D5():
    deopt 18 [];
  D7():
    deopt 24 [];
  L72():
    r7 = dyn stop1("0 (non-NA) cases");
    check L73() else D6();
  L75():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r10 = dyn ncol(p1);
    check L76() else D8();
  D6():
    deopt 20 [r7];
  D8():
    deopt 26 [r10];
  L73():
    goto L8();
  L76():
    st p = r10;
    p2 = ld p;
    check L77() else D9();
  D9():
    deopt 28 [p2];
  L77():
    p3 = force? p2;
    checkMissing(p3);
    r11 = `==`(p3, 0);
    c3 = `as.logical`(r11);
    if c3 then L78() else L9();
  L9():
    NCOL = ldf NCOL;
    check L92() else D17();
  L78():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L79() else L80();
  D17():
    deopt 61 [];
  L10(r13):
    popenv;
    return r13;
  L79():
    numeric = ldf numeric;
    check L81() else D10();
  L80():
    r12 = dyn base1[coefficients, residuals, `fitted.values`, rank, `df.residual`](<lang numeric()>, <sym y>, <lang `*`(0.0, y)>, 0.0, <lang length(y)>);
    goto L10(r12);
  L92():
    p4 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    r23 = dyn NCOL(p4);
    check L93() else D18();
  D10():
    deopt 35 [];
  D18():
    deopt 63 [r23];
  L81():
    r14 = dyn numeric();
    check L82() else D11();
  L93():
    st ny = r23;
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L94() else L95();
  D11():
    deopt 36 [r14];
  L13(r25):
    c4 = `as.logical`(r25);
    if c4 then L98() else L14(c4);
  L82():
    y1 = ld y;
    check L83() else D12();
  L94():
    y9 = ld y;
    check L96() else D19();
  L95():
    r24 = dyn base3(<sym y>);
    goto L13(r24);
  D12():
    deopt 38 [y1];
  D19():
    deopt 67 [y9];
  L14(c6):
    c10 = `as.logical`(c6);
    if c10 then L101() else L15();
  L83():
    y2 = force? y1;
    checkMissing(y2);
    y3 = ld y;
    check L84() else D13();
  L96():
    y10 = force? y9;
    checkMissing(y10);
    is_matrix = ldf `is.matrix` in base;
    r26 = dyn is_matrix(y10);
    check L97() else D20();
  L98():
    ny = ld ny;
    check L99() else D21();
  D13():
    deopt 42 [0.0, y3];
  D20():
    deopt 70 [r26];
  D21():
    deopt 71 [c4, ny];
  L15():
    goto L17();
  L17():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L107() else L108();
  L84():
    y4 = force? y3;
    checkMissing(y4);
    r15 = `*`(0.0, y4);
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L85() else L86();
  L97():
    goto L13(r26);
  L99():
    ny1 = force? ny;
    checkMissing(ny1);
    r27 = `==`(ny1, 1.0);
    c7 = `as.logical`(r27);
    c8 = `&&`(c4, c7);
    goto L14(c8);
  L101():
    sym4 = ldf drop;
    base4 = ldf drop in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L102() else L103();
  L11(r17):
    list = ldf list in base;
    r19 = dyn list(r14, y2, r15, 0.0, r17);
    check L89() else D16();
  L16(r29):
    st y = r29;
    goto L17();
  L18(r33):
    r34 = `!`(r33);
    c12 = `as.logical`(r34);
    if c12 then L110() else L19();
  L85():
    y5 = ld y;
    check L87() else D14();
  L86():
    r16 = dyn base2(<sym y>);
    goto L11(r16);
  L102():
    y11 = ld y;
    check L104() else D22();
  L103():
    r28 = dyn base4(<sym y>);
    goto L16(r28);
  L107():
    offset1 = ld offset;
    check L109() else D24();
  L108():
    r32 = dyn base5(<sym offset>);
    goto L18(r32);
  D14():
    deopt 50 [y5];
  D16():
    deopt 56 [r19];
  D22():
    deopt 78 [y11];
  D24():
    deopt 86 [offset1];
  L19():
    goto L20();
  L20():
    NROW = ldf NROW;
    check L114() else D27();
  L87():
    y6 = force? y5;
    checkMissing(y6);
    length = ldf length in base;
    r18 = dyn length(y6);
    check L88() else D15();
  L89():
    goto L10(r19);
  L104():
    y12 = force? y11;
    checkMissing(y12);
    drop = ldf drop in base;
    r30 = dyn drop(y12);
    check L105() else D23();
  L109():
    offset2 = force? offset1;
    checkMissing(offset2);
    c11 = `==`(offset2, NULL);
    goto L18(c11);
  L110():
    y13 = ld y;
    check L111() else D25();
  D15():
    deopt 53 [r18];
  D23():
    deopt 81 [r30];
  D25():
    deopt 90 [y13];
  D27():
    deopt 98 [];
  L88():
    goto L11(r18);
  L105():
    goto L16(r30);
  L111():
    y14 = force? y13;
    checkMissing(y14);
    offset3 = ld offset;
    check L112() else D26();
  L114():
    p5 = prom<V +>{
      y15 = ld y;
      y16 = force? y15;
      checkMissing(y16);
      return y16;
    };
    r38 = dyn NROW(p5);
    check L115() else D28();
  D26():
    deopt 91 [y14, offset3];
  D28():
    deopt 100 [r38];
  L112():
    offset4 = force? offset3;
    checkMissing(offset4);
    r35 = `-`(y14, offset4);
    st y = r35;
    goto L20();
  L115():
    n2 = ld n;
    check L116() else D29();
  D29():
    deopt 100 [r38, n2];
  L116():
    n3 = force? n2;
    checkMissing(n3);
    r39 = `!=`(r38, n3);
    c13 = `as.logical`(r39);
    if c13 then L117() else L21();
  L21():
    goto L22();
  L22():
    method1 = ld method;
    check L121() else D32();
  L117():
    stop2 = ldf stop;
    check L118() else D30();
  D30():
    deopt 104 [];
  D32():
    deopt 109 [method1];
  L118():
    r40 = dyn stop2("incompatible dimensions");
    check L119() else D31();
  L121():
    method2 = force? method1;
    checkMissing(method2);
    r42 = `!=`(method2, "qr");
    c14 = `as.logical`(r42);
    if c14 then L122() else L23();
  D31():
    deopt 106 [r40];
  L23():
    goto L24();
  L24():
    chkDots = ldf chkDots;
    check L126() else D35();
  L119():
    goto L22();
  L122():
    warning = ldf warning;
    check L123() else D33();
  D33():
    deopt 114 [];
  D35():
    deopt 122 [];
  L123():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        method3 = ld method;
        method4 = force? method3;
        checkMissing(method4);
        return method4;
      };
      r44 = dyn gettextf("method = '%s' is not supported. Using 'qr'", p6);
      return r44;
    };
    r46 = dyn warning[, domain](p7, NA_LGL);
    check L124() else D34();
  L126():
    ddd1 = ld `...`;
    r48 = dyn chkDots[`...`](ddd1);
    check L127() else D36();
  D34():
    deopt 118 [r46];
  D36():
    deopt 124 [r48];
  L124():
    goto L24();
  L127():
    sym6 = ldf `.Call`;
    base6 = ldf `.Call` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L128() else L129();
  L25(r50):
    st z = r50;
    singular_ok1 = ld `singular.ok`;
    check L134() else D41();
  L128():
    C_Cdqrls = ld C_Cdqrls;
    check L130() else D37();
  L129():
    r49 = dyn base6(<sym C_Cdqrls>, <sym x>, <sym y>, <sym tol>, FALSE);
    goto L25(r49);
  D37():
    deopt 126 [C_Cdqrls];
  D41():
    deopt 134 [singular_ok1];
  L130():
    C_Cdqrls1 = force? C_Cdqrls;
    checkMissing(C_Cdqrls1);
    x5 = ld x;
    check L131() else D38();
  L134():
    singular_ok2 = force? singular_ok1;
    checkMissing(singular_ok2);
    r52 = `!`(singular_ok2);
    c15 = `as.logical`(r52);
    if c15 then L135() else L26(c15);
  D38():
    deopt 127 [C_Cdqrls1, x5];
  L26(c17):
    c26 = `as.logical`(c17);
    if c26 then L143() else L27();
  L131():
    x6 = force? x5;
    checkMissing(x6);
    y17 = ld y;
    check L132() else D39();
  L135():
    z = ld z;
    check L136() else D42();
  D39():
    deopt 128 [C_Cdqrls1, x6, y17];
  D42():
    deopt 137 [c15, z];
  L27():
    goto L28();
  L28():
    z4 = ld z;
    check L147() else D46();
  L132():
    y18 = force? y17;
    checkMissing(y18);
    tol1 = ld tol;
    check L133() else D40();
  L136():
    z1 = force? z;
    checkMissing(z1);
    c18 = `is.object`(z1);
    if c18 then L138() else L139(c15, z1);
  L143():
    stop3 = ldf stop;
    check L144() else D44();
  D40():
    deopt 129 [C_Cdqrls1, x6, y18, tol1];
  D44():
    deopt 144 [];
  D46():
    deopt 149 [z4];
  L133():
    tol2 = force? tol1;
    checkMissing(tol2);
    vargs = dots[x6, y18, tol2, FALSE];
    r51 = `.Call`(C_Cdqrls1, vargs, <missing>);
    goto L25(r51);
  L137(c22, dx1):
    p8 = ld p;
    check L141() else D43();
  L138():
    dr = tryDispatchBuiltin.1("$", z1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L140() else L139(c15, dr);
  L139(c20, z3):
    r53 = `$`(z3, <sym rank>);
    goto L137(c20, r53);
  L144():
    r55 = dyn stop3("singular fit encountered");
    check L145() else D45();
  L147():
    z5 = force? z4;
    checkMissing(z5);
    c27 = `is.object`(z5);
    if c27 then L149() else L150(z5);
  D43():
    deopt 139 [c22, dx1, p8];
  D45():
    deopt 146 [r55];
  L140():
    dx = getTryDispatchBuiltinValue(dr);
    goto L137(c15, dx);
  L141():
    p9 = force? p8;
    checkMissing(p9);
    r54 = `<`(dx1, p9);
    c23 = `as.logical`(r54);
    c24 = `&&`(c22, c23);
    goto L26(c24);
  L145():
    goto L28();
  L148(dx3):
    st coef = dx3;
    z8 = ld z;
    check L152() else D47();
  L149():
    dr2 = tryDispatchBuiltin.1("$", z5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L151() else L150(dr2);
  L150(z7):
    r57 = `$`(z7, <sym coefficients>);
    goto L148(r57);
  D47():
    deopt 153 [z8];
  L151():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L148(dx2);
  L152():
    z9 = force? z8;
    checkMissing(z9);
    c28 = `is.object`(z9);
    if c28 then L154() else L155(z9);
  L153(dx5):
    st pivot = dx5;
    sym7 = ldf seq_len;
    base7 = ldf seq_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L157() else L158();
  L154():
    dr4 = tryDispatchBuiltin.1("$", z9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L156() else L155(dr4);
  L155(z11):
    r58 = `$`(z11, <sym pivot>);
    goto L153(r58);
  L29(r60):
    st r1 = r60;
    ____ = ldf `%||%`;
    check L164() else D49();
  L156():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L153(dx4);
  L157():
    z12 = ld z;
    check L159() else D48();
  L158():
    r59 = dyn base7(<lang `$`(z, rank)>);
    goto L29(r59);
  D48():
    deopt 158 [z12];
  D49():
    deopt 164 [];
  L159():
    z13 = force? z12;
    checkMissing(z13);
    c29 = `is.object`(z13);
    if c29 then L161() else L162(z13);
  L164():
    p11 = prom<V +>{
      colnames = ldf colnames;
      p10 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r64 = dyn colnames(p10);
      return r64;
    };
    p15 = prom<V +>{
      paste0 = ldf paste0;
      p14 = prom<V +>{
        p12 = ld p;
        p13 = force? p12;
        checkMissing(p13);
        r66 = `:`(1, p13);
        return r66;
      };
      r68 = dyn paste0("x", p14);
      return r68;
    };
    r70 = dyn ____(p11, p15);
    check L165() else D50();
  D50():
    deopt 167 [r70];
  L160(dx7):
    r62 = seq_len(dx7);
    goto L29(r62);
  L161():
    dr6 = tryDispatchBuiltin.1("$", z13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L163() else L162(dr6);
  L162(z15):
    r61 = `$`(z15, <sym rank>);
    goto L160(r61);
  L165():
    st dn = r70;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L166() else L167();
  L30(r72):
    st nmeffects = r72;
    z20 = ld z;
    check L187() else D58();
  L163():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L160(dx6);
  L166():
    dn = ld dn;
    check L168() else D51();
  L167():
    r71 = dyn base8(<lang `[`(dn, `[`(pivot, r1))>, <lang rep.int("", `-`(n, `$`(z, rank)))>);
    goto L30(r71);
  D51():
    deopt 171 [dn];
  D58():
    deopt 192 [z20];
  L168():
    dn1 = force? dn;
    checkMissing(dn1);
    c30 = `is.object`(dn1);
    if c30 then L169() else L170(dn1);
  L187():
    z21 = force? z20;
    checkMissing(z21);
    c34 = `is.object`(z21);
    if c34 then L189() else L190(z21);
  L31(dx9):
    sym9 = ldf `rep.int`;
    base9 = ldf `rep.int` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L177() else L178();
  L169():
    dr8 = tryDispatchBuiltin.1("[", dn1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L171() else L170(dr8);
  L170(dn3):
    pivot = ld pivot;
    check L172() else D52();
  L188(dx15):
    p16 = ld p;
    check L192() else D59();
  L189():
    dr14 = tryDispatchBuiltin.1("$", z21);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L191() else L190(dr14);
  L190(z23):
    r83 = `$`(z23, <sym rank>);
    goto L188(r83);
  D52():
    deopt 173 [dn3, pivot];
  D59():
    deopt 194 [dx15, p16];
  L33(r78):
    c33 = ldf c in base;
    r82 = dyn c33(dx9, r78);
    check L186() else D57();
  L171():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L31(dx8);
  L172():
    pivot1 = force? pivot;
    checkMissing(pivot1);
    c31 = `is.object`(pivot1);
    if c31 then L173() else L174(dn3, pivot1);
  L177():
    n4 = ld n;
    check L179() else D54();
  L178():
    r77 = dyn base9("", <lang `-`(n, `$`(z, rank))>);
    goto L33(r77);
  L191():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L188(dx14);
  L192():
    p17 = force? p16;
    checkMissing(p17);
    r84 = `<`(dx15, p17);
    c35 = `as.logical`(r84);
    if c35 then L193() else L34();
  D54():
    deopt 182 [n4];
  D57():
    deopt 190 [r82];
  L32(dn7, dx11):
    __1 = ldf `[` in base;
    r76 = dyn __1(dn7, dx11);
    goto L31(r76);
  L34():
    integer = ldf integer;
    check L201() else D62();
  L35(r88):
    st r2 = r88;
    sym10 = ldf `is.matrix`;
    base10 = ldf `is.matrix` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L203() else L204();
  L173():
    dr10 = tryDispatchBuiltin.1("[", pivot1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L175() else L174(dn3, dr10);
  L174(dn5, pivot3):
    r73 = ld r1;
    check L176() else D53();
  L179():
    n5 = force? n4;
    checkMissing(n5);
    z16 = ld z;
    check L180() else D55();
  L186():
    goto L30(r82);
  L193():
    z24 = ld z;
    check L194() else D60();
  D53():
    deopt 175 [dn5, pivot3, r73];
  D55():
    deopt 183 [n5, z16];
  D60():
    deopt 197 [z24];
  D62():
    deopt 205 [];
  L36(r91):
    c37 = `as.logical`(r91);
    if c37 then L207() else L37();
  L175():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L32(dn3, dx10);
  L176():
    r74 = force? r73;
    __ = ldf `[` in base;
    r75 = dyn __(pivot3, r74);
    goto L32(dn5, r75);
  L180():
    z17 = force? z16;
    checkMissing(z17);
    c32 = `is.object`(z17);
    if c32 then L182() else L183(n5, z17);
  L194():
    z25 = force? z24;
    checkMissing(z25);
    c36 = `is.object`(z25);
    if c36 then L196() else L197(z25);
  L201():
    r89 = dyn integer();
    check L202() else D63();
  L203():
    y19 = ld y;
    check L205() else D64();
  L204():
    r90 = dyn base10(<sym y>);
    goto L36(r90);
  D63():
    deopt 206 [r89];
  D64():
    deopt 210 [y19];
  L37():
    l16 = ld coef;
    c44 = `is.object`(l16);
    if c44 then L249() else L250(NA_LGL, l16);
  L44():
    coef14 = ld coef;
    check L279() else D92();
  L181(n9, dx13):
    r80 = `-`(n9, dx13);
    rep_int = ldf `rep.int` in base;
    r81 = dyn rep_int("", r80);
    check L185() else D56();
  L182():
    dr12 = tryDispatchBuiltin.1("$", z17);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L184() else L183(n5, dr12);
  L183(n7, z19):
    r79 = `$`(z19, <sym rank>);
    goto L181(n7, r79);
  L195(dx17):
    r86 = `+`(dx17, 1);
    p18 = ld p;
    check L199() else D61();
  L196():
    dr16 = tryDispatchBuiltin.1("$", z25);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L198() else L197(dr16);
  L197(z27):
    r85 = `$`(z27, <sym rank>);
    goto L195(r85);
  L202():
    goto L35(r89);
  L205():
    y20 = force? y19;
    checkMissing(y20);
    is_matrix1 = ldf `is.matrix` in base;
    r92 = dyn is_matrix1(y20);
    check L206() else D65();
  L207():
    l = ld coef;
    c38 = `is.object`(l);
    if c38 then L208() else L209(NA_LGL, l);
  D56():
    deopt 188 [r81];
  D61():
    deopt 201 [r86, p18];
  D65():
    deopt 213 [r92];
  D92():
    deopt 308 [coef14];
  L38(dx19):
    st coef = dx19;
    z28 = ld z;
    check L212() else D67();
  L45(dx29):
    st coef = dx29;
    z32 = ld z;
    check L253() else D83();
  L184():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L181(n5, dx12);
  L185():
    goto L33(r81);
  L198():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L195(dx16);
  L199():
    p19 = force? p18;
    checkMissing(p19);
    r87 = `:`(r86, p19);
    goto L35(r87);
  L206():
    goto L36(r92);
  L208():
    dr18 = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L210() else L209(NA_LGL, dr18);
  L209(r94, l2):
    r97 = ld r2;
    check L211() else D66();
  L249():
    dr28 = tryDispatchBuiltin.0("[<-", l16, NA_LGL);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L251() else L250(NA_LGL, dr28);
  L250(r130, l18):
    r133 = ld r2;
    check L252() else D82();
  L279():
    coef15 = force? coef14;
    checkMissing(coef15);
    l32 = ld z;
    c50 = `is.object`(l32);
    if c50 then L281() else L282(coef15, l32);
  D66():
    deopt 217 [r94, l2, NA_LGL, r97];
  D67():
    deopt 223 [z28];
  D82():
    deopt 274 [r130, l18, NA_LGL, r133];
  D83():
    deopt 278 [z32];
  L210():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L38(dx18);
  L211():
    r98 = force? r97;
    ___ = ldf `[<-` in base;
    r99 = dyn ___(l, r98, <missing>, NA_LGL);
    goto L38(r99);
  L212():
    z29 = force? z28;
    checkMissing(z29);
    c39 = `is.object`(z29);
    if c39 then L214() else L215(z29);
  L251():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L45(dx28);
  L252():
    r134 = force? r133;
    ___2 = ldf `[<-` in base;
    r135 = dyn ___2(l18, NA_LGL, r134);
    goto L45(r135);
  L253():
    z33 = force? z32;
    checkMissing(z33);
    c45 = `is.object`(z33);
    if c45 then L255() else L256(z33);
  L280(dx39):
    st z = dx39;
    y25 = ld y;
    check L284() else D93();
  L281():
    dr38 = tryDispatchBuiltin.0("$<-", l32, coef15);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L283() else L282(coef15, dr38);
  L282(coef17, l34):
    r142 = `$<-`(l34, <sym coefficients>, coef15);
    goto L280(r142);
  D93():
    deopt 313 [y25];
  L213(dx21):
    c40 = `as.logical`(dx21);
    if c40 then L217() else L39();
  L214():
    dr20 = tryDispatchBuiltin.1("$", z29);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L216() else L215(dr20);
  L215(z31):
    r100 = `$`(z31, <sym pivoted>);
    goto L213(r100);
  L254(dx31):
    c46 = `as.logical`(dx31);
    if c46 then L258() else L46();
  L255():
    dr30 = tryDispatchBuiltin.1("$", z33);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L257() else L256(dr30);
  L256(z35):
    r136 = `$`(z35, <sym pivoted>);
    goto L254(r136);
  L283():
    dx38 = getTryDispatchBuiltinValue(dr38);
    goto L280(dx38);
  L284():
    y26 = force? y25;
    checkMissing(y26);
    z36 = ld z;
    check L285() else D94();
  D94():
    deopt 314 [y26, z36];
  L39():
    goto L41();
  L41():
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L224() else L225();
  L46():
    goto L48();
  L48():
    dn10 = ld dn;
    check L265() else D86();
  L216():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L213(dx20);
  L217():
    coef = ld coef;
    check L218() else D68();
  L257():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L254(dx30);
  L258():
    coef7 = ld coef;
    check L259() else D84();
  L285():
    z37 = force? z36;
    checkMissing(z37);
    c51 = `is.object`(z37);
    if c51 then L287() else L288(y26, z37);
  D68():
    deopt 226 [coef];
  D84():
    deopt 281 [coef7];
  D86():
    deopt 290 [dn10];
  L42(r103):
    l6 = ld coef;
    dimnames__ = ldf `dimnames<-`;
    check L230() else D74();
  L218():
    coef1 = force? coef;
    checkMissing(coef1);
    l3 = ld coef;
    c41 = `is.object`(l3);
    if c41 then L219() else L220(coef1, l3);
  L224():
    dn8 = ld dn;
    check L226() else D70();
  L225():
    r102 = dyn base11(<sym dn>, <lang colnames(y)>);
    goto L42(r102);
  L259():
    coef8 = force? coef7;
    checkMissing(coef8);
    l19 = ld coef;
    c47 = `is.object`(l19);
    if c47 then L260() else L261(coef8, l19);
  L265():
    dn11 = force? dn10;
    checkMissing(dn11);
    l22 = ld coef;
    names__ = ldf `names<-`;
    check L266() else D87();
  L286(y30, dx41):
    r144 = `-`(y30, dx41);
    st r1 = r144;
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L290() else L291();
  L287():
    dr40 = tryDispatchBuiltin.1("$", z37);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L289() else L288(y26, dr40);
  L288(y28, z39):
    r143 = `$`(z39, <sym residuals>);
    goto L286(y28, r143);
  D70():
    deopt 239 [dn8];
  D74():
    deopt 248 [r103, l6, r103];
  D87():
    deopt 293 [dn11, l22, dn11];
  L40(coef5, dx23):
    st coef = dx23;
    goto L41();
  L47(coef12, dx33):
    st coef = dx33;
    goto L48();
  L49(r146):
    r147 = `!`(r146);
    c53 = `as.logical`(r147);
    if c53 then L293() else L50();
  L219():
    dr22 = tryDispatchBuiltin.0("[<-", l3, coef1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L221() else L220(coef1, dr22);
  L220(coef3, l5):
    pivot4 = ld pivot;
    check L222() else D69();
  L226():
    dn9 = force? dn8;
    checkMissing(dn9);
    colnames1 = ldf colnames;
    check L227() else D71();
  L230():
    r107 = dyn dimnames__(l6, NULL, r103);
    check L231() else D75();
  L260():
    dr32 = tryDispatchBuiltin.0("[<-", l19, coef8);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L262() else L261(coef8, dr32);
  L261(coef10, l21):
    pivot6 = ld pivot;
    check L263() else D85();
  L266():
    r138 = dyn names__(l22, NULL, dn11);
    check L267() else D88();
  L289():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L286(y26, dx40);
  L290():
    offset5 = ld offset;
    check L292() else D95();
  L291():
    r145 = dyn base13(<sym offset>);
    goto L49(r145);
  D69():
    deopt 229 [coef3, l5, coef1, pivot4];
  D71():
    deopt 242 [];
  D75():
    deopt 250 [r103, r107];
  D85():
    deopt 284 [coef10, l21, coef8, pivot6];
  D88():
    deopt 295 [dn11, r138];
  D95():
    deopt 320 [offset5];
  L50():
    goto L51();
  L51():
    z40 = ld z;
    check L297() else D98();
  L221():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L40(coef1, dx22);
  L222():
    pivot5 = force? pivot4;
    ___1 = ldf `[<-` in base;
    r101 = dyn ___1(l3, pivot5, <missing>, coef1);
    goto L40(coef3, r101);
  L227():
    p20 = prom<V +>{
      y21 = ld y;
      y22 = force? y21;
      checkMissing(y22);
      return y22;
    };
    r105 = dyn colnames1(p20);
    check L228() else D72();
  L231():
    st coef = r107;
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L232() else L233();
  L262():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L47(coef8, dx32);
  L263():
    pivot7 = force? pivot6;
    ___3 = ldf `[<-` in base;
    r137 = dyn ___3(l21, coef8, pivot7);
    goto L47(coef10, r137);
  L267():
    st coef = r138;
    nmeffects2 = ld nmeffects;
    check L268() else D89();
  L292():
    offset6 = force? offset5;
    checkMissing(offset6);
    c52 = `==`(offset6, NULL);
    goto L49(c52);
  L293():
    r148 = ld r1;
    check L294() else D96();
  D72():
    deopt 244 [r105];
  D89():
    deopt 297 [nmeffects2];
  D96():
    deopt 324 [r148];
  D98():
    deopt 331 [z40];
  L43(r109):
    l7 = ld z;
    c42 = `is.object`(l7);
    if c42 then L239() else L240(r109, l7, r109, l7);
  L228():
    list1 = ldf list in base;
    r106 = dyn list1(dn9, r105);
    check L229() else D73();
  L232():
    nmeffects = ld nmeffects;
    check L234() else D76();
  L233():
    r108 = dyn base12(<sym nmeffects>, <lang colnames(y)>);
    goto L43(r108);
  L268():
    nmeffects3 = force? nmeffects2;
    checkMissing(nmeffects3);
    l23 = ld z;
    c48 = `is.object`(l23);
    if c48 then L270() else L271(nmeffects3, l23, nmeffects3, l23);
  L294():
    r149 = force? r148;
    checkMissing(r149);
    offset7 = ld offset;
    check L295() else D97();
  L297():
    z41 = force? z40;
    checkMissing(z41);
    c54 = `is.object`(z41);
    if c54 then L299() else L300(z41);
  D73():
    deopt 246 [r106];
  D76():
    deopt 254 [nmeffects];
  D97():
    deopt 325 [r149, offset7];
  L229():
    goto L42(r106);
  L234():
    nmeffects1 = force? nmeffects;
    checkMissing(nmeffects1);
    colnames2 = ldf colnames;
    check L235() else D77();
  L238(r119, l13, r120, dx25):
    dimnames__1 = ldf `dimnames<-`;
    check L242() else D80();
  L239():
    dr24 = tryDispatchBuiltin.1("$", l7);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L241() else L240(r109, l7, r109, dr24);
  L240(r115, l10, r116, l11):
    r121 = `$`(l11, <sym effects>);
    goto L238(r115, l10, r116, r121);
  L269(nmeffects10, l29, nmeffects11, dx35):
    names__1 = ldf `names<-`;
    check L273() else D90();
  L270():
    dr34 = tryDispatchBuiltin.1("$", l23);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L272() else L271(nmeffects3, l23, nmeffects3, dr34);
  L271(nmeffects6, l26, nmeffects7, l27):
    r139 = `$`(l27, <sym effects>);
    goto L269(nmeffects6, l26, nmeffects7, r139);
  L295():
    offset8 = force? offset7;
    checkMissing(offset8);
    r150 = `+`(r149, offset8);
    st r1 = r150;
    goto L51();
  L298(dx43):
    c55 = `as.logical`(dx43);
    if c55 then L302() else L52();
  L299():
    dr42 = tryDispatchBuiltin.1("$", z41);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L301() else L300(dr42);
  L300(z43):
    r152 = `$`(z43, <sym pivoted>);
    goto L298(r152);
  D77():
    deopt 257 [];
  D80():
    deopt 266 [r119, l13, dx25, r120];
  D90():
    deopt 303 [nmeffects10, l29, dx35, nmeffects11];
  L52():
    goto L54();
  L54():
    z48 = ld z;
    check L324() else D104();
  L235():
    p21 = prom<V +>{
      y23 = ld y;
      y24 = force? y23;
      checkMissing(y24);
      return y24;
    };
    r111 = dyn colnames2(p21);
    check L236() else D78();
  L241():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L238(r109, l7, r109, dx24);
  L242():
    r122 = dyn dimnames__1(dx25, NULL, r120);
    check L243() else D81();
  L272():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L269(nmeffects3, l23, nmeffects3, dx34);
  L273():
    r140 = dyn names__1(dx35, NULL, nmeffects11);
    check L274() else D91();
  L301():
    dx42 = getTryDispatchBuiltinValue(dr42);
    goto L298(dx42);
  L302():
    colnames3 = ldf colnames;
    check L303() else D99();
  D78():
    deopt 259 [r111];
  D81():
    deopt 268 [r119, l13, r122];
  D91():
    deopt 305 [nmeffects10, l29, r140];
  D99():
    deopt 335 [];
  D104():
    deopt 353 [z48];
  L236():
    list2 = ldf list in base;
    r112 = dyn list2(nmeffects1, r111);
    check L237() else D79();
  L243():
    c43 = `is.object`(l13);
    if c43 then L245() else L246(r119, l13);
  L274():
    c49 = `is.object`(l29);
    if c49 then L276() else L277(nmeffects10, l29);
  L303():
    p22 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r154 = dyn colnames3(p22);
    check L304() else D100();
  L324():
    z49 = force? z48;
    checkMissing(z49);
    c60 = `is.object`(z49);
    if c60 then L325() else L326(z49);
  D79():
    deopt 261 [r112];
  D100():
    deopt 337 [r154];
  L55(dx66):
    st qr = dx66;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L331() else L332();
  L237():
    goto L43(r112);
  L244(r126, dx27):
    st z = dx27;
    goto L44();
  L245():
    dr26 = tryDispatchBuiltin.0("$<-", l13, r122);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L247() else L246(r119, dr26);
  L246(r124, l15):
    r127 = `$<-`(l15, <sym effects>, r122);
    goto L244(r124, r127);
  L275(nmeffects15, dx37):
    st z = dx37;
    goto L44();
  L276():
    dr36 = tryDispatchBuiltin.0("$<-", l29, r140);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L278() else L277(nmeffects10, dr36);
  L277(nmeffects13, l31):
    r141 = `$<-`(l31, <sym effects>, r140);
    goto L275(nmeffects13, r141);
  L304():
    c56 = `is.object`(r154);
    if c56 then L305() else L306(r154);
  L325():
    dr52 = tryDispatchBuiltin.1("[", z49);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L327() else L326(dr52);
  L326(z51):
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L328() else L329();
  L53(dx45):
    l35 = ld z;
    c58 = `is.object`(l35);
    if c58 then L314() else L315(dx45, l35, dx45, l35);
  L56(z54, r167):
    __3 = ldf `[` in base;
    r169 = dyn __3(z54, r167);
    goto L55(r169);
  L57(r171):
    popenv;
    return r171;
  L247():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L244(r119, dx26);
  L278():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L275(nmeffects10, dx36);
  L305():
    dr44 = tryDispatchBuiltin.1("[", r154);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L307() else L306(dr44);
  L306(r156):
    z44 = ld z;
    check L308() else D101();
  L327():
    dx65 = getTryDispatchBuiltinValue(dr52);
    goto L55(dx65);
  L328():
    c61 = ldf c in base;
    r168 = dyn c61("qr", "qraux", "pivot", "tol", "rank");
    check L330() else D105();
  L329():
    r166 = dyn base14("qr", "qraux", "pivot", "tol", "rank");
    goto L56(z51, r166);
  L331():
    z55 = ld z;
    check L333() else D106();
  L332():
    r170 = dyn base15(<lang `[`(z, c("coefficients", "residuals", "effects", "rank"))>, <lang list(fitted.values=r1, assign=attr(x, "assign"), qr=structure(qr, class="qr"), df.residual=`-`(n, `$`(z, rank)))>);
    goto L57(r170);
  D101():
    deopt 338 [r156, z44];
  D105():
    deopt 363 [z51, r168];
  D106():
    deopt 368 [z55];
  L307():
    dx44 = getTryDispatchBuiltinValue(dr44);
    goto L53(dx44);
  L308():
    z45 = force? z44;
    checkMissing(z45);
    c57 = `is.object`(z45);
    if c57 then L310() else L311(r156, z45);
  L313(dx55, l41, dx56, dx57):
    colnames__ = ldf `colnames<-`;
    check L317() else D102();
  L314():
    dr48 = tryDispatchBuiltin.1("$", l35);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L316() else L315(dx45, l35, dx45, dr48);
  L315(dx50, l38, dx51, l39):
    r163 = `$`(l39, <sym qr>);
    goto L313(dx50, l38, dx51, r163);
  L330():
    goto L56(z51, r168);
  L333():
    z56 = force? z55;
    checkMissing(z56);
    c62 = `is.object`(z56);
    if c62 then L334() else L335(z56);
  D102():
    deopt 346 [dx55, l41, dx57, dx56];
  L58(dx68):
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L340() else L341();
  L309(r160, dx47):
    __2 = ldf `[` in base;
    r162 = dyn __2(r160, dx47);
    goto L53(r162);
  L310():
    dr46 = tryDispatchBuiltin.1("$", z45);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L312() else L311(r156, dr46);
  L311(r158, z47):
    r161 = `$`(z47, <sym pivot>);
    goto L309(r158, r161);
  L316():
    dx54 = getTryDispatchBuiltinValue(dr48);
    goto L313(dx45, l35, dx45, dx54);
  L317():
    r164 = dyn colnames__(dx57, NULL, dx56);
    check L318() else D103();
  L334():
    dr54 = tryDispatchBuiltin.1("[", z56);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L336() else L335(dr54);
  L335(z58):
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L337() else L338();
  D103():
    deopt 348 [dx55, l41, r164];
  L59(z61, r173):
    __4 = ldf `[` in base;
    r175 = dyn __4(z61, r173);
    goto L58(r175);
  L60(r177):
    c65 = ldf c in base;
    r188 = dyn c65(dx68, r177);
    check L356() else D116();
  L312():
    dx46 = getTryDispatchBuiltinValue(dr46);
    goto L309(r156, dx46);
  L318():
    c59 = `is.object`(l41);
    if c59 then L320() else L321(dx55, l41);
  L336():
    dx67 = getTryDispatchBuiltinValue(dr54);
    goto L58(dx67);
  L337():
    c63 = ldf c in base;
    r174 = dyn c63("coefficients", "residuals", "effects", "rank");
    check L339() else D107();
  L338():
    r172 = dyn base16("coefficients", "residuals", "effects", "rank");
    goto L59(z58, r172);
  L340():
    r178 = ld r1;
    check L342() else D108();
  L341():
    r176 = dyn base17[`fitted.values`, assign, qr, `df.residual`](<sym r1>, <lang attr(x, "assign")>, <lang structure(qr, class="qr")>, <lang `-`(n, `$`(z, rank))>);
    goto L60(r176);
  D107():
    deopt 377 [z58, r174];
  D108():
    deopt 381 [r178];
  D116():
    deopt 408 [r188];
  L319(dx62, dx63):
    st z = dx63;
    goto L54();
  L320():
    dr50 = tryDispatchBuiltin.0("$<-", l41, r164);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L322() else L321(dx55, dr50);
  L321(dx59, l43):
    r165 = `$<-`(l43, <sym qr>, r164);
    goto L319(dx59, r165);
  L339():
    goto L59(z58, r174);
  L342():
    r179 = force? r178;
    checkMissing(r179);
    sym18 = ldf attr;
    base18 = ldf attr in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L343() else L344();
  L356():
    goto L57(r188);
  L61(r181):
    structure = ldf structure;
    check L347() else D111();
  L322():
    dx61 = getTryDispatchBuiltinValue(dr50);
    goto L319(dx55, dx61);
  L343():
    x11 = ld x;
    check L345() else D109();
  L344():
    r180 = dyn base18(<sym x>, "assign");
    goto L61(r180);
  D109():
    deopt 386 [x11];
  D111():
    deopt 393 [];
  L345():
    x12 = force? x11;
    checkMissing(x12);
    attr = ldf attr in base;
    r182 = dyn attr(x12, "assign");
    check L346() else D110();
  L347():
    p23 = prom<V +>{
      qr = ld qr;
      qr1 = force? qr;
      checkMissing(qr1);
      return qr1;
    };
    r184 = dyn structure[, class](p23, "qr");
    check L348() else D112();
  D110():
    deopt 390 [r182];
  D112():
    deopt 397 [r184];
  L346():
    goto L61(r182);
  L348():
    n10 = ld n;
    check L349() else D113();
  D113():
    deopt 399 [n10];
  L349():
    n11 = force? n10;
    checkMissing(n11);
    z62 = ld z;
    check L350() else D114();
  D114():
    deopt 400 [n11, z62];
  L350():
    z63 = force? z62;
    checkMissing(z63);
    c64 = `is.object`(z63);
    if c64 then L352() else L353(n11, z63);
  L351(n15, dx70):
    r186 = `-`(n15, dx70);
    list3 = ldf list in base;
    r187 = dyn list3(r179, r181, r184, r186);
    check L355() else D115();
  L352():
    dr56 = tryDispatchBuiltin.1("$", z63);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L354() else L353(n11, dr56);
  L353(n13, z65):
    r185 = `$`(z65, <sym rank>);
    goto L351(n13, r185);
  D115():
    deopt 406 [r187];
  L354():
    dx69 = getTryDispatchBuiltinValue(dr56);
    goto L351(n11, dx69);
  L355():
    goto L60(r187);
  }
}