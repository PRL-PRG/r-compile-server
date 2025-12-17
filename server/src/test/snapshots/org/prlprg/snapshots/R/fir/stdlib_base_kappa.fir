fun main() {
  () -+> V { reg r:cls, reg kappa:cls, reg cbind:cls, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg kappa1:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r6:V, reg kappa2:cls, reg cbind1:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg p4:p(V +), reg r9:V, reg p5:p(V +), reg r11:V, reg r12:cls, reg svd:cls, reg hilbert:cls, reg r13:V, reg p6:p(V +), reg r15:V, reg c:L, reg r17:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg kappa3:cls, reg h9:*, reg h10:V, reg p7:p(V +), reg r20:V, reg kappa4:cls, reg h11:*, reg h12:V, reg p8:p(V +), reg r22:V, reg kappa5:cls, reg qr_R:cls, reg qr:cls, reg h13:*, reg h14:V, reg p9:p(V +), reg r24:V, reg p10:p(V +), reg r26:V, reg p11:p(V +), reg r28:V, reg all_equal:cls, reg kappa6:cls, reg h15:*, reg h16:V, reg p12:p(V +), reg r31:V, reg p13:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r33:V, reg r34:V, reg sv9:*, reg sv10:V, reg max:cls, reg r35:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r38:V, reg r39:V, reg r40:V, reg sv11:*, reg sv12:V, reg min:cls, reg r41:V, reg r42:V, reg p14:p(V +), reg r44:V, reg kappa7:cls, reg h17:*, reg h18:V, reg p15:p(V +), reg r46:V, reg kappa8:cls, reg h19:*, reg h20:V, reg p16:p(V +), reg r48:V, reg rbind:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r50:V, reg r51:V, reg c1:cls, reg r52:V, reg p17:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r54:V, reg r55:V, reg c2:cls, reg r56:V, reg p18:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r58:V, reg r59:V, reg c3:cls, reg r60:V, reg p19:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r62:V, reg r63:V, reg c4:cls, reg r64:V, reg p20:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r66:V, reg r67:V, reg c5:cls, reg r68:V, reg p21:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r70:V, reg r71:V, reg c6:cls, reg r72:V, reg p22:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r74:V, reg r75:V, reg c7:cls, reg r76:V, reg p23:p(V +), reg r78:V, reg kappa9:cls, reg pm7:*, reg pm8:V, reg p24:p(V +), reg r80:V, reg pm9:*, reg pm10:V, reg c8:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r81:V, reg cbind2:cls, reg pm13:*, reg pm14:V, reg p25:p(V +), reg p26:p(V +), reg p27:p(V +), reg r85:V, reg r86:cls, reg kappa10:cls, reg m76:*, reg m77:V, reg p28:p(V +), reg r88:V, reg try:cls, reg kappa11:cls, reg m78:*, reg m79:V, reg p29:p(V +), reg r90:V, reg p30:p(V +), reg r92:V, reg pinv:cls, reg m80:*, reg m81:V, reg p31:p(V +), reg r94:V, reg kappa12:cls, reg m82:*, reg m83:V, reg p32:p(V +), reg iZ:*, reg iZ1:V, reg p33:p(V +), reg r97:V, reg kappa13:cls, reg m84:*, reg m85:V, reg p34:p(V +), reg iZ2:*, reg iZ3:V, reg p35:p(V +), reg r100:V, reg kappa14:cls, reg m86:*, reg m87:V, reg p36:p(V +), reg iZ4:*, reg iZ5:V, reg p37:p(V +), reg r103:V, reg pinv1:cls, reg m88:*, reg m89:V, reg p38:p(V +), reg r105:V, reg kappa15:cls, reg m90:*, reg m91:V, reg p39:p(V +), reg iX:*, reg iX1:V, reg p40:p(V +), reg r108:V, reg kappa16:cls, reg m92:*, reg m93:V, reg p41:p(V +), reg iX2:*, reg iX3:V, reg p42:p(V +), reg r111:V, reg kappa17:cls, reg m94:*, reg m95:V, reg p43:p(V +), reg iX4:*, reg iX5:V, reg p44:p(V +), reg r114:V |
    mkenv;
    r = clos inner3582766048;
    st kappa = r;
    kappa = ldf kappa;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p1 = prom<V +>{
      cbind = ldf cbind;
      p = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
      };
      r2 = dyn cbind(1.0, p);
      st x1 = r2;
      invisible.0();
      return r2;
    };
    r4 = dyn kappa(p1);
    check L2() else D1();
  D1():
    deopt 6 [r4];
  L2():
    kappa1 = ldf kappa;
    check L3() else D2();
  D2():
    deopt 8 [];
  L3():
    p2 = prom<V +>{
      x1 = ld x1;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r6 = dyn kappa1[, exact](p2, TRUE);
    check L4() else D3();
  D3():
    deopt 12 [r6];
  L4():
    kappa2 = ldf kappa;
    check L5() else D4();
  D4():
    deopt 14 [];
  L5():
    p5 = prom<V +>{
      cbind1 = ldf cbind;
      p3 = prom<V +>{
        x3 = ld x1;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p4 = prom<V +>{
        return <int 2, 3, 4, 5, 6, 7, 8, 9, 10, 11>;
      };
      r9 = dyn cbind1(p3, p4);
      st x2 = r9;
      invisible.0();
      return r9;
    };
    r11 = dyn kappa2(p5);
    check L6() else D5();
  D5():
    deopt 16 [r11];
  L6():
    r12 = clos inner4266987626;
    st hilbert = r12;
    svd = ldf svd;
    check L7() else D6();
  D6():
    deopt 21 [];
  L7():
    p6 = prom<V +>{
      hilbert = ldf hilbert;
      r13 = dyn hilbert(9.0);
      st h9 = r13;
      invisible.0();
      return r13;
    };
    r15 = dyn svd(p6);
    check L8() else D7();
  D7():
    deopt 23 [r15];
  L8():
    c = `is.object`(r15);
    if c then L10() else L11(r15);
  L9(dx1):
    st sv9 = dx1;
    kappa3 = ldf kappa;
    check L13() else D8();
  L10():
    dr = tryDispatchBuiltin.1("$", r15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r17):
    r18 = `$`(r17, <sym d>);
    goto L9(r18);
  D8():
    deopt 27 [];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    p7 = prom<V +>{
      h9 = ld h9;
      h10 = force? h9;
      checkMissing(h10);
      return h10;
    };
    r20 = dyn kappa3(p7);
    check L14() else D9();
  D9():
    deopt 29 [r20];
  L14():
    kappa4 = ldf kappa;
    check L15() else D10();
  D10():
    deopt 31 [];
  L15():
    p8 = prom<V +>{
      h11 = ld h9;
      h12 = force? h11;
      checkMissing(h12);
      return h12;
    };
    r22 = dyn kappa4(p8);
    check L16() else D11();
  D11():
    deopt 33 [r22];
  L16():
    kappa5 = ldf kappa;
    check L17() else D12();
  D12():
    deopt 34 [r22];
  L17():
    p11 = prom<V +>{
      qr_R = ldf `qr.R`;
      p10 = prom<V +>{
        qr = ldf qr;
        p9 = prom<V +>{
          h13 = ld h9;
          h14 = force? h13;
          checkMissing(h14);
          return h14;
        };
        r24 = dyn qr(p9);
        return r24;
      };
      r26 = dyn qr_R(p10);
      return r26;
    };
    r28 = dyn kappa5[, norm](p11, "1");
    check L18() else D13();
  D13():
    deopt 38 [r22, r28];
  L18():
    `==`(r22, r28);
    all_equal = ldf `all.equal`;
    check L19() else D14();
  D14():
    deopt 41 [];
  L19():
    p13 = prom<V +>{
      kappa6 = ldf kappa;
      p12 = prom<V +>{
        h15 = ld h9;
        h16 = force? h15;
        checkMissing(h16);
        return h16;
      };
      r31 = dyn kappa6[, exact](p12, TRUE);
      return r31;
    };
    p14 = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r34):
      sym1 = ldf min;
      base1 = ldf min in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L2():
      sv9 = ld sv9;
      sv10 = force? sv9;
      checkMissing(sv10);
      max = ldf max in base;
      r35 = dyn max(sv10);
      goto L0(r35);
    L3():
      r33 = dyn base(<sym sv9>);
      goto L0(r33);
    L1(r39, r40):
      r42 = `/`(r39, r40);
      return r42;
    L4():
      sv11 = ld sv9;
      sv12 = force? sv11;
      checkMissing(sv12);
      min = ldf min in base;
      r41 = dyn min(sv12);
      goto L1(r34, r41);
    L5():
      r38 = dyn base1(<sym sv9>);
      goto L1(r34, r38);
    };
    r44 = dyn all_equal[, , tolerance](p13, p14, 1.0E-12);
    check L20() else D15();
  D15():
    deopt 46 [r44];
  L20():
    kappa7 = ldf kappa;
    check L21() else D16();
  D16():
    deopt 48 [];
  L21():
    p15 = prom<V +>{
      h17 = ld h9;
      h18 = force? h17;
      checkMissing(h18);
      return h18;
    };
    r46 = dyn kappa7[, exact](p15, TRUE);
    check L22() else D17();
  D17():
    deopt 52 [r46];
  L22():
    kappa8 = ldf kappa;
    check L23() else D18();
  D18():
    deopt 53 [r46];
  L23():
    p16 = prom<V +>{
      h19 = ld h9;
      h20 = force? h19;
      checkMissing(h20);
      return h20;
    };
    r48 = dyn kappa8(p16);
    check L24() else D19();
  D19():
    deopt 55 [r46, r48];
  L24():
    `/`(r46, r48);
    rbind = ldf rbind;
    check L25() else D20();
  D20():
    deopt 58 [];
  L25():
    p17 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      c1 = ldf c in base;
      r52 = dyn c1(1.0, 13.0, 18.0, 23.0, 35.0, 40.0, 45.0);
      goto L0(r52);
    L2():
      r50 = dyn base2(1.0, 13.0, 18.0, 23.0, 35.0, 40.0, 45.0);
      goto L0(r50);
    };
    p18 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      c2 = ldf c in base;
      r56 = dyn c2(37.0, 49.0, 5.0, 10.0, 15.0, 27.0, 32.0);
      goto L0(r56);
    L2():
      r54 = dyn base3(37.0, 49.0, 5.0, 10.0, 15.0, 27.0, 32.0);
      goto L0(r54);
    };
    p19 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r59):
      return r59;
    L1():
      c3 = ldf c in base;
      r60 = dyn c3(24.0, 29.0, 41.0, 46.0, 2.0, 14.0, 19.0);
      goto L0(r60);
    L2():
      r58 = dyn base4(24.0, 29.0, 41.0, 46.0, 2.0, 14.0, 19.0);
      goto L0(r58);
    };
    p20 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r63):
      return r63;
    L1():
      c4 = ldf c in base;
      r64 = dyn c4(11.0, 16.0, 28.0, 33.0, 38.0, 43.0, 6.0);
      goto L0(r64);
    L2():
      r62 = dyn base5(11.0, 16.0, 28.0, 33.0, 38.0, 43.0, 6.0);
      goto L0(r62);
    };
    p21 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r67):
      return r67;
    L1():
      c5 = ldf c in base;
      r68 = dyn c5(47.0, 3.0, 8.0, 20.0, 25.0, 30.0, 42.0);
      goto L0(r68);
    L2():
      r66 = dyn base6(47.0, 3.0, 8.0, 20.0, 25.0, 30.0, 42.0);
      goto L0(r66);
    };
    p22 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r71):
      return r71;
    L1():
      c6 = ldf c in base;
      r72 = dyn c6(34.0, 39.0, 44.0, 7.0, 12.0, 17.0, 22.0);
      goto L0(r72);
    L2():
      r70 = dyn base7(34.0, 39.0, 44.0, 7.0, 12.0, 17.0, 22.0);
      goto L0(r70);
    };
    p23 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      c7 = ldf c in base;
      r76 = dyn c7(21.0, 26.0, 31.0, 36.0, 48.0, 4.0, 9.0);
      goto L0(r76);
    L2():
      r74 = dyn base8(21.0, 26.0, 31.0, 36.0, 48.0, 4.0, 9.0);
      goto L0(r74);
    };
    r78 = dyn rbind(p17, p18, p19, p20, p21, p22, p23);
    check L26() else D21();
  D21():
    deopt 66 [r78];
  L26():
    st pm7 = r78;
    kappa9 = ldf kappa;
    check L27() else D22();
  D22():
    deopt 69 [];
  L27():
    p24 = prom<V +>{
      pm7 = ld pm7;
      pm8 = force? pm7;
      checkMissing(pm8);
      return pm8;
    };
    r80 = dyn kappa9[, exact, norm](p24, TRUE, "1");
    check L28() else D23();
  D23():
    deopt 75 [r80];
  L28():
    pm9 = ld pm7;
    check L29() else D24();
  D24():
    deopt 76 [pm9];
  L29():
    pm10 = force? pm9;
    checkMissing(pm10);
    c8 = `is.object`(pm10);
    if c8 then L30() else L31();
  L0(dx3):
    st m76 = dx3;
    cbind2 = ldf cbind;
    check L33() else D25();
  L30():
    dr2 = tryDispatchBuiltin.1("[", pm10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31();
  L31():
    __ = ldf `[` in base;
    r81 = dyn __(pm10, <missing>, <int 1, 2, 3, 4, 5, 6>);
    goto L0(r81);
  D25():
    deopt 85 [];
  L32():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L33():
    p25 = prom<V +>{
      pm13 = ld pm7;
      pm14 = force? pm13;
      checkMissing(pm14);
      return pm14;
    };
    p26 = prom<V +>{
      return <int 50, 51, 52, 53, 54, 55, 56>;
    };
    p27 = prom<V +>{
      return <int 63, 62, 61, 60, 59, 58, 57>;
    };
    r85 = dyn cbind2(p25, p26, p27);
    check L34() else D26();
  D26():
    deopt 89 [r85];
  L34():
    st m79 = r85;
    r86 = clos inner1443797672;
    st pinv = r86;
    kappa10 = ldf kappa;
    check L35() else D27();
  D27():
    deopt 95 [];
  L35():
    p28 = prom<V +>{
      m76 = ld m76;
      m77 = force? m76;
      checkMissing(m77);
      return m77;
    };
    r88 = dyn kappa10[, norm](p28, "1");
    check L36() else D28();
  D28():
    deopt 99 [r88];
  L36():
    try = ldf try;
    check L37() else D29();
  D29():
    deopt 101 [];
  L37():
    p30 = prom<V +>{
      kappa11 = ldf kappa;
      p29 = prom<V +>{
        m78 = ld m76;
        m79 = force? m78;
        checkMissing(m79);
        return m79;
      };
      r90 = dyn kappa11[, exact, norm](p29, TRUE, "1");
      return r90;
    };
    r92 = dyn try(p30);
    check L38() else D30();
  D30():
    deopt 103 [r92];
  L38():
    pinv = ldf pinv;
    check L39() else D31();
  D31():
    deopt 105 [];
  L39():
    p31 = prom<V +>{
      m80 = ld m76;
      m81 = force? m80;
      checkMissing(m81);
      return m81;
    };
    r94 = dyn pinv(p31);
    check L40() else D32();
  D32():
    deopt 107 [r94];
  L40():
    st iZ = r94;
    kappa12 = ldf kappa;
    check L41() else D33();
  D33():
    deopt 110 [];
  L41():
    p32 = prom<V +>{
      m82 = ld m76;
      m83 = force? m82;
      checkMissing(m83);
      return m83;
    };
    p33 = prom<V +>{
      iZ = ld iZ;
      iZ1 = force? iZ;
      checkMissing(iZ1);
      return iZ1;
    };
    r97 = dyn kappa12[, exact, norm, inv_z](p32, TRUE, "1", p33);
    check L42() else D34();
  D34():
    deopt 118 [r97];
  L42():
    kappa13 = ldf kappa;
    check L43() else D35();
  D35():
    deopt 120 [];
  L43():
    p34 = prom<V +>{
      m84 = ld m76;
      m85 = force? m84;
      checkMissing(m85);
      return m85;
    };
    p35 = prom<V +>{
      iZ2 = ld iZ;
      iZ3 = force? iZ2;
      checkMissing(iZ3);
      return iZ3;
    };
    r100 = dyn kappa13[, exact, norm, inv_z](p34, TRUE, "M", p35);
    check L44() else D36();
  D36():
    deopt 128 [r100];
  L44():
    kappa14 = ldf kappa;
    check L45() else D37();
  D37():
    deopt 130 [];
  L45():
    p36 = prom<V +>{
      m86 = ld m76;
      m87 = force? m86;
      checkMissing(m87);
      return m87;
    };
    p37 = prom<V +>{
      iZ4 = ld iZ;
      iZ5 = force? iZ4;
      checkMissing(iZ5);
      return iZ5;
    };
    r103 = dyn kappa14[, exact, norm, inv_z](p36, TRUE, "I", p37);
    check L46() else D38();
  D38():
    deopt 138 [r103];
  L46():
    pinv1 = ldf pinv;
    check L47() else D39();
  D39():
    deopt 140 [];
  L47():
    p38 = prom<V +>{
      m88 = ld m79;
      m89 = force? m88;
      checkMissing(m89);
      return m89;
    };
    r105 = dyn pinv1(p38);
    check L48() else D40();
  D40():
    deopt 142 [r105];
  L48():
    st iX = r105;
    kappa15 = ldf kappa;
    check L49() else D41();
  D41():
    deopt 145 [];
  L49():
    p39 = prom<V +>{
      m90 = ld m79;
      m91 = force? m90;
      checkMissing(m91);
      return m91;
    };
    p40 = prom<V +>{
      iX = ld iX;
      iX1 = force? iX;
      checkMissing(iX1);
      return iX1;
    };
    r108 = dyn kappa15[, exact, norm, inv_z](p39, TRUE, "1", p40);
    check L50() else D42();
  D42():
    deopt 153 [r108];
  L50():
    kappa16 = ldf kappa;
    check L51() else D43();
  D43():
    deopt 155 [];
  L51():
    p41 = prom<V +>{
      m92 = ld m79;
      m93 = force? m92;
      checkMissing(m93);
      return m93;
    };
    p42 = prom<V +>{
      iX2 = ld iX;
      iX3 = force? iX2;
      checkMissing(iX3);
      return iX3;
    };
    r111 = dyn kappa16[, exact, norm, inv_z](p41, TRUE, "M", p42);
    check L52() else D44();
  D44():
    deopt 163 [r111];
  L52():
    kappa17 = ldf kappa;
    check L53() else D45();
  D45():
    deopt 165 [];
  L53():
    p43 = prom<V +>{
      m94 = ld m79;
      m95 = force? m94;
      checkMissing(m95);
      return m95;
    };
    p44 = prom<V +>{
      iX4 = ld iX;
      iX5 = force? iX4;
      checkMissing(iX5);
      return iX5;
    };
    r114 = dyn kappa17[, exact, norm, inv_z](p43, TRUE, "I", p44);
    check L54() else D46();
  D46():
    deopt 173 [r114];
  L54():
    popenv;
    return r114;
  }
}
fun inner3582766048(z, `...`) {
  (reg z:*, reg ddd:dots) -+> V { var z:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st z = z;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("kappa");
    goto L0(r2);
  L2():
    r = dyn base("kappa");
    goto L0(r);
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg n1:*, reg n2:V, reg r:V, reg outer:cls, reg i:*, reg i1:V, reg r1:V, reg p:p(V +), reg i2:*, reg i3:V, reg p1:p(V +), reg __:*, reg __1:V, reg p2:p(V +), reg r5:V, reg r6:V |
    mkenv;
    st n = n;
    n1 = ld n;
    check L0() else D0();
  D0():
    deopt 1 [1.0, n1];
  L0():
    n2 = force? n1;
    checkMissing(n2);
    r = `:`(1.0, n2);
    st i = r;
    outer = ldf outer;
    check L1() else D1();
  D1():
    deopt 7 [1.0];
  L1():
    p = prom<V +>{
      i = ld i;
      i1 = force? i;
      checkMissing(i1);
      r1 = `-`(i1, 1.0);
      return r1;
    };
    p1 = prom<V +>{
      i2 = ld i;
      i3 = force? i2;
      checkMissing(i3);
      return i3;
    };
    p2 = prom<V +>{
      __ = ld `+`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r5 = dyn outer(p, p1, p2);
    check L2() else D2();
  D2():
    deopt 11 [1.0, r5];
  L2():
    r6 = `/`(1.0, r5);
    popenv;
    return r6;
  }
}
fun inner1443797672(X, s, tol) {
  (reg X:*, reg s:*, reg tol:*) -+> V { var X:*, var s:*, reg s_isMissing:L, reg s_orDefault:*, reg svd:cls, reg X1:*, reg X2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg _Machine:*, reg _Machine1:V, reg c:L, reg r4:R, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg r6:R, reg dx1:V, reg r7:V, reg r8:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg X3:*, reg X4:V, reg c1:L, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg s1:*, reg s2:V, reg c3:L, reg s4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r14:V, reg Conj:cls, reg r15:V, reg l:*, reg c4:L, reg r17:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r19:V, reg dx5:V, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg X5:*, reg X6:V, reg dim:cls, reg r24:V, reg r25:cls, reg s5:*, reg s6:V, reg c5:L, reg s8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg dx10:V, reg r28:V, reg tol1:*, reg tol2:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg dx13:V, reg tol5:V, reg r30:V, reg dx14:*, reg dx15:V, reg max:cls, reg r31:V, reg r32:V, reg d:*, reg d1:V, reg c6:L, reg dx17:V, reg r34:V, reg d3:V, reg dr8:V, reg dc4:L, reg dx19:V, reg dx20:V, reg r36:V, reg dx21:V, reg __:cls, reg r37:V, reg r38:V, reg max1:cls, reg r39:V, reg r40:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg pos:*, reg pos1:V, reg all:cls, reg r43:V, reg c7:L, reg pI:cls, reg s9:*, reg s10:V, reg c8:L, reg s12:V, reg dr10:V, reg dc5:L, reg dx22:V, reg dx23:V, reg r44:V, reg p3:p(V +), reg d4:*, reg d5:V, reg p4:p(V +), reg s13:*, reg s14:V, reg c9:L, reg s16:V, reg dr12:V, reg dc6:L, reg dx24:V, reg dx25:V, reg r47:V, reg p5:p(V +), reg r49:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg pos2:*, reg pos3:V, reg any:cls, reg r52:V, reg r53:V, reg c10:L, reg array:cls, reg dX:*, reg dX1:V, reg c11:L, reg dX3:V, reg dr14:V, reg dc7:L, reg dx26:V, reg dx27:V, reg __1:cls, reg r54:V, reg p6:p(V +), reg r56:V, reg which:cls, reg pos4:*, reg pos5:V, reg p7:p(V +), reg r58:V, reg pI1:cls, reg s17:*, reg s18:V, reg c12:L, reg s20:V, reg dr16:V, reg dc8:L, reg dx28:V, reg dx29:V, reg r59:V, reg c13:L, reg dr18:V, reg dc9:L, reg dx32:V, reg dx33:V, reg i:*, reg i1:V, reg __2:cls, reg r60:V, reg p8:p(V +), reg d6:*, reg d7:V, reg c14:L, reg d9:V, reg dr20:V, reg dc10:L, reg dx34:V, reg dx35:V, reg i2:*, reg i3:V, reg __3:cls, reg r62:V, reg p9:p(V +), reg s21:*, reg s22:V, reg c15:L, reg s24:V, reg dr22:V, reg dc11:L, reg dx36:V, reg dx37:V, reg r64:V, reg c16:L, reg dr24:V, reg dc12:L, reg dx40:V, reg dx41:V, reg i4:*, reg i5:V, reg __4:cls, reg r65:V, reg p10:p(V +), reg r67:V |
    mkenv;
    st X = X;
    s_isMissing = missing.0(s);
    if s_isMissing then L0() else L1(s);
  L0():
    p1 = prom<V +>{
      svd = ldf svd;
      p = prom<V +>{
        X1 = ld X;
        X2 = force? X1;
        checkMissing(X2);
        return X2;
      };
      r1 = dyn svd(p);
      return r1;
    };
    goto L1(p1);
  L1(s_orDefault):
    st s = s_orDefault;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L2() else L3(tol);
  L2():
    p2 = prom<V +>{
      _Machine = ld `.Machine`;
      _Machine1 = force? _Machine;
      checkMissing(_Machine1);
      c = `is.object`(_Machine1);
      if c then L1() else L2(64.0, _Machine1);
    L0(r6, dx1):
      r8 = `*`(r6, dx1);
      return r8;
    L1():
      dr = tryDispatchBuiltin.1("$", _Machine1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(64.0, dr);
    L2(r4, _Machine3):
      r7 = `$`(_Machine3, <sym double.eps>);
      goto L0(r4, r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(64.0, dx);
    };
    goto L3(p2);
  L3(tol_orDefault):
    st tol = tol_orDefault;
    sym = ldf `is.complex`;
    base = ldf `is.complex` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L4(r11):
    c2 = `as.logical`(r11);
    if c2 then L19() else L5();
  L16():
    X3 = ld X;
    check L18() else D0();
  L17():
    r10 = dyn base(<sym X>);
    goto L4(r10);
  D0():
    deopt 1 [X3];
  L5():
    goto L7();
  L7():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L18():
    X4 = force? X3;
    checkMissing(X4);
    c1 = `is.complex`(X4);
    goto L4(c1);
  L19():
    sym1 = ldf Conj;
    base1 = ldf Conj in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L6(r13):
    l = ld s;
    c4 = `is.object`(l);
    if c4 then L29() else L30(r13, l);
  L8(r23):
    st dx = r23;
    r25 = clos inner156887171;
    st pI = r25;
    s5 = ld s;
    check L37() else D5();
  L20():
    s1 = ld s;
    check L22() else D1();
  L21():
    r12 = dyn base1(<lang `$`(s, u)>);
    goto L6(r12);
  L33():
    X5 = ld X;
    check L35() else D3();
  L34():
    r22 = dyn base2(<sym X>);
    goto L8(r22);
  D1():
    deopt 6 [s1];
  D3():
    deopt 18 [X5];
  D5():
    deopt 26 [s5];
  L22():
    s2 = force? s1;
    checkMissing(s2);
    c3 = `is.object`(s2);
    if c3 then L24() else L25(s2);
  L28(r19, dx5):
    st s = dx5;
    goto L7();
  L29():
    dr4 = tryDispatchBuiltin.0("$<-", l, r13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L31() else L30(r13, dr4);
  L30(r17, l2):
    r20 = `$<-`(l2, <sym u>, r13);
    goto L28(r17, r20);
  L35():
    X6 = force? X5;
    checkMissing(X6);
    dim = ldf dim in base;
    r24 = dyn dim(X6);
    check L36() else D4();
  L37():
    s6 = force? s5;
    checkMissing(s6);
    c5 = `is.object`(s6);
    if c5 then L39() else L40(s6);
  D4():
    deopt 21 [r24];
  L23(dx3):
    Conj = ldf Conj in base;
    r15 = dyn Conj(dx3);
    check L27() else D2();
  L24():
    dr2 = tryDispatchBuiltin.1("$", s2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(s4):
    r14 = `$`(s4, <sym u>);
    goto L23(r14);
  L31():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L28(r13, dx4);
  L36():
    goto L8(r24);
  L38(dx7):
    st d = dx7;
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L39():
    dr6 = tryDispatchBuiltin.1("$", s6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L41() else L40(dr6);
  L40(s8):
    r26 = `$`(s8, <sym d>);
    goto L38(r26);
  D2():
    deopt 10 [r15];
  L9(dx10, r28):
    r40 = `>`(dx10, r28);
    st pos = r40;
    sym5 = ldf all;
    base5 = ldf all in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(dx2);
  L27():
    goto L6(r15);
  L41():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L38(dx6);
  L42():
    tol1 = ld tol;
    check L44() else D6();
  L43():
    r27 = dyn base3(<lang `*`(`*`(tol, max(dx)), `[`(d, 1))>, 0.0);
    goto L9(dx7, r27);
  D6():
    deopt 31 [dx7, tol1];
  L12(r42):
    c7 = `as.logical`(r42);
    if c7 then L58() else L13();
  L44():
    tol2 = force? tol1;
    checkMissing(tol2);
    sym4 = ldf max;
    base4 = ldf max in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L54():
    pos = ld pos;
    check L56() else D11();
  L55():
    r41 = dyn base5(<sym pos>);
    goto L12(r41);
  D11():
    deopt 51 [pos];
  L10(dx13, tol5, r30):
    r32 = `*`(tol5, r30);
    d = ld d;
    check L49() else D9();
  L13():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L62() else L63();
  L45():
    dx14 = ld dx;
    check L47() else D7();
  L46():
    r29 = dyn base4(<sym dx>);
    goto L10(dx7, tol2, r29);
  L56():
    pos1 = force? pos;
    checkMissing(pos1);
    all = ldf all in base;
    r43 = dyn all(pos1);
    check L57() else D12();
  L58():
    pI = ldf pI;
    check L59() else D13();
  D7():
    deopt 34 [dx7, tol2, dx14];
  D9():
    deopt 38 [dx13, r32, d];
  D12():
    deopt 54 [r43];
  D13():
    deopt 56 [];
  L14(r51):
    r53 = `!`(r51);
    c10 = `as.logical`(r53);
    if c10 then L66() else L15();
  L47():
    dx15 = force? dx14;
    checkMissing(dx15);
    max = ldf max in base;
    r31 = dyn max(dx15);
    check L48() else D8();
  L49():
    d1 = force? d;
    checkMissing(d1);
    c6 = `is.object`(d1);
    if c6 then L50() else L51(dx13, r32, d1);
  L57():
    goto L12(r43);
  L59():
    p3 = prom<V +>{
      s9 = ld s;
      s10 = force? s9;
      checkMissing(s10);
      c8 = `is.object`(s10);
      if c8 then L1() else L2(s10);
    L0(dx23):
      return dx23;
    L1():
      dr10 = tryDispatchBuiltin.1("$", s10);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(s12):
      r44 = `$`(s12, <sym u>);
      goto L0(r44);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx22);
    };
    p4 = prom<V +>{
      d4 = ld d;
      d5 = force? d4;
      checkMissing(d5);
      return d5;
    };
    p5 = prom<V +>{
      s13 = ld s;
      s14 = force? s13;
      checkMissing(s14);
      c9 = `is.object`(s14);
      if c9 then L1() else L2(s14);
    L0(dx25):
      return dx25;
    L1():
      dr12 = tryDispatchBuiltin.1("$", s14);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(s16):
      r47 = `$`(s16, <sym v>);
      goto L0(r47);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx24);
    };
    r49 = dyn pI(p3, p4, p5);
    check L60() else D14();
  L62():
    pos2 = ld pos;
    check L64() else D15();
  L63():
    r50 = dyn base6(<sym pos>);
    goto L14(r50);
  D8():
    deopt 37 [dx7, tol2, r31];
  D14():
    deopt 60 [r49];
  D15():
    deopt 63 [pos2];
  L11(dx20, r36, dx21):
    r38 = `*`(r36, dx21);
    max1 = ldf max in base;
    r39 = dyn max1(r38, 0.0);
    check L53() else D10();
  L15():
    which = ldf which;
    check L70() else D19();
  L48():
    goto L10(dx7, tol2, r31);
  L50():
    dr8 = tryDispatchBuiltin.1("[", d1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L52() else L51(dx13, r32, dr8);
  L51(dx17, r34, d3):
    __ = ldf `[` in base;
    r37 = dyn __(d3, 1);
    goto L11(dx17, r34, r37);
  L60():
    popenv;
    return r49;
  L64():
    pos3 = force? pos2;
    checkMissing(pos3);
    any = ldf any in base;
    r52 = dyn any(pos3);
    check L65() else D16();
  L66():
    array = ldf array;
    check L67() else D17();
  D10():
    deopt 46 [dx20, r39];
  D16():
    deopt 66 [r52];
  D17():
    deopt 69 [];
  D19():
    deopt 74 [];
  L52():
    dx19 = getTryDispatchBuiltinValue(dr8);
    goto L11(dx13, r32, dx19);
  L53():
    goto L9(dx20, r39);
  L65():
    goto L14(r52);
  L67():
    p6 = prom<V +>{
      dX = ld dX;
      dX1 = force? dX;
      checkMissing(dX1);
      c11 = `is.object`(dX1);
      if c11 then L1() else L2(dX1);
    L0(dx27):
      return dx27;
    L1():
      dr14 = tryDispatchBuiltin.1("[", dX1);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(dX3):
      __1 = ldf `[` in base;
      r54 = dyn __1(dX3, <int 2, 1>);
      goto L0(r54);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx26);
    };
    r56 = dyn array(0.0, p6);
    check L68() else D18();
  L70():
    p7 = prom<V +>{
      pos4 = ld pos;
      pos5 = force? pos4;
      checkMissing(pos5);
      return pos5;
    };
    r58 = dyn which(p7);
    check L71() else D20();
  D18():
    deopt 72 [r56];
  D20():
    deopt 76 [r58];
  L68():
    popenv;
    return r56;
  L71():
    st i = r58;
    pI1 = ldf pI;
    check L72() else D21();
  D21():
    deopt 79 [];
  L72():
    p8 = prom<V +>{
      s17 = ld s;
      s18 = force? s17;
      checkMissing(s18);
      c12 = `is.object`(s18);
      if c12 then L2() else L3(s18);
    L1(dx29):
      c13 = `is.object`(dx29);
      if c13 then L5() else L6();
    L2():
      dr16 = tryDispatchBuiltin.1("$", s18);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(s20):
      r59 = `$`(s20, <sym u>);
      goto L1(r59);
    L0(dx33):
      return dx33;
    L4():
      dx28 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx28);
    L5():
      dr18 = tryDispatchBuiltin.1("[", dx29);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6();
    L6():
      i = ld i;
      i1 = force? i;
      __2 = ldf `[` in base;
      r60 = dyn __2(dx29, <missing>, i1, FALSE);
      goto L0(r60);
    L7():
      dx32 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx32);
    };
    p9 = prom<V +>{
      d6 = ld d;
      d7 = force? d6;
      checkMissing(d7);
      c14 = `is.object`(d7);
      if c14 then L1() else L2(d7);
    L0(dx35):
      return dx35;
    L1():
      dr20 = tryDispatchBuiltin.1("[", d7);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(d9):
      i2 = ld i;
      i3 = force? i2;
      __3 = ldf `[` in base;
      r62 = dyn __3(d9, i3);
      goto L0(r62);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx34);
    };
    p10 = prom<V +>{
      s21 = ld s;
      s22 = force? s21;
      checkMissing(s22);
      c15 = `is.object`(s22);
      if c15 then L2() else L3(s22);
    L1(dx37):
      c16 = `is.object`(dx37);
      if c16 then L5() else L6();
    L2():
      dr22 = tryDispatchBuiltin.1("$", s22);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L4() else L3(dr22);
    L3(s24):
      r64 = `$`(s24, <sym v>);
      goto L1(r64);
    L0(dx41):
      return dx41;
    L4():
      dx36 = getTryDispatchBuiltinValue(dr22);
      goto L1(dx36);
    L5():
      dr24 = tryDispatchBuiltin.1("[", dx37);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L7() else L6();
    L6():
      i4 = ld i;
      i5 = force? i4;
      __4 = ldf `[` in base;
      r65 = dyn __4(dx37, <missing>, i5, FALSE);
      goto L0(r65);
    L7():
      dx40 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx40);
    };
    r67 = dyn pI1(p8, p9, p10);
    check L73() else D22();
  D22():
    deopt 83 [r67];
  L73():
    popenv;
    return r67;
  }
}
fun inner156887171(u, d, v) {
  (reg u:*, reg d:*, reg v:*) -+> V { var u:*, var d:*, var v:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg v1:*, reg v2:V, reg u1:*, reg u2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg u5:V, reg r3:V, reg rep:cls, reg r4:V, reg r5:V, reg tcrossprod:cls, reg r6:V |
    mkenv;
    st u = u;
    st d = d;
    st v = v;
    sym = ldf tcrossprod;
    base = ldf tcrossprod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    v1 = ld v;
    check L4() else D0();
  L3():
    r = dyn base(<sym v>, <lang `/`(u, rep(d, each=`[`(dx, 1)))>);
    goto L0(r);
  D0():
    deopt 2 [v1];
  L4():
    v2 = force? v1;
    checkMissing(v2);
    u1 = ld u;
    check L5() else D1();
  D1():
    deopt 4 [u1];
  L5():
    u2 = force? u1;
    checkMissing(u2);
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L1(u5, r3):
    r5 = `/`(u5, r3);
    tcrossprod = ldf tcrossprod in base;
    r6 = dyn tcrossprod(v2, r5);
    check L8() else D2();
  L6():
    rep = ldf rep in base;
    r4 = dyn rep(<sym d>, <lang `[`(dx, 1)>);
    goto L1(u2, r4);
  L7():
    r2 = dyn base1[, each](<sym d>, <lang `[`(dx, 1)>);
    goto L1(u2, r2);
  D2():
    deopt 10 [r6];
  L8():
    goto L0(r6);
  }
}