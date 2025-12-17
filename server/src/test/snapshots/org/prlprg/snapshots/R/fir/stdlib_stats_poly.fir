fun main() {
  () -+> V { reg r:cls, reg options:cls, reg r1:V, reg poly:cls, reg p:p(V +), reg r3:V, reg predict:cls, reg z:*, reg z1:V, reg p1:p(V +), reg seq:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg zapsmall:cls, reg poly1:cls, reg seq1:cls, reg r8:V, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg z2:*, reg z3:V, reg attr:cls, reg r12:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg zapsmall1:cls, reg polym:cls, reg p6:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg c:cls, reg r20:V, reg p7:p(V +), reg r22:V, reg p8:p(V +), reg r24:V, reg zapsmall2:cls, reg poly2:cls, reg cbind:cls, reg p9:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg c1:cls, reg r28:V, reg p10:p(V +), reg r30:V, reg p11:p(V +), reg r32:V, reg p12:p(V +), reg r34:V, reg stopifnot:cls, reg all_equal:cls, reg zm:*, reg zm1:V, reg p13:p(V +), reg z4:*, reg z5:V, reg p14:p(V +), reg r37:V, reg p15:p(V +), reg r39:V, reg cbind1:cls, reg p16:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg c2:cls, reg r43:V, reg p17:p(V +), reg r45:V, reg zapsmall3:cls, reg poly3:cls, reg m2:*, reg m3:V, reg p18:p(V +), reg r47:V, reg p19:p(V +), reg r49:V, reg stopifnot1:cls, reg all_equal1:cls, reg pm2:*, reg pm3:V, reg p20:p(V +), reg zm2:*, reg zm3:V, reg p21:p(V +), reg r52:V, reg p22:p(V +), reg r54:V, reg options1:cls, reg od:*, reg od1:V, reg p23:p(V +), reg r56:V |
    mkenv;
    r = clos inner898438744;
    st poly = r;
    options = ldf options;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn options[digits](3.0);
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    st od = r1;
    poly = ldf poly;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r3 = dyn poly(p, 3.0);
    check L3() else D3();
  D3():
    deopt 13 [r3];
  L3():
    st z = r3;
    predict = ldf predict;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    p1 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    p2 = prom<V +>{
      seq = ldf seq;
      r5 = dyn seq(2.0, 4.0, 0.5);
      return r5;
    };
    r7 = dyn predict(p1, p2);
    check L5() else D5();
  D5():
    deopt 19 [r7];
  L5():
    zapsmall = ldf zapsmall;
    check L6() else D6();
  D6():
    deopt 21 [];
  L6():
    p5 = prom<V +>{
      poly1 = ldf poly;
      p3 = prom<V +>{
        seq1 = ldf seq;
        r8 = dyn seq1(4.0, 6.0, 0.5);
        return r8;
      };
      p4 = prom<V +>{
        sym = ldf attr;
        base = ldf attr in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r11):
        return r11;
      L1():
        z2 = ld z;
        z3 = force? z2;
        checkMissing(z3);
        attr = ldf attr in base;
        r12 = dyn attr(z3, "coefs");
        goto L0(r12);
      L2():
        r10 = dyn base(<sym z>, "coefs");
        goto L0(r10);
      };
      r14 = dyn poly1[, , coefs](p3, 3.0, p4);
      return r14;
    };
    r16 = dyn zapsmall(p5);
    check L7() else D7();
  D7():
    deopt 23 [r16];
  L7():
    zapsmall1 = ldf zapsmall;
    check L8() else D8();
  D8():
    deopt 25 [];
  L8():
    p8 = prom<V +>{
      polym = ldf polym;
      p6 = prom<V +>{
        return <int 1, 2, 3, 4>;
      };
      p7 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r19):
        return r19;
      L1():
        c = ldf c in base;
        r20 = dyn c(1.0, <int 4, 5, 6>);
        goto L0(r20);
      L2():
        r18 = dyn base1(1.0, <lang `:`(4.0, 6.0)>);
        goto L0(r18);
      };
      r22 = dyn polym[, , degree](p6, p7, 3.0);
      return r22;
    };
    r24 = dyn zapsmall1(p8);
    check L9() else D9();
  D9():
    deopt 27 [r24];
  L9():
    st zm = r24;
    zapsmall2 = ldf zapsmall;
    check L10() else D10();
  D10():
    deopt 30 [];
  L10():
    p12 = prom<V +>{
      poly2 = ldf poly;
      p11 = prom<V +>{
        cbind = ldf cbind;
        p9 = prom<V +>{
          return <int 1, 2, 3, 4>;
        };
        p10 = prom<V +>{
          sym2 = ldf c;
          base2 = ldf c in base;
          guard2 = `==`.4(sym2, base2);
          if guard2 then L1() else L2();
        L0(r27):
          return r27;
        L1():
          c1 = ldf c in base;
          r28 = dyn c1(1.0, <int 4, 5, 6>);
          goto L0(r28);
        L2():
          r26 = dyn base2(1.0, <lang `:`(4.0, 6.0)>);
          goto L0(r26);
        };
        r30 = dyn cbind(p9, p10);
        return r30;
      };
      r32 = dyn poly2[, degree](p11, 3.0);
      return r32;
    };
    r34 = dyn zapsmall2(p12);
    check L11() else D11();
  D11():
    deopt 32 [r34];
  L11():
    st z1 = r34;
    stopifnot = ldf stopifnot;
    check L12() else D12();
  D12():
    deopt 35 [];
  L12():
    p15 = prom<V +>{
      all_equal = ldf `all.equal`;
      p13 = prom<V +>{
        zm = ld zm;
        zm1 = force? zm;
        checkMissing(zm1);
        return zm1;
      };
      p14 = prom<V +>{
        z4 = ld z1;
        z5 = force? z4;
        checkMissing(z5);
        return z5;
      };
      r37 = dyn all_equal[, , tolerance](p13, p14, 1.0E-15);
      return r37;
    };
    r39 = dyn stopifnot(p15);
    check L13() else D13();
  D13():
    deopt 37 [r39];
  L13():
    cbind1 = ldf cbind;
    check L14() else D14();
  D14():
    deopt 39 [];
  L14():
    p16 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p17 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      c2 = ldf c in base;
      r43 = dyn c2(1.0, <int 4, 5, 6>);
      goto L0(r43);
    L2():
      r41 = dyn base3(1.0, <lang `:`(4.0, 6.0)>);
      goto L0(r41);
    };
    r45 = dyn cbind1(p16, p17);
    check L15() else D15();
  D15():
    deopt 42 [r45];
  L15():
    st m2 = r45;
    zapsmall3 = ldf zapsmall;
    check L16() else D16();
  D16():
    deopt 45 [];
  L16():
    p19 = prom<V +>{
      poly3 = ldf poly;
      p18 = prom<V +>{
        m2 = ld m2;
        m3 = force? m2;
        checkMissing(m3);
        return m3;
      };
      r47 = dyn poly3(p18, 3.0);
      return r47;
    };
    r49 = dyn zapsmall3(p19);
    check L17() else D17();
  D17():
    deopt 47 [r49];
  L17():
    st pm2 = r49;
    stopifnot1 = ldf stopifnot;
    check L18() else D18();
  D18():
    deopt 50 [];
  L18():
    p22 = prom<V +>{
      all_equal1 = ldf `all.equal`;
      p20 = prom<V +>{
        pm2 = ld pm2;
        pm3 = force? pm2;
        checkMissing(pm3);
        return pm3;
      };
      p21 = prom<V +>{
        zm2 = ld zm;
        zm3 = force? zm2;
        checkMissing(zm3);
        return zm3;
      };
      r52 = dyn all_equal1[, , tolerance](p20, p21, 1.0E-15);
      return r52;
    };
    r54 = dyn stopifnot1(p22);
    check L19() else D19();
  D19():
    deopt 52 [r54];
  L19():
    options1 = ldf options;
    check L20() else D20();
  D20():
    deopt 54 [];
  L20():
    p23 = prom<V +>{
      od = ld od;
      od1 = force? od;
      checkMissing(od1);
      return od1;
    };
    r56 = dyn options1(p23);
    check L21() else D21();
  D21():
    deopt 56 [r56];
  L21():
    popenv;
    return r56;
  }
}
fun inner898438744(x, `...`, degree, coefs, raw, simple) {
  (reg x:*, reg ddd:dots, reg degree:*, reg coefs:*, reg raw:*, reg simple:*) -+> V { var x:*, var `...`:dots?, var degree:*, reg degree_isMissing:L, reg degree_orDefault:*, var coefs:*, reg coefs_isMissing:L, reg coefs_orDefault:*, var raw:*, reg raw_isMissing:L, reg raw_orDefault:*, var simple:*, reg simple_isMissing:L, reg simple_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg dots:*, reg dots1:V, reg length:cls, reg r5:V, reg c:L, reg nd:*, reg nd1:V, reg r6:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c6:L, reg r8:V, reg dots2:*, reg dots3:V, reg c7:L, reg c9:L, reg dots5:V, reg dr:V, reg dc:L, reg dx:V, reg c11:L, reg dx1:V, reg __:cls, reg r9:V, reg length1:cls, reg r10:V, reg r11:V, reg c12:L, reg c13:V, reg dots_deg:*, reg dots_deg1:V, reg c15:L, reg dots6:*, reg dots7:V, reg c16:L, reg dots9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r12:V, reg polym:cls, reg x1:*, reg x2:V, reg p:p(V +), reg ddd2:dots?, reg degree1:*, reg degree2:V, reg p1:p(V +), reg coefs1:*, reg coefs2:V, reg p2:p(V +), reg raw1:*, reg raw2:V, reg p3:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg x3:*, reg x4:V, reg is_matrix:cls, reg r20:V, reg c17:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg as_data_frame:cls, reg nd2:*, reg nd3:V, reg c18:L, reg c20:V, reg dots_deg2:*, reg dots_deg3:V, reg c21:L, reg c22:V, reg c24:L, reg x5:*, reg x6:V, reg cbind:cls, reg x7:*, reg x8:V, reg p4:p(V +), reg ddd3:dots?, reg r24:V, reg p5:p(V +), reg r26:V, reg unclass:cls, reg r27:V, reg do_call:cls, reg polym1:*, reg polym2:V, reg p6:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg m:*, reg m1:V, reg degree3:*, reg degree4:V, reg raw3:*, reg raw4:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg coefs3:*, reg coefs4:V, reg list1:cls, reg r33:V, reg c25:cls, reg r34:V, reg p7:p(V +), reg r36:V, reg degree5:*, reg degree6:V, reg r39:V, reg c26:L, reg stop:cls, reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg x9:*, reg x10:V, reg c27:L, reg c28:L, reg c30:V, reg mode:cls, reg x11:*, reg x12:V, reg p8:p(V +), reg r45:V, reg r46:V, reg c31:L, reg c32:V, reg c34:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg x13:*, reg x14:V, reg as_numeric:cls, reg r49:V, reg raw5:*, reg raw6:V, reg c35:L, reg outer:cls, reg x15:*, reg x16:V, reg p9:p(V +), reg degree7:*, reg degree8:V, reg r52:V, reg p10:p(V +), reg __2:*, reg __3:V, reg p11:p(V +), reg r55:V, reg degree9:*, reg degree10:V, reg r56:V, reg l:*, reg colnames__:cls, reg r57:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg r60:V, reg coefs5:*, reg coefs6:V, reg c36:V, reg c37:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg r62:V, reg x17:*, reg x18:V, reg anyNA:cls, reg r63:V, reg c38:L, reg stop1:cls, reg r64:V, reg degree11:*, reg degree12:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg degree15:V, reg r67:V, reg unique:cls, reg x19:*, reg x20:V, reg p12:p(V +), reg r69:V, reg length2:cls, reg r70:V, reg r71:V, reg c39:L, reg stop2:cls, reg r72:V, reg mean:cls, reg x21:*, reg x22:V, reg p13:p(V +), reg r75:V, reg x23:*, reg x24:V, reg xbar:*, reg xbar1:V, reg r76:V, reg outer1:cls, reg x25:*, reg x26:V, reg p14:p(V +), reg degree16:*, reg degree17:V, reg r78:V, reg p15:p(V +), reg __4:*, reg __5:V, reg p16:p(V +), reg r81:V, reg qr:cls, reg X:*, reg X1:V, reg p17:p(V +), reg r83:V, reg QR:*, reg QR1:V, reg c40:L, reg QR3:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r84:V, reg degree18:*, reg degree19:V, reg r85:V, reg c41:L, reg stop3:cls, reg r86:V, reg QR4:*, reg QR5:V, reg c42:L, reg QR7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r88:V, reg z:*, reg z1:V, reg row:cls, reg z2:*, reg z3:V, reg p18:p(V +), reg r90:V, reg col:cls, reg z4:*, reg z5:V, reg p19:p(V +), reg r92:V, reg r93:V, reg r94:V, reg qr_qy:cls, reg QR8:*, reg QR9:V, reg p20:p(V +), reg z6:*, reg z7:V, reg p21:p(V +), reg r97:V, reg colSums:cls, reg Z:*, reg Z1:V, reg r98:V, reg p22:p(V +), reg r100:V, reg colSums1:cls, reg x27:*, reg x28:V, reg Z2:*, reg Z3:V, reg r101:V, reg r102:V, reg p23:p(V +), reg r104:V, reg norm2:*, reg norm3:V, reg r105:V, reg xbar2:*, reg xbar3:V, reg r106:V, reg c43:L, reg r108:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg degree20:*, reg degree21:V, reg r109:V, reg __6:cls, reg r110:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r111:V, reg r112:V, reg norm4:*, reg norm5:V, reg c44:cls, reg r113:V, reg coefs7:*, reg coefs8:V, reg c45:L, reg coefs10:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r115:V, reg coefs11:*, reg coefs12:V, reg c46:L, reg coefs14:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r116:V, reg matrix:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r117:V, reg r118:V, reg x29:*, reg x30:V, reg length3:cls, reg r119:V, reg p24:p(V +), reg degree22:*, reg degree23:V, reg r121:V, reg p25:p(V +), reg r123:V, reg x31:*, reg x32:V, reg alpha:*, reg alpha1:V, reg c47:L, reg x34:V, reg alpha3:V, reg dr14:V, reg dc7:L, reg dx16:V, reg x36:V, reg dx17:V, reg __7:cls, reg r124:V, reg r125:V, reg l1:*, reg c48:L, reg r127:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg ___:cls, reg r130:V, reg degree24:*, reg degree25:V, reg r131:V, reg c49:L, reg degree26:*, reg degree27:V, reg r132:V, reg s:V, reg l4:I, reg i:I, reg i1:I, reg i2:I, reg c50:L, reg x37:V, reg x38:*, reg x39:V, reg alpha4:*, reg alpha5:V, reg c51:L, reg i6:I, reg x41:V, reg alpha7:V, reg dr18:V, reg dc9:L, reg dx20:V, reg i8:I, reg x43:V, reg dx21:V, reg i9:*, reg i10:V, reg __8:cls, reg r133:V, reg r134:V, reg Z4:*, reg Z5:V, reg c52:L, reg i12:I, reg r136:V, reg Z7:V, reg dr20:V, reg dc10:L, reg dx22:V, reg i14:I, reg r138:V, reg dx23:V, reg i15:*, reg i16:V, reg __9:cls, reg r139:V, reg r140:V, reg norm6:*, reg norm7:V, reg c53:L, reg i18:I, reg r142:V, reg norm9:V, reg dr22:V, reg dc11:L, reg dx24:V, reg i20:I, reg r144:V, reg dx25:V, reg i21:*, reg i22:V, reg r145:V, reg __10:cls, reg r146:V, reg norm10:*, reg norm11:V, reg c54:L, reg i24:I, reg r148:V, reg dx27:V, reg norm13:V, reg dr24:V, reg dc12:L, reg dx29:V, reg i26:I, reg r150:V, reg dx30:V, reg dx31:V, reg i27:*, reg i28:V, reg __11:cls, reg r151:V, reg r152:V, reg Z8:*, reg Z9:V, reg c55:L, reg i30:I, reg r155:V, reg r156:V, reg Z11:V, reg dr26:V, reg dc13:L, reg dx32:V, reg i32:I, reg r159:V, reg r160:V, reg dx33:V, reg i33:*, reg i34:V, reg r161:V, reg __12:cls, reg r162:V, reg r163:V, reg r164:V, reg l5:*, reg c56:L, reg i36:I, reg r166:V, reg l7:*, reg dr28:V, reg dc14:L, reg dx34:V, reg i38:I, reg dx35:V, reg i39:*, reg i40:V, reg r169:V, reg ___1:cls, reg r170:V, reg Z12:*, reg Z13:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r171:V, reg Z16:V, reg r172:V, reg rep:cls, reg r173:V, reg r174:V, reg degree28:*, reg degree29:V, reg r175:V, reg l8:*, reg colnames__1:cls, reg r176:V, reg Z17:*, reg Z18:V, reg c57:L, reg dr30:V, reg dc15:L, reg dx36:V, reg dx37:V, reg __13:cls, reg r177:V, reg simple1:*, reg simple2:V, reg r178:V, reg c58:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r179:V, reg r180:V, reg alpha8:*, reg alpha9:V, reg norm14:*, reg norm15:V, reg list2:cls, reg r181:V, reg l9:*, reg attr__:cls, reg r182:V, reg simple3:*, reg simple4:V, reg c59:L, reg Z21:*, reg Z22:V, reg structure:cls, reg Z23:*, reg Z24:V, reg p26:p(V +), reg degree30:*, reg degree31:V, reg r184:V, reg p27:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r186:V, reg r187:V, reg c60:cls, reg r188:V, reg p28:p(V +), reg r190:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    degree_isMissing = missing.0(degree);
    if degree_isMissing then L0(1.0) else L0(degree);
  L0(degree_orDefault):
    st degree = degree_orDefault;
    coefs_isMissing = missing.0(coefs);
    if coefs_isMissing then L1(NULL) else L1(coefs);
  L1(coefs_orDefault):
    st coefs = coefs_orDefault;
    raw_isMissing = missing.0(raw);
    if raw_isMissing then L2(FALSE) else L2(raw);
  L2(raw_orDefault):
    st raw = raw_orDefault;
    simple_isMissing = missing.0(simple);
    if simple_isMissing then L3(FALSE) else L3(simple);
  L3(simple_orDefault):
    st simple = simple_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L56() else L57();
  L4(r1):
    st dots = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L60() else L61();
  L56():
    list = ldf list;
    check L58() else D0();
  L57():
    r = dyn base(<sym ...>);
    goto L4(r);
  D0():
    deopt 2 [];
  L5(r4):
    st nd = r4;
    c = `as.logical`(r4);
    if c then L64() else L6();
  L58():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L59() else D1();
  L60():
    dots = ld dots;
    check L62() else D2();
  L61():
    r3 = dyn base1(<sym dots>);
    goto L5(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 8 [dots];
  L6():
    goto L13();
  L13():
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L86() else L87();
  L59():
    goto L4(r2);
  L62():
    dots1 = force? dots;
    checkMissing(dots1);
    length = ldf length in base;
    r5 = dyn length(dots1);
    check L63() else D3();
  L64():
    nd = ld nd;
    check L65() else D4();
  D3():
    deopt 11 [r5];
  D4():
    deopt 13 [nd];
  L14(r19):
    c17 = `as.logical`(r19);
    if c17 then L90() else L15();
  L63():
    goto L5(r5);
  L65():
    nd1 = force? nd;
    checkMissing(nd1);
    r6 = `==`(nd1, 1);
    c1 = `as.logical`(r6);
    if c1 then L66() else L7(c1);
  L86():
    x3 = ld x;
    check L88() else D11();
  L87():
    r18 = dyn base3(<sym x>);
    goto L14(r18);
  D11():
    deopt 54 [x3];
  L7(c3):
    st dots_deg = c3;
    dots_deg = ld dots_deg;
    check L75() else D7();
  L15():
    degree5 = ld degree;
    check L100() else D18();
  L66():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L67() else L68();
  L88():
    x4 = force? x3;
    checkMissing(x4);
    is_matrix = ldf `is.matrix` in base;
    r20 = dyn is_matrix(x4);
    check L89() else D12();
  L90():
    sym4 = ldf unclass;
    base4 = ldf unclass in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L91() else L92();
  D7():
    deopt 30 [dots_deg];
  D12():
    deopt 57 [r20];
  D18():
    deopt 75 [degree5];
  L8(c6, r8):
    r11 = `==`(r8, 1);
    c12 = `as.logical`(r11);
    c13 = `&&`(c6, c12);
    goto L7(c13);
  L16(r22):
    st m = r22;
    do_call = ldf `do.call`;
    check L96() else D16();
  L67():
    dots2 = ld dots;
    check L69() else D5();
  L68():
    r7 = dyn base2(<lang `[[`(dots, 1)>);
    goto L8(c1, r7);
  L75():
    dots_deg1 = force? dots_deg;
    checkMissing(dots_deg1);
    c15 = `as.logical`(dots_deg1);
    if c15 then L76() else L10();
  L89():
    goto L14(r20);
  L91():
    as_data_frame = ldf `as.data.frame`;
    check L93() else D13();
  L92():
    r21 = dyn base4(<lang as.data.frame(if(`&&`(nd, dots_deg), x, cbind(x, ...)))>);
    goto L16(r21);
  L100():
    degree6 = force? degree5;
    checkMissing(degree6);
    r39 = `<`(degree6, 1.0);
    c26 = `as.logical`(r39);
    if c26 then L101() else L18();
  D5():
    deopt 19 [c1, dots2];
  D13():
    deopt 61 [];
  D16():
    deopt 68 [];
  L10():
    polym = ldf polym;
    check L82() else D9();
  L18():
    goto L19();
  L19():
    sym7 = ldf `is.object`;
    base7 = ldf `is.object` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L105() else L106();
  L69():
    dots3 = force? dots2;
    checkMissing(dots3);
    c7 = `is.object`(dots3);
    if c7 then L70() else L71(c1, dots3);
  L76():
    dots6 = ld dots;
    check L77() else D8();
  L93():
    p5 = prom<V +>{
      nd2 = ld nd;
      nd3 = force? nd2;
      checkMissing(nd3);
      c18 = `as.logical`(nd3);
      if c18 then L2() else L0(c18);
    L0(c20):
      c24 = `as.logical`(c20);
      if c24 then L4() else L1();
    L2():
      dots_deg2 = ld dots_deg;
      dots_deg3 = force? dots_deg2;
      checkMissing(dots_deg3);
      c21 = `as.logical`(dots_deg3);
      c22 = `&&`(c18, c21);
      goto L0(c22);
    L1():
      cbind = ldf cbind;
      p4 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      ddd3 = ld `...`;
      r24 = dyn cbind[, `...`](p4, ddd3);
      return r24;
    L4():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r26 = dyn as_data_frame(p5);
    check L94() else D14();
  L96():
    p6 = prom<V +>{
      polym1 = ld polym;
      polym2 = force? polym1;
      checkMissing(polym2);
      return polym2;
    };
    p7 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r30):
      return r30;
    L2():
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      degree3 = ld degree;
      degree4 = force? degree3;
      checkMissing(degree4);
      raw3 = ld raw;
      raw4 = force? raw3;
      checkMissing(raw4);
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r29 = dyn base5[, degree, raw, ](<sym m>, <sym degree>, <sym raw>, <lang list(coefs=coefs)>);
      goto L0(r29);
    L1(r32):
      c25 = ldf c in base;
      r34 = dyn c25(m1, degree4, raw4, r32);
      goto L0(r34);
    L4():
      coefs3 = ld coefs;
      coefs4 = force? coefs3;
      checkMissing(coefs4);
      list1 = ldf list in base;
      r33 = dyn list1(coefs4);
      goto L1(r33);
    L5():
      r31 = dyn base6[coefs](<sym coefs>);
      goto L1(r31);
    };
    r36 = dyn do_call(p6, p7);
    check L97() else D17();
  L101():
    stop = ldf stop;
    check L102() else D19();
  D8():
    deopt 32 [dots6];
  D9():
    deopt 39 [];
  D14():
    deopt 63 [r26];
  D17():
    deopt 71 [r36];
  D19():
    deopt 80 [];
  L9(c11, dx1):
    length1 = ldf length in base;
    r10 = dyn length1(dx1);
    check L73() else D6();
  L20(r43):
    c28 = `as.logical`(r43);
    if c28 then L108() else L21(c28);
  L70():
    dr = tryDispatchBuiltin.1("[[", dots3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L72() else L71(c1, dr);
  L71(c9, dots5):
    __ = ldf `[[` in base;
    r9 = dyn __(dots5, 1);
    goto L9(c9, r9);
  L77():
    dots7 = force? dots6;
    checkMissing(dots7);
    c16 = `is.object`(dots7);
    if c16 then L78() else L79(dots7);
  L82():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd2 = ld `...`;
    p1 = prom<V +>{
      degree1 = ld degree;
      degree2 = force? degree1;
      checkMissing(degree2);
      return degree2;
    };
    p2 = prom<V +>{
      coefs1 = ld coefs;
      coefs2 = force? coefs1;
      checkMissing(coefs2);
      return coefs2;
    };
    p3 = prom<V +>{
      raw1 = ld raw;
      raw2 = force? raw1;
      checkMissing(raw2);
      return raw2;
    };
    r17 = dyn polym[, `...`, degree, coefs, raw](p, ddd2, p1, p2, p3);
    check L83() else D10();
  L94():
    unclass = ldf unclass in base;
    r27 = dyn unclass(r26);
    check L95() else D15();
  L97():
    popenv;
    return r36;
  L102():
    r40 = dyn stop("'degree' must be at least 1");
    check L103() else D20();
  L105():
    x9 = ld x;
    check L107() else D21();
  L106():
    r42 = dyn base7(<sym x>);
    goto L20(r42);
  D6():
    deopt 25 [c11, r10];
  D10():
    deopt 48 [r17];
  D15():
    deopt 65 [r27];
  D20():
    deopt 82 [r40];
  D21():
    deopt 86 [x9];
  L11(dx3):
    st degree = dx3;
    goto L13();
  L21(c30):
    c34 = `as.logical`(c30);
    if c34 then L112() else L22();
  L72():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(c1, dx);
  L73():
    goto L8(c11, r10);
  L78():
    dr2 = tryDispatchBuiltin.1("[[", dots7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L80() else L79(dr2);
  L79(dots9):
    __1 = ldf `[[` in base;
    r12 = dyn __1(dots9, 1);
    goto L11(r12);
  L83():
    popenv;
    return r17;
  L95():
    goto L16(r27);
  L103():
    goto L19();
  L107():
    x10 = force? x9;
    checkMissing(x10);
    c27 = `is.object`(x10);
    goto L20(c27);
  L108():
    mode = ldf mode;
    check L109() else D22();
  D22():
    deopt 90 [c28];
  L22():
    goto L24();
  L24():
    raw5 = ld raw;
    check L118() else D26();
  L80():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L109():
    p8 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r45 = dyn mode(p8);
    check L110() else D23();
  L112():
    sym8 = ldf `as.numeric`;
    base8 = ldf `as.numeric` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L113() else L114();
  D23():
    deopt 92 [c28, r45];
  D26():
    deopt 105 [raw5];
  L23(r48):
    st x = r48;
    goto L24();
  L110():
    r46 = `==`(r45, "numeric");
    c31 = `as.logical`(r46);
    c32 = `&&`(c28, c31);
    goto L21(c32);
  L113():
    x13 = ld x;
    check L115() else D24();
  L114():
    r47 = dyn base8(<sym x>);
    goto L23(r47);
  L118():
    raw6 = force? raw5;
    checkMissing(raw6);
    c35 = `as.logical`(raw6);
    if c35 then L119() else L25();
  D24():
    deopt 98 [x13];
  L25():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L126() else L127();
  L26():
    simple3 = ld simple;
    check L268() else D103();
  L115():
    x14 = force? x13;
    checkMissing(x14);
    as_numeric = ldf `as.numeric` in base;
    r49 = dyn as_numeric(x14);
    check L116() else D25();
  L119():
    outer = ldf outer;
    check L120() else D27();
  D25():
    deopt 101 [r49];
  D27():
    deopt 108 [];
  D103():
    deopt 367 [simple3];
  L27(r60):
    c37 = `as.logical`(r60);
    if c37 then L129() else L28();
  L116():
    goto L23(r49);
  L120():
    p9 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    p10 = prom<V +>{
      degree7 = ld degree;
      degree8 = force? degree7;
      checkMissing(degree8);
      r52 = `:`(1, degree8);
      return r52;
    };
    p11 = prom<V +>{
      __2 = ld `^`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    r55 = dyn outer(p9, p10, p11);
    check L121() else D28();
  L126():
    coefs5 = ld coefs;
    check L128() else D32();
  L127():
    r59 = dyn base9(<sym coefs>);
    goto L27(r59);
  L268():
    simple4 = force? simple3;
    checkMissing(simple4);
    c59 = `as.logical`(simple4);
    if c59 then L269() else L55();
  D28():
    deopt 112 [r55];
  D32():
    deopt 124 [coefs5];
  L28():
    coefs7 = ld coefs;
    check L193() else D72();
  L39():
    Z12 = ld Z;
    check L248() else D92();
  L55():
    structure = ldf structure;
    check L272() else D105();
  L121():
    st Z = r55;
    degree9 = ld degree;
    check L122() else D29();
  L128():
    coefs6 = force? coefs5;
    checkMissing(coefs6);
    c36 = `==`(coefs6, NULL);
    goto L27(c36);
  L129():
    sym10 = ldf anyNA;
    base10 = ldf anyNA in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L130() else L131();
  L269():
    Z21 = ld Z;
    check L270() else D104();
  D29():
    deopt 115 [1, degree9];
  D72():
    deopt 236 [coefs7];
  D92():
    deopt 321 [Z12];
  D104():
    deopt 369 [Z21];
  D105():
    deopt 372 [];
  L29(r62):
    c38 = `as.logical`(r62);
    if c38 then L134() else L30();
  L122():
    degree10 = force? degree9;
    checkMissing(degree10);
    r56 = `:`(1, degree10);
    l = ld Z;
    colnames__ = ldf `colnames<-`;
    check L123() else D30();
  L130():
    x17 = ld x;
    check L132() else D33();
  L131():
    r61 = dyn base10(<sym x>);
    goto L29(r61);
  L193():
    coefs8 = force? coefs7;
    checkMissing(coefs8);
    c45 = `is.object`(coefs8);
    if c45 then L195() else L196(coefs8);
  L248():
    Z13 = force? Z12;
    checkMissing(Z13);
    sym14 = ldf rep;
    base14 = ldf rep in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L249() else L250();
  L270():
    Z22 = force? Z21;
    checkMissing(Z22);
    popenv;
    return Z22;
  L272():
    p26 = prom<V +>{
      Z23 = ld Z;
      Z24 = force? Z23;
      checkMissing(Z24);
      return Z24;
    };
    p27 = prom<V +>{
      degree30 = ld degree;
      degree31 = force? degree30;
      checkMissing(degree31);
      r184 = `:`(1, degree31);
      return r184;
    };
    p28 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r187):
      return r187;
    L1():
      c60 = ldf c in base;
      r188 = dyn c60("poly", "matrix");
      goto L0(r188);
    L2():
      r186 = dyn base16("poly", "matrix");
      goto L0(r186);
    };
    r190 = dyn structure[, degree, class](p26, p27, p28);
    check L273() else D106();
  D30():
    deopt 119 [r56, l, r56];
  D33():
    deopt 129 [x17];
  D106():
    deopt 378 [r190];
  L30():
    goto L31();
  L31():
    degree11 = ld degree;
    check L138() else D37();
  L51(Z16, r172):
    r174 = `/`(Z16, r172);
    st Z = r174;
    degree28 = ld degree;
    check L251() else D93();
  L123():
    r57 = dyn colnames__(l, NULL, r56);
    check L124() else D31();
  L132():
    x18 = force? x17;
    checkMissing(x18);
    anyNA = ldf anyNA in base;
    r63 = dyn anyNA(x18);
    check L133() else D34();
  L134():
    stop1 = ldf stop;
    check L135() else D35();
  L194(dx13):
    st alpha = dx13;
    coefs11 = ld coefs;
    check L198() else D73();
  L195():
    dr10 = tryDispatchBuiltin.1("$", coefs8);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L197() else L196(dr10);
  L196(coefs10):
    r115 = `$`(coefs10, <sym alpha>);
    goto L194(r115);
  L249():
    rep = ldf rep in base;
    r173 = dyn rep(<lang sqrt(`[`(norm2, `-`(1)))>, <lang length(x)>);
    goto L51(Z13, r173);
  L250():
    r171 = dyn base14[, each](<lang sqrt(`[`(norm2, `-`(1)))>, <lang length(x)>);
    goto L51(Z13, r171);
  L273():
    popenv;
    return r190;
  D31():
    deopt 121 [r56, r57];
  D34():
    deopt 132 [r63];
  D35():
    deopt 134 [];
  D37():
    deopt 139 [degree11];
  D73():
    deopt 240 [coefs11];
  D93():
    deopt 328 [0, degree28];
  L124():
    st Z = r57;
    goto L26();
  L133():
    goto L29(r63);
  L135():
    r64 = dyn stop1("missing values are not allowed in 'poly'");
    check L136() else D36();
  L138():
    degree12 = force? degree11;
    checkMissing(degree12);
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L139() else L140();
  L197():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L194(dx12);
  L198():
    coefs12 = force? coefs11;
    checkMissing(coefs12);
    c46 = `is.object`(coefs12);
    if c46 then L200() else L201(coefs12);
  L251():
    degree29 = force? degree28;
    checkMissing(degree29);
    r175 = `:`(0, degree29);
    l8 = ld Z;
    colnames__1 = ldf `colnames<-`;
    check L252() else D94();
  D36():
    deopt 136 [r64];
  D94():
    deopt 332 [r175, l8, r175];
  L32(degree15, r67):
    r71 = `>=`(degree15, r67);
    c39 = `as.logical`(r71);
    if c39 then L144() else L33();
  L136():
    goto L31();
  L139():
    unique = ldf unique;
    check L141() else D38();
  L140():
    r66 = dyn base11(<lang unique(x)>);
    goto L32(degree12, r66);
  L199(dx15):
    st norm2 = dx15;
    matrix = ldf matrix;
    check L203() else D74();
  L200():
    dr12 = tryDispatchBuiltin.1("$", coefs12);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L202() else L201(dr12);
  L201(coefs14):
    r116 = `$`(coefs14, <sym norm2>);
    goto L199(r116);
  L252():
    r176 = dyn colnames__1(l8, NULL, r175);
    check L253() else D95();
  D38():
    deopt 143 [degree12];
  D74():
    deopt 245 [];
  D95():
    deopt 334 [r175, r176];
  L33():
    goto L34();
  L34():
    mean = ldf mean;
    check L148() else D43();
  L141():
    p12 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r69 = dyn unique(p12);
    check L142() else D39();
  L144():
    stop2 = ldf stop;
    check L145() else D41();
  L202():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L199(dx14);
  L203():
    p24 = prom<V +>{
      sym13 = ldf length;
      base13 = ldf length in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r118):
      return r118;
    L1():
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      length3 = ldf length in base;
      r119 = dyn length3(x30);
      goto L0(r119);
    L2():
      r117 = dyn base13(<sym x>);
      goto L0(r117);
    };
    p25 = prom<V +>{
      degree22 = ld degree;
      degree23 = force? degree22;
      checkMissing(degree23);
      r121 = `+`(degree23, 1);
      return r121;
    };
    r123 = dyn matrix(1.0, p24, p25);
    check L204() else D75();
  L253():
    st Z = r176;
    Z17 = ld Z;
    check L254() else D96();
  D39():
    deopt 145 [degree12, r69];
  D41():
    deopt 150 [];
  D43():
    deopt 156 [];
  D75():
    deopt 249 [r123];
  D96():
    deopt 336 [Z17];
  L142():
    length2 = ldf length in base;
    r70 = dyn length2(r69);
    check L143() else D40();
  L145():
    r72 = dyn stop2("'degree' must be less than number of unique points");
    check L146() else D42();
  L148():
    p13 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    r75 = dyn mean(p13);
    check L149() else D44();
  L204():
    st Z = r123;
    x31 = ld x;
    check L205() else D76();
  L254():
    Z18 = force? Z17;
    checkMissing(Z18);
    c57 = `is.object`(Z18);
    if c57 then L255() else L256();
  D40():
    deopt 147 [degree12, r70];
  D42():
    deopt 152 [r72];
  D44():
    deopt 158 [r75];
  D76():
    deopt 251 [x31];
  L52(dx37):
    st Z = dx37;
    simple1 = ld simple;
    check L258() else D97();
  L143():
    goto L32(degree12, r70);
  L146():
    goto L34();
  L149():
    st xbar = r75;
    x23 = ld x;
    check L150() else D45();
  L205():
    x32 = force? x31;
    checkMissing(x32);
    alpha = ld alpha;
    check L206() else D77();
  L255():
    dr30 = tryDispatchBuiltin.1("[", Z18);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L257() else L256();
  L256():
    __13 = ldf `[` in base;
    r177 = dyn __13(Z18, <missing>, -1.0, FALSE);
    goto L52(r177);
  D45():
    deopt 160 [x23];
  D77():
    deopt 252 [x32, alpha];
  D97():
    deopt 346 [simple1];
  L150():
    x24 = force? x23;
    checkMissing(x24);
    xbar = ld xbar;
    check L151() else D46();
  L206():
    alpha1 = force? alpha;
    checkMissing(alpha1);
    c47 = `is.object`(alpha1);
    if c47 then L207() else L208(x32, alpha1);
  L257():
    dx36 = getTryDispatchBuiltinValue(dr30);
    goto L52(dx36);
  L258():
    simple2 = force? simple1;
    checkMissing(simple2);
    r178 = `!`(simple2);
    c58 = `as.logical`(r178);
    if c58 then L259() else L53();
  D46():
    deopt 161 [x24, xbar];
  L40(x36, dx17):
    r125 = `-`(x36, dx17);
    l1 = ld Z;
    c48 = `is.object`(l1);
    if c48 then L210() else L211(r125);
  L53():
    goto L26();
  L151():
    xbar1 = force? xbar;
    checkMissing(xbar1);
    r76 = `-`(x24, xbar1);
    st x = r76;
    outer1 = ldf outer;
    check L152() else D47();
  L207():
    dr14 = tryDispatchBuiltin.1("[", alpha1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L209() else L208(x32, dr14);
  L208(x34, alpha3):
    __7 = ldf `[` in base;
    r124 = dyn __7(alpha3, 1);
    goto L40(x34, r124);
  L259():
    sym15 = ldf list;
    base15 = ldf list in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L260() else L261();
  D47():
    deopt 166 [];
  L41(dx19):
    st Z = dx19;
    degree24 = ld degree;
    check L213() else D78();
  L54(r180):
    l9 = ld Z;
    attr__ = ldf `attr<-`;
    check L265() else D101();
  L152():
    p14 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    };
    p15 = prom<V +>{
      degree16 = ld degree;
      degree17 = force? degree16;
      checkMissing(degree17);
      r78 = `:`(0, degree17);
      return r78;
    };
    p16 = prom<V +>{
      __4 = ld `^`;
      __5 = force? __4;
      checkMissing(__5);
      return __5;
    };
    r81 = dyn outer1(p14, p15, p16);
    check L153() else D48();
  L209():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L40(x32, dx16);
  L210():
    dr16 = tryDispatchBuiltin.0("[<-", l1, r125);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L212() else L211(r125);
  L211(r127):
    ___ = ldf `[<-` in base;
    r130 = dyn ___(l1, <missing>, 2.0, r125);
    goto L41(r130);
  L260():
    alpha8 = ld alpha;
    check L262() else D98();
  L261():
    r179 = dyn base15[alpha, norm2](<sym alpha>, <sym norm2>);
    goto L54(r179);
  D48():
    deopt 170 [r81];
  D78():
    deopt 264 [degree24];
  D98():
    deopt 351 [alpha8];
  D101():
    deopt 360 [r180, l9, r180];
  L153():
    st X = r81;
    qr = ldf qr;
    check L154() else D49();
  L212():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L41(dx18);
  L213():
    degree25 = force? degree24;
    checkMissing(degree25);
    r131 = `>`(degree25, 1.0);
    c49 = `as.logical`(r131);
    if c49 then L214() else L42();
  L262():
    alpha9 = force? alpha8;
    checkMissing(alpha9);
    norm14 = ld norm2;
    check L263() else D99();
  L265():
    r182 = dyn attr__(l9, NULL, "coefs", r180);
    check L266() else D102();
  D49():
    deopt 173 [];
  D99():
    deopt 354 [norm14];
  D102():
    deopt 363 [r180, r182];
  L42():
    goto L39();
  L154():
    p17 = prom<V +>{
      X = ld X;
      X1 = force? X;
      checkMissing(X1);
      return X1;
    };
    r83 = dyn qr(p17);
    check L155() else D50();
  L214():
    degree26 = ld degree;
    check L215() else D79();
  L263():
    norm15 = force? norm14;
    checkMissing(norm15);
    list2 = ldf list in base;
    r181 = dyn list2(alpha9, norm15);
    check L264() else D100();
  L266():
    st Z = r182;
    goto L26();
  D50():
    deopt 175 [r83];
  D79():
    deopt 269 [2.0, degree26];
  D100():
    deopt 358 [r181];
  L155():
    st QR = r83;
    QR = ld QR;
    check L156() else D51();
  L215():
    degree27 = force? degree26;
    checkMissing(degree27);
    r132 = `:`(2.0, degree27);
    s = toForSeq(r132);
    l4 = length(s);
    i = 0;
    goto L43(i);
  L264():
    goto L54(r181);
  D51():
    deopt 177 [QR];
  L43(i1):
    i2 = `+`.1(i1, 1);
    c50 = `<`.1(l4, i2);
    if c50 then L216() else L50();
  L156():
    QR1 = force? QR;
    checkMissing(QR1);
    c40 = `is.object`(QR1);
    if c40 then L158() else L159(QR1);
  L50():
    x37 = `[[`(s, i2, NULL, TRUE);
    st i = x37;
    x38 = ld x;
    check L217() else D80();
  L157(dx7):
    degree18 = ld degree;
    check L161() else D52();
  L158():
    dr4 = tryDispatchBuiltin.1("$", QR1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L160() else L159(dr4);
  L159(QR3):
    r84 = `$`(QR3, <sym rank>);
    goto L157(r84);
  L216():
    goto L39();
  D52():
    deopt 179 [dx7, degree18];
  D80():
    deopt 272 [i2, x38];
  L160():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L157(dx6);
  L161():
    degree19 = force? degree18;
    checkMissing(degree19);
    r85 = `<`(dx7, degree19);
    c41 = `as.logical`(r85);
    if c41 then L162() else L35();
  L217():
    x39 = force? x38;
    checkMissing(x39);
    alpha4 = ld alpha;
    check L218() else D81();
  D81():
    deopt 273 [i2, x39, alpha4];
  L35():
    goto L36();
  L36():
    QR4 = ld QR;
    check L166() else D55();
  L162():
    stop3 = ldf stop;
    check L163() else D53();
  L218():
    alpha5 = force? alpha4;
    checkMissing(alpha5);
    c51 = `is.object`(alpha5);
    if c51 then L219() else L220(i2, x39, alpha5);
  D53():
    deopt 183 [];
  D55():
    deopt 188 [QR4];
  L44(i8, x43, dx21):
    r134 = `-`(x43, dx21);
    Z4 = ld Z;
    check L223() else D83();
  L163():
    r86 = dyn stop3("'degree' must be less than number of unique points");
    check L164() else D54();
  L166():
    QR5 = force? QR4;
    checkMissing(QR5);
    c42 = `is.object`(QR5);
    if c42 then L168() else L169(QR5);
  L219():
    dr18 = tryDispatchBuiltin.1("[", alpha5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L221() else L220(i2, x39, dr18);
  L220(i6, x41, alpha7):
    i9 = ld i;
    check L222() else D82();
  D54():
    deopt 185 [r86];
  D82():
    deopt 275 [i6, x41, alpha7, i9];
  D83():
    deopt 278 [i8, r134, Z4];
  L164():
    goto L36();
  L167(dx9):
    st z = dx9;
    z = ld z;
    check L171() else D56();
  L168():
    dr6 = tryDispatchBuiltin.1("$", QR5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L170() else L169(dr6);
  L169(QR7):
    r88 = `$`(QR7, <sym qr>);
    goto L167(r88);
  L221():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L44(i2, x39, dx20);
  L222():
    i10 = force? i9;
    __8 = ldf `[` in base;
    r133 = dyn __8(alpha7, i10);
    goto L44(i6, x41, r133);
  L223():
    Z5 = force? Z4;
    checkMissing(Z5);
    c52 = `is.object`(Z5);
    if c52 then L224() else L225(i8, r134, Z5);
  D56():
    deopt 192 [z];
  L45(i14, r138, dx23):
    r140 = `*`(r138, dx23);
    norm6 = ld norm2;
    check L228() else D85();
  L170():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L167(dx8);
  L171():
    z1 = force? z;
    checkMissing(z1);
    row = ldf row;
    check L172() else D57();
  L224():
    dr20 = tryDispatchBuiltin.1("[", Z5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L226() else L225(i8, r134, dr20);
  L225(i12, r136, Z7):
    i15 = ld i;
    check L227() else D84();
  D57():
    deopt 194 [z1];
  D84():
    deopt 281 [i12, r136, Z7, i15];
  D85():
    deopt 285 [i14, r140, norm6];
  L172():
    p18 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    r90 = dyn row(p18);
    check L173() else D58();
  L226():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L45(i8, r134, dx22);
  L227():
    i16 = force? i15;
    __9 = ldf `[` in base;
    r139 = dyn __9(Z5, <missing>, i16);
    goto L45(i12, r136, r139);
  L228():
    norm7 = force? norm6;
    checkMissing(norm7);
    c53 = `is.object`(norm7);
    if c53 then L229() else L230(i14, r140, norm7);
  D58():
    deopt 196 [z1, r90];
  L46(i20, r144, dx25):
    norm10 = ld norm2;
    check L233() else D87();
  L173():
    col = ldf col;
    check L174() else D59();
  L229():
    dr22 = tryDispatchBuiltin.1("[", norm7);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L231() else L230(i14, r140, dr22);
  L230(i18, r142, norm9):
    i21 = ld i;
    check L232() else D86();
  D59():
    deopt 197 [z1, r90];
  D86():
    deopt 287 [i18, r142, norm9, i21];
  D87():
    deopt 291 [i20, r144, dx25, norm10];
  L174():
    p19 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      return z5;
    };
    r92 = dyn col(p19);
    check L175() else D60();
  L231():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L46(i14, r140, dx24);
  L232():
    i22 = force? i21;
    checkMissing(i22);
    r145 = `+`(i22, 1.0);
    __10 = ldf `[` in base;
    r146 = dyn __10(norm9, r145);
    goto L46(i18, r142, r146);
  L233():
    norm11 = force? norm10;
    checkMissing(norm11);
    c54 = `is.object`(norm11);
    if c54 then L234() else L235(i20, r144, dx25, norm11);
  D60():
    deopt 199 [z1, r90, r92];
  L47(i26, r150, dx30, dx31):
    r152 = `/`(dx30, dx31);
    Z8 = ld Z;
    check L238() else D89();
  L175():
    r93 = `==`(r90, r92);
    r94 = `*`(z1, r93);
    st z = r94;
    qr_qy = ldf `qr.qy`;
    check L176() else D61();
  L234():
    dr24 = tryDispatchBuiltin.1("[", norm11);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L236() else L235(i20, r144, dx25, dr24);
  L235(i24, r148, dx27, norm13):
    i27 = ld i;
    check L237() else D88();
  D61():
    deopt 204 [];
  D88():
    deopt 293 [i24, r148, dx27, norm13, i27];
  D89():
    deopt 296 [i26, r150, r152, Z8];
  L176():
    p20 = prom<V +>{
      QR8 = ld QR;
      QR9 = force? QR8;
      checkMissing(QR9);
      return QR9;
    };
    p21 = prom<V +>{
      z6 = ld z;
      z7 = force? z6;
      checkMissing(z7);
      return z7;
    };
    r97 = dyn qr_qy(p20, p21);
    check L177() else D62();
  L236():
    dx29 = getTryDispatchBuiltinValue(dr24);
    goto L47(i20, r144, dx25, dx29);
  L237():
    i28 = force? i27;
    __11 = ldf `[` in base;
    r151 = dyn __11(norm13, i28);
    goto L47(i24, r148, dx27, r151);
  L238():
    Z9 = force? Z8;
    checkMissing(Z9);
    c55 = `is.object`(Z9);
    if c55 then L239() else L240(i26, r150, r152, Z9);
  D62():
    deopt 207 [r97];
  L48(i32, r159, r160, dx33):
    r163 = `*`(r160, dx33);
    r164 = `-`(r159, r163);
    l5 = ld Z;
    c56 = `is.object`(l5);
    if c56 then L243() else L244(i32, r164, l5);
  L177():
    st Z = r97;
    colSums = ldf colSums;
    check L178() else D63();
  L239():
    dr26 = tryDispatchBuiltin.1("[", Z9);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L241() else L240(i26, r150, r152, dr26);
  L240(i30, r155, r156, Z11):
    i33 = ld i;
    check L242() else D90();
  D63():
    deopt 210 [];
  D90():
    deopt 299 [i30, r155, r156, Z11, i33];
  L49(i38, dx35):
    st Z = dx35;
    goto L43(i38);
  L178():
    p22 = prom<V +>{
      Z = ld Z;
      Z1 = force? Z;
      checkMissing(Z1);
      r98 = `^`(Z1, 2.0);
      return r98;
    };
    r100 = dyn colSums(p22);
    check L179() else D64();
  L241():
    dx32 = getTryDispatchBuiltinValue(dr26);
    goto L48(i26, r150, r152, dx32);
  L242():
    i34 = force? i33;
    checkMissing(i34);
    r161 = `-`(i34, 1.0);
    __12 = ldf `[` in base;
    r162 = dyn __12(Z9, <missing>, r161);
    goto L48(i30, r155, r156, r162);
  L243():
    dr28 = tryDispatchBuiltin.0("[<-", l5, r164);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L245() else L244(i32, r164, dr28);
  L244(i36, r166, l7):
    i39 = ld i;
    check L246() else D91();
  D64():
    deopt 212 [r100];
  D91():
    deopt 309 [i36, r166, l7, r164, i39];
  L179():
    st norm2 = r100;
    colSums1 = ldf colSums;
    check L180() else D65();
  L245():
    dx34 = getTryDispatchBuiltinValue(dr28);
    goto L49(i32, dx34);
  L246():
    i40 = force? i39;
    checkMissing(i40);
    r169 = `+`(i40, 1.0);
    ___1 = ldf `[<-` in base;
    r170 = dyn ___1(l5, <missing>, r169, r164);
    goto L49(i36, r170);
  D65():
    deopt 215 [];
  L180():
    p23 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      Z2 = ld Z;
      Z3 = force? Z2;
      checkMissing(Z3);
      r101 = `^`(Z3, 2.0);
      r102 = `*`(x28, r101);
      return r102;
    };
    r104 = dyn colSums1(p23);
    check L181() else D66();
  D66():
    deopt 217 [r104];
  L181():
    norm2 = ld norm2;
    check L182() else D67();
  D67():
    deopt 217 [r104, norm2];
  L182():
    norm3 = force? norm2;
    checkMissing(norm3);
    r105 = `/`(r104, norm3);
    xbar2 = ld xbar;
    check L183() else D68();
  D68():
    deopt 219 [r105, xbar2];
  L183():
    xbar3 = force? xbar2;
    checkMissing(xbar3);
    r106 = `+`(r105, xbar3);
    c43 = `is.object`(r106);
    if c43 then L184() else L185(r106);
  L37(dx11):
    st alpha = dx11;
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L188() else L189();
  L184():
    dr8 = tryDispatchBuiltin.1("[", r106);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L186() else L185(dr8);
  L185(r108):
    degree20 = ld degree;
    check L187() else D69();
  D69():
    deopt 223 [r108, 1, degree20];
  L38(r112):
    st norm2 = r112;
    goto L39();
  L186():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L37(dx10);
  L187():
    degree21 = force? degree20;
    checkMissing(degree21);
    r109 = `:`(1, degree21);
    __6 = ldf `[` in base;
    r110 = dyn __6(r108, r109);
    goto L37(r110);
  L188():
    norm4 = ld norm2;
    check L190() else D70();
  L189():
    r111 = dyn base12(1.0, <sym norm2>);
    goto L38(r111);
  D70():
    deopt 231 [norm4];
  L190():
    norm5 = force? norm4;
    checkMissing(norm5);
    c44 = ldf c in base;
    r113 = dyn c44(1.0, norm5);
    check L191() else D71();
  D71():
    deopt 234 [r113];
  L191():
    goto L38(r113);
  }
}