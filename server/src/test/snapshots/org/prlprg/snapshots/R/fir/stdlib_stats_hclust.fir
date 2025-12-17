fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg hclust:cls, reg dist:cls, reg USArrests:*, reg USArrests1:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg plot:cls, reg hc:*, reg hc1:V, reg p3:p(V +), reg r10:V, reg plot1:cls, reg hc2:*, reg hc3:V, reg p4:p(V +), reg p5:p(V +), reg r13:V, reg hclust1:cls, reg dist1:cls, reg USArrests2:*, reg USArrests3:V, reg p6:p(V +), reg r15:V, reg r16:V, reg p7:p(V +), reg r18:V, reg cutree:cls, reg hc4:*, reg hc5:V, reg p8:p(V +), reg r20:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg rbind:cls, reg cent:*, reg cent1:V, reg p9:p(V +), reg colMeans:cls, reg USArrests4:*, reg USArrests5:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg memb:*, reg memb1:V, reg k:*, reg k1:V, reg r22:V, reg __:cls, reg r23:V, reg p10:p(V +), reg r25:V, reg p11:p(V +), reg r27:V, reg hclust2:cls, reg dist2:cls, reg cent2:*, reg cent3:V, reg p12:p(V +), reg r29:V, reg r30:V, reg p13:p(V +), reg table:cls, reg memb2:*, reg memb3:V, reg p14:p(V +), reg r33:V, reg p15:p(V +), reg r35:V, reg par:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r36:V, reg r37:V, reg c2:cls, reg r38:V, reg p16:p(V +), reg r40:V, reg plot2:cls, reg hc6:*, reg hc7:V, reg p17:p(V +), reg p18:p(V +), reg r43:V, reg plot3:cls, reg hc8:*, reg hc9:V, reg p19:p(V +), reg p20:p(V +), reg r46:V, reg par1:cls, reg opar:*, reg opar1:V, reg p21:p(V +), reg r48:V, reg cmdscale:cls, reg UScitiesD:*, reg UScitiesD1:V, reg p22:p(V +), reg r50:V, reg r51:V, reg plot4:cls, reg mds2:*, reg mds3:V, reg p23:p(V +), reg r53:V, reg text:cls, reg mds4:*, reg mds5:V, reg p24:p(V +), reg rownames:cls, reg mds6:*, reg mds7:V, reg p25:p(V +), reg r56:V, reg p26:p(V +), reg r58:V, reg hclust3:cls, reg UScitiesD2:*, reg UScitiesD3:V, reg p27:p(V +), reg r60:V, reg hclust4:cls, reg UScitiesD4:*, reg UScitiesD5:V, reg p28:p(V +), reg r62:V, reg par2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r63:V, reg r64:V, reg c3:cls, reg r65:V, reg p29:p(V +), reg r67:V, reg plot5:cls, reg hcity_D:*, reg hcity_D1:V, reg p30:p(V +), reg p31:p(V +), reg r70:V, reg plot6:cls, reg hcity_D2:*, reg hcity_D3:V, reg p32:p(V +), reg p33:p(V +), reg r73:V, reg par3:cls, reg opar2:*, reg opar3:V, reg p34:p(V +), reg r75:V |
    mkenv;
    r = clos inner1859567594;
    st hclust = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    hclust = ldf hclust;
    check L7() else D2();
  L3():
    require = ldf require;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L5():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L6() else D1();
  L7():
    p2 = prom<V +>{
      dist = ldf dist;
      p1 = prom<V +>{
        USArrests = ld USArrests;
        USArrests1 = force? USArrests;
        checkMissing(USArrests1);
        return USArrests1;
      };
      r6 = dyn dist(p1);
      return r6;
    };
    r8 = dyn hclust(p2, "ave");
    check L8() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 12 [r8];
  L6():
    goto L0();
  L8():
    st hc = r8;
    plot = ldf plot;
    check L9() else D4();
  D4():
    deopt 15 [];
  L9():
    p3 = prom<V +>{
      hc = ld hc;
      hc1 = force? hc;
      checkMissing(hc1);
      return hc1;
    };
    r10 = dyn plot(p3);
    check L10() else D5();
  D5():
    deopt 17 [r10];
  L10():
    plot1 = ldf plot;
    check L11() else D6();
  D6():
    deopt 19 [];
  L11():
    p4 = prom<V +>{
      hc2 = ld hc;
      hc3 = force? hc2;
      checkMissing(hc3);
      return hc3;
    };
    p5 = prom<V +>{
      return -1.0;
    };
    r13 = dyn plot1[, hang](p4, p5);
    check L12() else D7();
  D7():
    deopt 23 [r13];
  L12():
    hclust1 = ldf hclust;
    check L13() else D8();
  D8():
    deopt 25 [];
  L13():
    p7 = prom<V +>{
      dist1 = ldf dist;
      p6 = prom<V +>{
        USArrests2 = ld USArrests;
        USArrests3 = force? USArrests2;
        checkMissing(USArrests3);
        return USArrests3;
      };
      r15 = dyn dist1(p6);
      r16 = `^`(r15, 2.0);
      return r16;
    };
    r18 = dyn hclust1(p7, "cen");
    check L14() else D9();
  D9():
    deopt 28 [r18];
  L14():
    st hc = r18;
    cutree = ldf cutree;
    check L15() else D10();
  D10():
    deopt 31 [];
  L15():
    p8 = prom<V +>{
      hc4 = ld hc;
      hc5 = force? hc4;
      checkMissing(hc5);
      return hc5;
    };
    r20 = dyn cutree[, k](p8, 10.0);
    check L16() else D11();
  D11():
    deopt 35 [r20];
  L16():
    st memb = r20;
    st cent = NULL;
    s = toForSeq(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L17() else L2();
  L2():
    x = `[[`(s, i2, NULL, TRUE);
    st k = x;
    rbind = ldf rbind;
    check L18() else D12();
  L17():
    hclust2 = ldf hclust;
    check L20() else D14();
  D12():
    deopt 43 [i2];
  D14():
    deopt 52 [];
  L18():
    p9 = prom<V +>{
      cent = ld cent;
      cent1 = force? cent;
      checkMissing(cent1);
      return cent1;
    };
    p11 = prom<V +>{
      colMeans = ldf colMeans;
      p10 = prom<V +>{
        USArrests4 = ld USArrests;
        USArrests5 = force? USArrests4;
        checkMissing(USArrests5);
        c1 = `is.object`(USArrests5);
        if c1 then L1() else L2();
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", USArrests5);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2();
      L2():
        memb = ld memb;
        memb1 = force? memb;
        checkMissing(memb1);
        k = ld k;
        k1 = force? k;
        checkMissing(k1);
        r22 = `==`(memb1, k1);
        __ = ldf `[` in base;
        r23 = dyn __(USArrests5, r22, <missing>, FALSE);
        goto L0(r23);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r25 = dyn colMeans(p10);
      return r25;
    };
    r27 = dyn rbind(p9, p11);
    check L19() else D13();
  L20():
    p13 = prom<V +>{
      dist2 = ldf dist;
      p12 = prom<V +>{
        cent2 = ld cent;
        cent3 = force? cent2;
        checkMissing(cent3);
        return cent3;
      };
      r29 = dyn dist2(p12);
      r30 = `^`(r29, 2.0);
      return r30;
    };
    p15 = prom<V +>{
      table = ldf table;
      p14 = prom<V +>{
        memb2 = ld memb;
        memb3 = force? memb2;
        checkMissing(memb3);
        return memb3;
      };
      r33 = dyn table(p14);
      return r33;
    };
    r35 = dyn hclust2[, method, members](p13, "cen", p15);
    check L21() else D15();
  D13():
    deopt 46 [i2, r27];
  D15():
    deopt 58 [r35];
  L19():
    st cent = r27;
    goto L1(i2);
  L21():
    st hc1 = r35;
    par = ldf par;
    check L22() else D16();
  D16():
    deopt 61 [];
  L22():
    p16 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      c2 = ldf c in base;
      r38 = dyn c2(1.0, 2.0);
      goto L0(r38);
    L2():
      r36 = dyn base1(1.0, 2.0);
      goto L0(r36);
    };
    r40 = dyn par[mfrow](p16);
    check L23() else D17();
  D17():
    deopt 64 [r40];
  L23():
    st opar = r40;
    plot2 = ldf plot;
    check L24() else D18();
  D18():
    deopt 67 [];
  L24():
    p17 = prom<V +>{
      hc6 = ld hc;
      hc7 = force? hc6;
      checkMissing(hc7);
      return hc7;
    };
    p18 = prom<V +>{
      return -1.0;
    };
    r43 = dyn plot2[, labels, hang, main](p17, FALSE, p18, "Original Tree");
    check L25() else D19();
  D19():
    deopt 75 [r43];
  L25():
    plot3 = ldf plot;
    check L26() else D20();
  D20():
    deopt 77 [];
  L26():
    p19 = prom<V +>{
      hc8 = ld hc1;
      hc9 = force? hc8;
      checkMissing(hc9);
      return hc9;
    };
    p20 = prom<V +>{
      return -1.0;
    };
    r46 = dyn plot3[, labels, hang, main](p19, FALSE, p20, "Re-start from 10 clusters");
    check L27() else D21();
  D21():
    deopt 85 [r46];
  L27():
    par1 = ldf par;
    check L28() else D22();
  D22():
    deopt 87 [];
  L28():
    p21 = prom<V +>{
      opar = ld opar;
      opar1 = force? opar;
      checkMissing(opar1);
      return opar1;
    };
    r48 = dyn par1(p21);
    check L29() else D23();
  D23():
    deopt 89 [r48];
  L29():
    cmdscale = ldf cmdscale;
    check L30() else D24();
  D24():
    deopt 91 [];
  L30():
    p22 = prom<V +>{
      UScitiesD = ld UScitiesD;
      UScitiesD1 = force? UScitiesD;
      checkMissing(UScitiesD1);
      return UScitiesD1;
    };
    r50 = dyn cmdscale(p22);
    check L31() else D25();
  D25():
    deopt 93 [r50];
  L31():
    r51 = `-`(<missing>, r50);
    st mds2 = r51;
    plot4 = ldf plot;
    check L32() else D26();
  D26():
    deopt 97 [];
  L32():
    p23 = prom<V +>{
      mds2 = ld mds2;
      mds3 = force? mds2;
      checkMissing(mds3);
      return mds3;
    };
    r53 = dyn plot4[, type, axes, ann](p23, "n", FALSE, FALSE);
    check L33() else D27();
  D27():
    deopt 105 [r53];
  L33():
    text = ldf text;
    check L34() else D28();
  D28():
    deopt 107 [];
  L34():
    p24 = prom<V +>{
      mds4 = ld mds2;
      mds5 = force? mds4;
      checkMissing(mds5);
      return mds5;
    };
    p26 = prom<V +>{
      rownames = ldf rownames;
      p25 = prom<V +>{
        mds6 = ld mds2;
        mds7 = force? mds6;
        checkMissing(mds7);
        return mds7;
      };
      r56 = dyn rownames(p25);
      return r56;
    };
    r58 = dyn text[, labels, xpd](p24, p26, NA_LGL);
    check L35() else D29();
  D29():
    deopt 113 [r58];
  L35():
    hclust3 = ldf hclust;
    check L36() else D30();
  D30():
    deopt 115 [];
  L36():
    p27 = prom<V +>{
      UScitiesD2 = ld UScitiesD;
      UScitiesD3 = force? UScitiesD2;
      checkMissing(UScitiesD3);
      return UScitiesD3;
    };
    r60 = dyn hclust3(p27, "ward.D");
    check L37() else D31();
  D31():
    deopt 118 [r60];
  L37():
    st `hcity.D` = r60;
    hclust4 = ldf hclust;
    check L38() else D32();
  D32():
    deopt 121 [];
  L38():
    p28 = prom<V +>{
      UScitiesD4 = ld UScitiesD;
      UScitiesD5 = force? UScitiesD4;
      checkMissing(UScitiesD5);
      return UScitiesD5;
    };
    r62 = dyn hclust4(p28, "ward.D2");
    check L39() else D33();
  D33():
    deopt 124 [r62];
  L39():
    st `hcity.D2` = r62;
    par2 = ldf par;
    check L40() else D34();
  D34():
    deopt 127 [];
  L40():
    p29 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r64):
      return r64;
    L1():
      c3 = ldf c in base;
      r65 = dyn c3(1.0, 2.0);
      goto L0(r65);
    L2():
      r63 = dyn base2(1.0, 2.0);
      goto L0(r63);
    };
    r67 = dyn par2[mfrow](p29);
    check L41() else D35();
  D35():
    deopt 130 [r67];
  L41():
    st opar = r67;
    plot5 = ldf plot;
    check L42() else D36();
  D36():
    deopt 133 [];
  L42():
    p30 = prom<V +>{
      hcity_D = ld `hcity.D`;
      hcity_D1 = force? hcity_D;
      checkMissing(hcity_D1);
      return hcity_D1;
    };
    p31 = prom<V +>{
      return -1.0;
    };
    r70 = dyn plot5[, hang](p30, p31);
    check L43() else D37();
  D37():
    deopt 137 [r70];
  L43():
    plot6 = ldf plot;
    check L44() else D38();
  D38():
    deopt 139 [];
  L44():
    p32 = prom<V +>{
      hcity_D2 = ld `hcity.D2`;
      hcity_D3 = force? hcity_D2;
      checkMissing(hcity_D3);
      return hcity_D3;
    };
    p33 = prom<V +>{
      return -1.0;
    };
    r73 = dyn plot6[, hang](p32, p33);
    check L45() else D39();
  D39():
    deopt 143 [r73];
  L45():
    par3 = ldf par;
    check L46() else D40();
  D40():
    deopt 145 [];
  L46():
    p34 = prom<V +>{
      opar2 = ld opar;
      opar3 = force? opar2;
      checkMissing(opar3);
      return opar3;
    };
    r75 = dyn par3(p34);
    check L47() else D41();
  D41():
    deopt 147 [r75];
  L47():
    popenv;
    return r75;
  }
}
fun inner1859567594(d, method, members) {
  (reg d:*, reg method:*, reg members:*) -+> V { var d:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, var members:*, reg members_isMissing:L, reg members_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg method1:*, reg method2:V, reg r3:V, reg c1:L, reg message:cls, reg r4:V, reg pmatch:cls, reg method3:*, reg method4:V, reg p:p(V +), reg METHODS:*, reg METHODS1:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg i_meth:*, reg i_meth1:V, reg is_na:cls, reg r11:V, reg c2:L, reg stop:cls, reg paste:cls, reg method5:*, reg method6:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg i_meth2:*, reg i_meth3:V, reg r17:V, reg c3:L, reg stop1:cls, reg paste1:cls, reg method7:*, reg method8:V, reg p4:p(V +), reg r19:V, reg p5:p(V +), reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg d1:*, reg d2:V, reg attr:cls, reg r27:V, reg as_integer:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg n:*, reg n1:V, reg c4:V, reg c5:L, reg stop2:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg n2:*, reg n3:V, reg is_na1:cls, reg r35:V, reg c6:L, reg c7:V, reg n4:*, reg n5:V, reg r36:V, reg c9:L, reg c10:V, reg c12:L, reg stop3:cls, reg r37:V, reg n6:*, reg n7:V, reg r39:V, reg c13:L, reg stop4:cls, reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg n8:*, reg n9:V, reg n10:*, reg n11:V, reg r44:V, reg r45:V, reg r46:V, reg as_integer1:cls, reg r47:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg d3:*, reg d4:V, reg length:cls, reg r50:V, reg len:*, reg len1:V, reg r51:V, reg c14:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg r53:V, reg d5:*, reg d6:V, reg length1:cls, reg r54:V, reg len2:*, reg len3:V, reg r55:V, reg c15:L, reg stop5:*, reg stop6:V, reg stop7:V, reg warning:*, reg warning1:V, reg stop8:cls, reg r56:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:V, reg members1:*, reg members2:V, reg c16:V, reg c17:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r60:V, reg r61:V, reg rep:cls, reg r62:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r64:V, reg r65:V, reg members3:*, reg members4:V, reg length2:cls, reg r66:V, reg n12:*, reg n13:V, reg r67:V, reg c18:L, reg stop9:cls, reg r68:V, reg l:*, reg storage_mode__:cls, reg r69:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r70:V, reg r71:V, reg C_hclust:*, reg C_hclust1:V, reg n14:*, reg n15:V, reg len4:*, reg len5:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r72:V, reg r73:V, reg i_meth4:*, reg i_meth5:V, reg as_integer2:cls, reg r74:V, reg integer:cls, reg n16:*, reg n17:V, reg p6:p(V +), reg r76:V, reg integer1:cls, reg n18:*, reg n19:V, reg p7:p(V +), reg r78:V, reg double:cls, reg n20:*, reg n21:V, reg p8:p(V +), reg r80:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r81:V, reg r82:V, reg members5:*, reg members6:V, reg as_double:cls, reg r83:V, reg integer2:cls, reg n22:*, reg n23:V, reg p9:p(V +), reg r85:V, reg double1:cls, reg n24:*, reg n25:V, reg p10:p(V +), reg r87:V, reg d7:*, reg d8:V, reg _Fortran:cls, reg r88:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r89:V, reg r90:V, reg C_hcass2:*, reg C_hcass3:V, reg n26:*, reg n27:V, reg hcl:*, reg hcl1:V, reg c19:L, reg hcl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r91:V, reg hcl4:*, reg hcl5:V, reg c20:L, reg hcl7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r92:V, reg integer3:cls, reg n28:*, reg n29:V, reg p11:p(V +), reg r94:V, reg integer4:cls, reg n30:*, reg n31:V, reg p12:p(V +), reg r96:V, reg integer5:cls, reg n32:*, reg n33:V, reg p13:p(V +), reg r98:V, reg _Fortran1:cls, reg r99:V, reg structure:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r100:V, reg r101:V, reg cbind:cls, reg hcass:*, reg hcass1:V, reg c21:L, reg hcass3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r102:V, reg c22:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg n34:*, reg n35:V, reg r103:V, reg r104:V, reg __:cls, reg r105:V, reg p14:p(V +), reg hcass4:*, reg hcass5:V, reg c23:L, reg hcass7:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r107:V, reg c24:L, reg dx13:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg n36:*, reg n37:V, reg r108:V, reg r109:V, reg __1:cls, reg r110:V, reg p15:p(V +), reg r112:V, reg hcl8:*, reg hcl9:V, reg c25:L, reg hcl11:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg r113:V, reg c26:L, reg dx19:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg n38:*, reg n39:V, reg r114:V, reg r115:V, reg __2:cls, reg r116:V, reg hcass8:*, reg hcass9:V, reg c27:L, reg hcass11:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg r117:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r118:V, reg r119:V, reg d9:*, reg d10:V, reg attr1:cls, reg r120:V, reg METHODS2:*, reg METHODS3:V, reg c28:L, reg METHODS5:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg i_meth6:*, reg i_meth7:V, reg __3:cls, reg r121:V, reg match_call:cls, reg r122:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r123:V, reg r124:V, reg d11:*, reg d12:V, reg attr2:cls, reg r125:V, reg list:cls, reg r126:V, reg p16:p(V +), reg r128:V |
    mkenv;
    st d = d;
    method_isMissing = missing.0(method);
    if method_isMissing then L0("complete") else L0(method);
  L0(method_orDefault):
    st method = method_orDefault;
    members_isMissing = missing.0(members);
    if members_isMissing then L1(NULL) else L1(members);
  L1(members_orDefault):
    st members = members_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L2(r1):
    st METHODS = r1;
    method1 = ld method;
    check L41() else D1();
  L38():
    c = ldf c in base;
    r2 = dyn c("ward.D", "single", "complete", "average", "mcquitty", "median", "centroid", "ward.D2");
    check L40() else D0();
  L39():
    r = dyn base("ward.D", "single", "complete", "average", "mcquitty", "median", "centroid", "ward.D2");
    goto L2(r);
  D0():
    deopt 11 [r2];
  D1():
    deopt 13 [method1];
  L40():
    goto L2(r2);
  L41():
    method2 = force? method1;
    checkMissing(method2);
    r3 = `==`(method2, "ward");
    c1 = `as.logical`(r3);
    if c1 then L42() else L3();
  L3():
    goto L4();
  L4():
    pmatch = ldf pmatch;
    check L46() else D4();
  L42():
    message = ldf message;
    check L43() else D2();
  D2():
    deopt 18 [];
  D4():
    deopt 27 [];
  L43():
    r4 = dyn message("The \"ward\" method has been renamed to \"ward.D\"; note new \"ward.D2\"");
    check L44() else D3();
  L46():
    p = prom<V +>{
      method3 = ld method;
      method4 = force? method3;
      checkMissing(method4);
      return method4;
    };
    p1 = prom<V +>{
      METHODS = ld METHODS;
      METHODS1 = force? METHODS;
      checkMissing(METHODS1);
      return METHODS1;
    };
    r8 = dyn pmatch(p, p1);
    check L47() else D5();
  D3():
    deopt 20 [r4];
  D5():
    deopt 30 [r8];
  L44():
    st method = "ward.D";
    goto L4();
  L47():
    st `i.meth` = r8;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L48() else L49();
  L5(r10):
    c2 = `as.logical`(r10);
    if c2 then L52() else L6();
  L48():
    i_meth = ld `i.meth`;
    check L50() else D6();
  L49():
    r9 = dyn base1(<sym i.meth>);
    goto L5(r9);
  D6():
    deopt 34 [i_meth];
  L6():
    goto L7();
  L7():
    i_meth2 = ld `i.meth`;
    check L56() else D10();
  L50():
    i_meth1 = force? i_meth;
    checkMissing(i_meth1);
    is_na = ldf `is.na` in base;
    r11 = dyn is_na(i_meth1);
    check L51() else D7();
  L52():
    stop = ldf stop;
    check L53() else D8();
  D7():
    deopt 37 [r11];
  D8():
    deopt 39 [];
  D10():
    deopt 45 [i_meth2];
  L51():
    goto L5(r11);
  L53():
    p3 = prom<V +>{
      paste = ldf paste;
      p2 = prom<V +>{
        method5 = ld method;
        method6 = force? method5;
        checkMissing(method6);
        return method6;
      };
      r13 = dyn paste("", p2);
      return r13;
    };
    r15 = dyn stop("invalid clustering method", p3);
    check L54() else D9();
  L56():
    i_meth3 = force? i_meth2;
    checkMissing(i_meth3);
    r17 = `==`(i_meth3, -1.0);
    c3 = `as.logical`(r17);
    if c3 then L57() else L8();
  D9():
    deopt 42 [r15];
  L8():
    goto L9();
  L9():
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L61() else L62();
  L54():
    goto L7();
  L57():
    stop1 = ldf stop;
    check L58() else D11();
  D11():
    deopt 50 [];
  L10(r24):
    st n = r24;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L68() else L69();
  L58():
    p5 = prom<V +>{
      paste1 = ldf paste;
      p4 = prom<V +>{
        method7 = ld method;
        method8 = force? method7;
        checkMissing(method8);
        return method8;
      };
      r19 = dyn paste1("", p4);
      return r19;
    };
    r21 = dyn stop1("ambiguous clustering method", p5);
    check L59() else D12();
  L61():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L63() else L64();
  L62():
    r23 = dyn base2(<lang attr(d, "Size")>);
    goto L10(r23);
  D12():
    deopt 53 [r21];
  L11(r26):
    as_integer = ldf `as.integer` in base;
    r28 = dyn as_integer(r26);
    check L67() else D15();
  L12(r30):
    c5 = `as.logical`(r30);
    if c5 then L71() else L13();
  L59():
    goto L9();
  L63():
    d1 = ld d;
    check L65() else D13();
  L64():
    r25 = dyn base3(<sym d>, "Size");
    goto L11(r25);
  L68():
    n = ld n;
    check L70() else D16();
  L69():
    r29 = dyn base4(<sym n>);
    goto L12(r29);
  D13():
    deopt 60 [d1];
  D15():
    deopt 66 [r28];
  D16():
    deopt 69 [n];
  L13():
    goto L14();
  L14():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  L65():
    d2 = force? d1;
    checkMissing(d2);
    attr = ldf attr in base;
    r27 = dyn attr(d2, "Size");
    check L66() else D14();
  L67():
    goto L10(r28);
  L70():
    n1 = force? n;
    checkMissing(n1);
    c4 = `==`(n1, NULL);
    goto L12(c4);
  L71():
    stop2 = ldf stop;
    check L72() else D17();
  D14():
    deopt 64 [r27];
  D17():
    deopt 73 [];
  L15(r34):
    c6 = `as.logical`(r34);
    if c6 then L16(c6) else L79();
  L66():
    goto L11(r27);
  L72():
    r31 = dyn stop2("invalid dissimilarities");
    check L73() else D18();
  L75():
    n2 = ld n;
    check L77() else D19();
  L76():
    r33 = dyn base5(<sym n>);
    goto L15(r33);
  D18():
    deopt 75 [r31];
  D19():
    deopt 80 [n2];
  L16(c7):
    c12 = `as.logical`(c7);
    if c12 then L82() else L17();
  L73():
    goto L14();
  L77():
    n3 = force? n2;
    checkMissing(n3);
    is_na1 = ldf `is.na` in base;
    r35 = dyn is_na1(n3);
    check L78() else D20();
  L79():
    n4 = ld n;
    check L80() else D21();
  D20():
    deopt 83 [r35];
  D21():
    deopt 84 [c6, n4];
  L17():
    goto L18();
  L18():
    n6 = ld n;
    check L86() else D24();
  L78():
    goto L15(r35);
  L80():
    n5 = force? n4;
    checkMissing(n5);
    r36 = `>`(n5, 65536);
    c9 = `as.logical`(r36);
    c10 = `||`(c6, c9);
    goto L16(c10);
  L82():
    stop3 = ldf stop;
    check L83() else D22();
  D22():
    deopt 90 [];
  D24():
    deopt 95 [n6];
  L83():
    r37 = dyn stop3("size cannot be NA nor exceed 65536");
    check L84() else D23();
  L86():
    n7 = force? n6;
    checkMissing(n7);
    r39 = `<`(n7, 2.0);
    c13 = `as.logical`(r39);
    if c13 then L87() else L19();
  D23():
    deopt 92 [r37];
  L19():
    goto L20();
  L20():
    sym6 = ldf `as.integer`;
    base6 = ldf `as.integer` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L91() else L92();
  L84():
    goto L18();
  L87():
    stop4 = ldf stop;
    check L88() else D25();
  D25():
    deopt 100 [];
  L21(r43):
    st len = r43;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L96() else L97();
  L88():
    r40 = dyn stop4("must have n >= 2 objects to cluster");
    check L89() else D26();
  L91():
    n8 = ld n;
    check L93() else D27();
  L92():
    r42 = dyn base6(<lang `/`(`*`(n, `(`(`-`(n, 1.0))), 2.0)>);
    goto L21(r42);
  D26():
    deopt 102 [r40];
  D27():
    deopt 107 [n8];
  L22(r49):
    len = ld len;
    check L100() else D32();
  L89():
    goto L20();
  L93():
    n9 = force? n8;
    checkMissing(n9);
    n10 = ld n;
    check L94() else D28();
  L96():
    d3 = ld d;
    check L98() else D30();
  L97():
    r48 = dyn base7(<sym d>);
    goto L22(r48);
  D28():
    deopt 108 [n9, n10];
  D30():
    deopt 120 [d3];
  D32():
    deopt 123 [r49, len];
  L94():
    n11 = force? n10;
    checkMissing(n11);
    r44 = `-`(n11, 1.0);
    r45 = `*`(n9, r44);
    r46 = `/`(r45, 2.0);
    as_integer1 = ldf `as.integer` in base;
    r47 = dyn as_integer1(r46);
    check L95() else D29();
  L98():
    d4 = force? d3;
    checkMissing(d4);
    length = ldf length in base;
    r50 = dyn length(d4);
    check L99() else D31();
  L100():
    len1 = force? len;
    checkMissing(len1);
    r51 = `!=`(r49, len1);
    c14 = `as.logical`(r51);
    if c14 then L101() else L23();
  D29():
    deopt 116 [r47];
  D31():
    deopt 123 [r50];
  L23():
    goto L27();
  L27():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L113() else L114();
  L95():
    goto L21(r47);
  L99():
    goto L22(r50);
  L101():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  L24(r53):
    len2 = ld len;
    check L106() else D35();
  L28(r59):
    c17 = `as.logical`(r59);
    if c17 then L116() else L29();
  L102():
    d5 = ld d;
    check L104() else D33();
  L103():
    r52 = dyn base8(<sym d>);
    goto L24(r52);
  L113():
    members1 = ld members;
    check L115() else D39();
  L114():
    r58 = dyn base9(<sym members>);
    goto L28(r58);
  D33():
    deopt 128 [d5];
  D35():
    deopt 131 [r53, len2];
  D39():
    deopt 144 [members1];
  L29():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L120() else L121();
  L31():
    l = ld d;
    storage_mode__ = ldf `storage.mode<-`;
    check L129() else D45();
  L104():
    d6 = force? d5;
    checkMissing(d6);
    length1 = ldf length in base;
    r54 = dyn length1(d6);
    check L105() else D34();
  L106():
    len3 = force? len2;
    checkMissing(len3);
    r55 = `<`(r53, len3);
    c15 = `as.logical`(r55);
    if c15 then L107() else L25();
  L115():
    members2 = force? members1;
    checkMissing(members2);
    c16 = `==`(members2, NULL);
    goto L28(c16);
  L116():
    sym10 = ldf rep;
    base10 = ldf rep in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L117() else L118();
  D34():
    deopt 131 [r54];
  D45():
    deopt 168 ["double", l, "double"];
  L25():
    warning = ld warning;
    check L110() else D37();
  L26(stop7):
    checkFun.0(stop7);
    stop8 = stop7 as cls;
    r56 = dyn stop8("dissimilarities of improper length");
    check L111() else D38();
  L30(r61):
    st members = r61;
    goto L31();
  L32(r65):
    n12 = ld n;
    check L124() else D42();
  L105():
    goto L24(r54);
  L107():
    stop5 = ld stop;
    check L108() else D36();
  L117():
    rep = ldf rep in base;
    r62 = dyn rep(1.0, <sym n>);
    goto L30(r62);
  L118():
    r60 = dyn base10(1.0, <sym n>);
    goto L30(r60);
  L120():
    members3 = ld members;
    check L122() else D40();
  L121():
    r64 = dyn base11(<sym members>);
    goto L32(r64);
  L129():
    r69 = dyn storage_mode__(l, NULL, "double");
    check L130() else D46();
  D36():
    deopt 134 [stop5];
  D37():
    deopt 136 [warning];
  D38():
    deopt 140 [r56];
  D40():
    deopt 153 [members3];
  D42():
    deopt 156 [r65, n12];
  D46():
    deopt 170 ["double", r69];
  L108():
    stop6 = force? stop5;
    checkMissing(stop6);
    goto L26(stop6);
  L110():
    warning1 = force? warning;
    checkMissing(warning1);
    goto L26(warning1);
  L111():
    goto L27();
  L122():
    members4 = force? members3;
    checkMissing(members4);
    length2 = ldf length in base;
    r66 = dyn length2(members4);
    check L123() else D41();
  L124():
    n13 = force? n12;
    checkMissing(n13);
    r67 = `!=`(r65, n13);
    c18 = `as.logical`(r67);
    if c18 then L125() else L33();
  L130():
    st d = r69;
    sym12 = ldf `.Fortran`;
    base12 = ldf `.Fortran` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L131() else L132();
  D41():
    deopt 156 [r66];
  L33():
    goto L31();
  L34(r71):
    st hcl = r71;
    sym15 = ldf `.Fortran`;
    base15 = ldf `.Fortran` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L156() else L157();
  L123():
    goto L32(r66);
  L125():
    stop9 = ldf stop;
    check L126() else D43();
  L131():
    C_hclust = ld C_hclust;
    check L133() else D47();
  L132():
    r70 = dyn base12[, n, len, method, ia, ib, crit, members, nn, disnn, diss](<sym C_hclust>, <sym n>, <sym len>, <lang as.integer(i.meth)>, <lang integer(n)>, <lang integer(n)>, <lang double(n)>, <lang as.double(members)>, <lang integer(n)>, <lang double(n)>, <sym d>);
    goto L34(r70);
  D43():
    deopt 160 [];
  D47():
    deopt 174 [C_hclust];
  L37(r90):
    st hcass = r90;
    structure = ldf structure;
    check L177() else D77();
  L126():
    r68 = dyn stop9("invalid length of members");
    check L127() else D44();
  L133():
    C_hclust1 = force? C_hclust;
    checkMissing(C_hclust1);
    n14 = ld n;
    check L134() else D48();
  L156():
    C_hcass2 = ld C_hcass2;
    check L158() else D66();
  L157():
    r89 = dyn base15[, n, ia, ib, order, iia, iib](<sym C_hcass2>, <sym n>, <lang `$`(hcl, ia)>, <lang `$`(hcl, ib)>, <lang integer(n)>, <lang integer(n)>, <lang integer(n)>);
    goto L37(r89);
  D44():
    deopt 162 [r68];
  D48():
    deopt 176 [n14];
  D66():
    deopt 229 [C_hcass2];
  D77():
    deopt 261 [];
  L127():
    goto L31();
  L134():
    n15 = force? n14;
    checkMissing(n15);
    len4 = ld len;
    check L135() else D49();
  L158():
    C_hcass3 = force? C_hcass2;
    checkMissing(C_hcass3);
    n26 = ld n;
    check L159() else D67();
  L177():
    p16 = prom<V +>{
      sym16 = ldf list;
      base16 = ldf list in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L5() else L6();
    L0(r101):
      return r101;
    L5():
      cbind = ldf cbind;
      p14 = prom<V +>{
        hcass = ld hcass;
        hcass1 = force? hcass;
        checkMissing(hcass1);
        c21 = `is.object`(hcass1);
        if c21 then L2() else L3(hcass1);
      L1(dx5):
        c22 = `is.object`(dx5);
        if c22 then L5() else L6(dx5);
      L2():
        dr4 = tryDispatchBuiltin.1("$", hcass1);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L4() else L3(dr4);
      L3(hcass3):
        r102 = `$`(hcass3, <sym iia>);
        goto L1(r102);
      L0(dx9):
        return dx9;
      L4():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L1(dx4);
      L5():
        dr6 = tryDispatchBuiltin.1("[", dx5);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L7() else L6(dr6);
      L6(dx7):
        n34 = ld n;
        n35 = force? n34;
        checkMissing(n35);
        r103 = `-`(n35, 1.0);
        r104 = `:`(1, r103);
        __ = ldf `[` in base;
        r105 = dyn __(dx7, r104);
        goto L0(r105);
      L7():
        dx8 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx8);
      };
      p15 = prom<V +>{
        hcass4 = ld hcass;
        hcass5 = force? hcass4;
        checkMissing(hcass5);
        c23 = `is.object`(hcass5);
        if c23 then L2() else L3(hcass5);
      L1(dx11):
        c24 = `is.object`(dx11);
        if c24 then L5() else L6(dx11);
      L2():
        dr8 = tryDispatchBuiltin.1("$", hcass5);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L4() else L3(dr8);
      L3(hcass7):
        r107 = `$`(hcass7, <sym iib>);
        goto L1(r107);
      L0(dx15):
        return dx15;
      L4():
        dx10 = getTryDispatchBuiltinValue(dr8);
        goto L1(dx10);
      L5():
        dr10 = tryDispatchBuiltin.1("[", dx11);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L7() else L6(dr10);
      L6(dx13):
        n36 = ld n;
        n37 = force? n36;
        checkMissing(n37);
        r108 = `-`(n37, 1.0);
        r109 = `:`(1, r108);
        __1 = ldf `[` in base;
        r110 = dyn __1(dx13, r109);
        goto L0(r110);
      L7():
        dx14 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx14);
      };
      r112 = dyn cbind(p14, p15);
      hcl8 = ld hcl;
      hcl9 = force? hcl8;
      checkMissing(hcl9);
      c25 = `is.object`(hcl9);
      if c25 then L8() else L9(hcl9);
    L6():
      r100 = dyn base16[merge, height, order, labels, method, call, `dist.method`](<lang cbind(`[`(`$`(hcass, iia), `:`(1, `(`(`-`(n, 1.0)))), `[`(`$`(hcass, iib), `:`(1, `(`(`-`(n, 1.0)))))>, <lang `[`(`$`(hcl, crit), `:`(1, `(`(`-`(n, 1.0))))>, <lang `$`(hcass, order)>, <lang attr(d, "Labels")>, <lang `[`(METHODS, i.meth)>, <lang match.call()>, <lang attr(d, "method")>);
      goto L0(r100);
    L7(dx17):
      c26 = `is.object`(dx17);
      if c26 then L11() else L12(dx17);
    L8():
      dr12 = tryDispatchBuiltin.1("$", hcl9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L10() else L9(dr12);
    L9(hcl11):
      r113 = `$`(hcl11, <sym crit>);
      goto L7(r113);
    L1(dx21):
      hcass8 = ld hcass;
      hcass9 = force? hcass8;
      checkMissing(hcass9);
      c27 = `is.object`(hcass9);
      if c27 then L15() else L16(hcass9);
    L10():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L7(dx16);
    L11():
      dr14 = tryDispatchBuiltin.1("[", dx17);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L13() else L12(dr14);
    L12(dx19):
      n38 = ld n;
      n39 = force? n38;
      checkMissing(n39);
      r114 = `-`(n39, 1.0);
      r115 = `:`(1, r114);
      __2 = ldf `[` in base;
      r116 = dyn __2(dx19, r115);
      goto L1(r116);
    L13():
      dx20 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx20);
    L14(dx23):
      sym17 = ldf attr;
      base17 = ldf attr in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L18() else L19();
    L15():
      dr16 = tryDispatchBuiltin.1("$", hcass9);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L17() else L16(dr16);
    L16(hcass11):
      r117 = `$`(hcass11, <sym order>);
      goto L14(r117);
    L2(r119):
      METHODS2 = ld METHODS;
      METHODS3 = force? METHODS2;
      checkMissing(METHODS3);
      c28 = `is.object`(METHODS3);
      if c28 then L20() else L21(METHODS3);
    L17():
      dx22 = getTryDispatchBuiltinValue(dr16);
      goto L14(dx22);
    L18():
      d9 = ld d;
      d10 = force? d9;
      checkMissing(d10);
      attr1 = ldf attr in base;
      r120 = dyn attr1(d10, "Labels");
      goto L2(r120);
    L19():
      r118 = dyn base17(<sym d>, "Labels");
      goto L2(r118);
    L3(dx25):
      match_call = ldf `match.call`;
      r122 = dyn match_call();
      sym18 = ldf attr;
      base18 = ldf attr in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L23() else L24();
    L20():
      dr18 = tryDispatchBuiltin.1("[", METHODS3);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L22() else L21(dr18);
    L21(METHODS5):
      i_meth6 = ld `i.meth`;
      i_meth7 = force? i_meth6;
      __3 = ldf `[` in base;
      r121 = dyn __3(METHODS5, i_meth7);
      goto L3(r121);
    L4(r124):
      list = ldf list in base;
      r126 = dyn list(r112, dx21, dx23, r119, dx25, r122, r124);
      goto L0(r126);
    L22():
      dx24 = getTryDispatchBuiltinValue(dr18);
      goto L3(dx24);
    L23():
      d11 = ld d;
      d12 = force? d11;
      checkMissing(d12);
      attr2 = ldf attr in base;
      r125 = dyn attr2(d12, "method");
      goto L4(r125);
    L24():
      r123 = dyn base18(<sym d>, "method");
      goto L4(r123);
    };
    r128 = dyn structure[, class](p16, "hclust");
    check L178() else D78();
  D49():
    deopt 179 [len4];
  D67():
    deopt 231 [n26];
  D78():
    deopt 265 [r128];
  L135():
    len5 = force? len4;
    checkMissing(len5);
    sym13 = ldf `as.integer`;
    base13 = ldf `as.integer` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L136() else L137();
  L159():
    n27 = force? n26;
    checkMissing(n27);
    hcl = ld hcl;
    check L160() else D68();
  L178():
    popenv;
    return r128;
  D68():
    deopt 234 [hcl];
  L35(r73):
    integer = ldf integer;
    check L140() else D52();
  L136():
    i_meth4 = ld `i.meth`;
    check L138() else D50();
  L137():
    r72 = dyn base13(<sym i.meth>);
    goto L35(r72);
  L160():
    hcl1 = force? hcl;
    checkMissing(hcl1);
    c19 = `is.object`(hcl1);
    if c19 then L162() else L163(hcl1);
  D50():
    deopt 184 [i_meth4];
  D52():
    deopt 190 [];
  L138():
    i_meth5 = force? i_meth4;
    checkMissing(i_meth5);
    as_integer2 = ldf `as.integer` in base;
    r74 = dyn as_integer2(i_meth5);
    check L139() else D51();
  L140():
    p6 = prom<V +>{
      n16 = ld n;
      n17 = force? n16;
      checkMissing(n17);
      return n17;
    };
    r76 = dyn integer(p6);
    check L141() else D53();
  L161(dx1):
    hcl4 = ld hcl;
    check L165() else D69();
  L162():
    dr = tryDispatchBuiltin.1("$", hcl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L164() else L163(dr);
  L163(hcl3):
    r91 = `$`(hcl3, <sym ia>);
    goto L161(r91);
  D51():
    deopt 187 [r74];
  D53():
    deopt 192 [r76];
  D69():
    deopt 238 [hcl4];
  L139():
    goto L35(r74);
  L141():
    integer1 = ldf integer;
    check L142() else D54();
  L164():
    dx = getTryDispatchBuiltinValue(dr);
    goto L161(dx);
  L165():
    hcl5 = force? hcl4;
    checkMissing(hcl5);
    c20 = `is.object`(hcl5);
    if c20 then L167() else L168(hcl5);
  D54():
    deopt 195 [];
  L142():
    p7 = prom<V +>{
      n18 = ld n;
      n19 = force? n18;
      checkMissing(n19);
      return n19;
    };
    r78 = dyn integer1(p7);
    check L143() else D55();
  L166(dx3):
    integer3 = ldf integer;
    check L170() else D70();
  L167():
    dr2 = tryDispatchBuiltin.1("$", hcl5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L169() else L168(dr2);
  L168(hcl7):
    r92 = `$`(hcl7, <sym ib>);
    goto L166(r92);
  D55():
    deopt 197 [r78];
  D70():
    deopt 243 [];
  L143():
    double = ldf double;
    check L144() else D56();
  L169():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L166(dx2);
  L170():
    p11 = prom<V +>{
      n28 = ld n;
      n29 = force? n28;
      checkMissing(n29);
      return n29;
    };
    r94 = dyn integer3(p11);
    check L171() else D71();
  D56():
    deopt 200 [];
  D71():
    deopt 245 [r94];
  L144():
    p8 = prom<V +>{
      n20 = ld n;
      n21 = force? n20;
      checkMissing(n21);
      return n21;
    };
    r80 = dyn double(p8);
    check L145() else D57();
  L171():
    integer4 = ldf integer;
    check L172() else D72();
  D57():
    deopt 202 [r80];
  D72():
    deopt 248 [];
  L145():
    sym14 = ldf `as.double`;
    base14 = ldf `as.double` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L146() else L147();
  L172():
    p12 = prom<V +>{
      n30 = ld n;
      n31 = force? n30;
      checkMissing(n31);
      return n31;
    };
    r96 = dyn integer4(p12);
    check L173() else D73();
  D73():
    deopt 250 [r96];
  L36(r82):
    integer2 = ldf integer;
    check L150() else D60();
  L146():
    members5 = ld members;
    check L148() else D58();
  L147():
    r81 = dyn base14(<sym members>);
    goto L36(r81);
  L173():
    integer5 = ldf integer;
    check L174() else D74();
  D58():
    deopt 206 [members5];
  D60():
    deopt 212 [];
  D74():
    deopt 253 [];
  L148():
    members6 = force? members5;
    checkMissing(members6);
    as_double = ldf `as.double` in base;
    r83 = dyn as_double(members6);
    check L149() else D59();
  L150():
    p9 = prom<V +>{
      n22 = ld n;
      n23 = force? n22;
      checkMissing(n23);
      return n23;
    };
    r85 = dyn integer2(p9);
    check L151() else D61();
  L174():
    p13 = prom<V +>{
      n32 = ld n;
      n33 = force? n32;
      checkMissing(n33);
      return n33;
    };
    r98 = dyn integer5(p13);
    check L175() else D75();
  D59():
    deopt 209 [r83];
  D61():
    deopt 214 [r85];
  D75():
    deopt 255 [r98];
  L149():
    goto L36(r83);
  L151():
    double1 = ldf double;
    check L152() else D62();
  L175():
    _Fortran1 = ldf `.Fortran` in base;
    r99 = dyn _Fortran1(C_hcass3, n27, dx1, dx3, r94, r96, r98);
    check L176() else D76();
  D62():
    deopt 217 [];
  D76():
    deopt 258 [r99];
  L152():
    p10 = prom<V +>{
      n24 = ld n;
      n25 = force? n24;
      checkMissing(n25);
      return n25;
    };
    r87 = dyn double1(p10);
    check L153() else D63();
  L176():
    goto L37(r99);
  D63():
    deopt 219 [r87];
  L153():
    d7 = ld d;
    check L154() else D64();
  D64():
    deopt 221 [d7];
  L154():
    d8 = force? d7;
    checkMissing(d8);
    _Fortran = ldf `.Fortran` in base;
    r88 = dyn _Fortran(C_hclust1, n15, len5, r73, r76, r78, r80, r82, r85, r87, d8);
    check L155() else D65();
  D65():
    deopt 225 [r88];
  L155():
    goto L34(r88);
  }
}