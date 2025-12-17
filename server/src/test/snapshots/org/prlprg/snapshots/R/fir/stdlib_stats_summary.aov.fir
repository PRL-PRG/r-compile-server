fun main() {
  () -+> V { reg r:cls, reg data_frame:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg r4:V, reg p:p(V +), reg ordered:cls, reg gl:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg ordered1:cls, reg gl1:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg aov:cls, reg __:cls, reg r15:V, reg p5:p(V +), reg CC:*, reg CC1:V, reg p6:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg rep:cls, reg r20:V, reg p7:p(V +), reg r22:V, reg summary:cls, reg CC_aov:*, reg CC_aov1:V, reg p8:p(V +), reg r24:V, reg summary1:cls, reg CC_aov2:*, reg CC_aov3:V, reg p9:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg list:cls, reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg list1:cls, reg r33:V, reg list2:cls, reg r34:V, reg p10:p(V +), reg r36:V, reg summary2:cls, reg CC_aov4:*, reg CC_aov5:V, reg p11:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg list3:cls, reg r42:V, reg list4:cls, reg r43:V, reg p12:p(V +), reg r45:V, reg summary3:cls, reg CC_aov6:*, reg CC_aov7:V, reg p13:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg r50:V, reg list5:cls, reg r51:V, reg list6:cls, reg r52:V, reg p14:p(V +), reg r54:V, reg summary4:cls, reg CC_aov8:*, reg CC_aov9:V, reg p15:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg r57:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r58:V, reg r59:V, reg list7:cls, reg r60:V, reg list8:cls, reg r61:V, reg p16:p(V +), reg r63:V |
    mkenv;
    r = clos inner3994535134;
    st `summary.aov` = r;
    data_frame = ldf `data.frame`;
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
      r4 = `/`(r2, 12.0);
      return r4;
    L1():
      c = ldf c in base;
      r3 = dyn c(449.0, 413.0, 326.0, 409.0, 358.0, 291.0, 341.0, 278.0, 312.0);
      goto L0(r3);
    L2():
      r1 = dyn base(449.0, 413.0, 326.0, 409.0, 358.0, 291.0, 341.0, 278.0, 312.0);
      goto L0(r1);
    };
    p2 = prom<V +>{
      ordered = ldf ordered;
      p1 = prom<V +>{
        gl = ldf gl;
        r6 = dyn gl(3.0, 3.0);
        return r6;
      };
      r8 = dyn ordered(p1);
      return r8;
    };
    p4 = prom<V +>{
      ordered1 = ldf ordered;
      p3 = prom<V +>{
        gl1 = ldf gl;
        r10 = dyn gl1(3.0, 1.0, 9.0);
        return r10;
      };
      r12 = dyn ordered1(p3);
      return r12;
    };
    r14 = dyn data_frame[y, P, N](p, p2, p4);
    check L1() else D1();
  D1():
    deopt 11 [r14];
  L1():
    st CC = r14;
    aov = ldf aov;
    check L2() else D2();
  D2():
    deopt 14 [];
  L2():
    p5 = prom<V +>{
      __ = ldf `~` in base;
      r15 = dyn __(<sym y>, <lang `*`(N, P)>);
      return r15;
    };
    p6 = prom<V +>{
      CC = ld CC;
      CC1 = force? CC;
      checkMissing(CC1);
      return CC1;
    };
    p7 = prom<V +>{
      sym1 = ldf rep;
      base1 = ldf rep in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      rep = ldf rep in base;
      r20 = dyn rep(12.0, 9.0);
      goto L0(r20);
    L2():
      r18 = dyn base1(12.0, 9.0);
      goto L0(r18);
    };
    r22 = dyn aov[, data, weights](p5, p6, p7);
    check L3() else D3();
  D3():
    deopt 20 [r22];
  L3():
    st `CC.aov` = r22;
    summary = ldf summary;
    check L4() else D4();
  D4():
    deopt 23 [];
  L4():
    p8 = prom<V +>{
      CC_aov = ld `CC.aov`;
      CC_aov1 = force? CC_aov;
      checkMissing(CC_aov1);
      return CC_aov1;
    };
    r24 = dyn summary(p8);
    check L5() else D5();
  D5():
    deopt 25 [r24];
  L5():
    summary1 = ldf summary;
    check L6() else D6();
  D6():
    deopt 27 [];
  L6():
    p9 = prom<V +>{
      CC_aov2 = ld `CC.aov`;
      CC_aov3 = force? CC_aov2;
      checkMissing(CC_aov3);
      return CC_aov3;
    };
    p10 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r27):
      return r27;
    L3():
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L4():
      r26 = dyn base2[N, P](<lang list(L=1.0, Q=2.0)>, <lang list(L=1.0, Q=2.0)>);
      goto L0(r26);
    L1(r29):
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L7() else L8();
    L5():
      list = ldf list in base;
      r30 = dyn list(1.0, 2.0);
      goto L1(r30);
    L6():
      r28 = dyn base3[L, Q](1.0, 2.0);
      goto L1(r28);
    L2(r32):
      list2 = ldf list in base;
      r34 = dyn list2(r29, r32);
      goto L0(r34);
    L7():
      list1 = ldf list in base;
      r33 = dyn list1(1.0, 2.0);
      goto L2(r33);
    L8():
      r31 = dyn base4[L, Q](1.0, 2.0);
      goto L2(r31);
    };
    r36 = dyn summary1[, split](p9, p10);
    check L7() else D7();
  D7():
    deopt 31 [r36];
  L7():
    summary2 = ldf summary;
    check L8() else D8();
  D8():
    deopt 33 [];
  L8():
    p11 = prom<V +>{
      CC_aov4 = ld `CC.aov`;
      CC_aov5 = force? CC_aov4;
      checkMissing(CC_aov5);
      return CC_aov5;
    };
    p12 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r39):
      return r39;
    L2():
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r38 = dyn base5[`N:P`](<lang list(L.L=1.0, Q=`:`(2.0, 4.0))>);
      goto L0(r38);
    L1(r41):
      list4 = ldf list in base;
      r43 = dyn list4(r41);
      goto L0(r43);
    L4():
      list3 = ldf list in base;
      r42 = dyn list3(1.0, <int 2, 3, 4>);
      goto L1(r42);
    L5():
      r40 = dyn base6[`L.L`, Q](1.0, <lang `:`(2.0, 4.0)>);
      goto L1(r40);
    };
    r45 = dyn summary2[, split](p11, p12);
    check L9() else D9();
  D9():
    deopt 37 [r45];
  L9():
    summary3 = ldf summary;
    check L10() else D10();
  D10():
    deopt 39 [];
  L10():
    p13 = prom<V +>{
      CC_aov6 = ld `CC.aov`;
      CC_aov7 = force? CC_aov6;
      checkMissing(CC_aov7);
      return CC_aov7;
    };
    p14 = prom<V +>{
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r48):
      return r48;
    L2():
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r47 = dyn base7[P](<lang list(lin=1.0, quad=2.0)>);
      goto L0(r47);
    L1(r50):
      list6 = ldf list in base;
      r52 = dyn list6(r50);
      goto L0(r52);
    L4():
      list5 = ldf list in base;
      r51 = dyn list5(1.0, 2.0);
      goto L1(r51);
    L5():
      r49 = dyn base8[lin, quad](1.0, 2.0);
      goto L1(r49);
    };
    r54 = dyn summary3[, split](p13, p14);
    check L11() else D11();
  D11():
    deopt 43 [r54];
  L11():
    summary4 = ldf summary;
    check L12() else D12();
  D12():
    deopt 45 [];
  L12():
    p15 = prom<V +>{
      CC_aov8 = ld `CC.aov`;
      CC_aov9 = force? CC_aov8;
      checkMissing(CC_aov9);
      return CC_aov9;
    };
    p16 = prom<V +>{
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L2() else L3();
    L0(r57):
      return r57;
    L2():
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L4() else L5();
    L3():
      r56 = dyn base9[P](<lang list(lin=1.0, quad=2.0)>);
      goto L0(r56);
    L1(r59):
      list8 = ldf list in base;
      r61 = dyn list8(r59);
      goto L0(r61);
    L4():
      list7 = ldf list in base;
      r60 = dyn list7(1.0, 2.0);
      goto L1(r60);
    L5():
      r58 = dyn base10[lin, quad](1.0, 2.0);
      goto L1(r58);
    };
    r63 = dyn summary4[, split, `expand.split`](p15, p16, FALSE);
    check L13() else D13();
  D13():
    deopt 51 [r63];
  L13():
    popenv;
    return r63;
  }
}
fun inner3994535134(object, intercept, split, `expand.split`, `keep.zero.df`, `...`) {
  (reg object:*, reg intercept:*, reg split:*, reg expand_split:*, reg keep_zero_df:*, reg ddd:dots) -+> V { var object:*, var intercept:*, reg intercept_isMissing:L, reg intercept_orDefault:*, var split:*, var `expand.split`:*, reg expand_split_isMissing:L, reg expand_split_orDefault:*, var `keep.zero.df`:*, reg keep_zero_df_isMissing:L, reg keep_zero_df_orDefault:*, var `...`:dots?, reg r:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg object5:*, reg object6:V, reg c2:L, reg dx7:V, reg object8:V, reg dr4:V, reg dc2:L, reg dx9:V, reg dx10:V, reg dx11:V, reg r2:V, reg c3:L, reg dx14:V, reg dx15:V, reg dr6:V, reg dc3:L, reg dx17:V, reg dx18:V, reg dx19:V, reg r3:V, reg c4:L, reg dx22:V, reg dx23:V, reg dr8:V, reg dc4:L, reg dx25:V, reg dx26:V, reg dx27:V, reg object9:*, reg object10:V, reg c5:L, reg dx30:V, reg dx31:V, reg r5:I, reg object12:V, reg dr10:V, reg dc5:L, reg dx34:V, reg dx35:V, reg dx36:V, reg r7:I, reg dx37:V, reg r8:V, reg r9:V, reg __:cls, reg r10:V, reg __1:cls, reg r11:V, reg unique:cls, reg asgn:*, reg asgn1:V, reg p:p(V +), reg r13:V, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg uasgn:*, reg uasgn1:V, reg length:cls, reg r16:V, reg object13:*, reg object14:V, reg c6:L, reg object16:V, reg dr12:V, reg dc6:L, reg dx38:V, reg dx39:V, reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg effects:*, reg effects1:V, reg c7:V, reg r20:V, reg c8:L, reg as_matrix:cls, reg effects2:*, reg effects3:V, reg p1:p(V +), reg r22:V, reg c9:L, reg r24:V, reg dr14:V, reg dc7:L, reg dx40:V, reg dx41:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r29:V, reg asgn2:*, reg asgn3:V, reg r30:I, reg __2:cls, reg r31:V, reg object17:*, reg object18:V, reg c10:L, reg object20:V, reg dr16:V, reg dc8:L, reg dx43:V, reg dx44:V, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg object21:*, reg object22:V, reg c11:L, reg object24:V, reg dr18:V, reg dc9:L, reg dx45:V, reg dx46:V, reg r37:V, reg attr:cls, reg r38:V, reg c12:cls, reg r39:V, reg as_matrix1:cls, reg object25:*, reg object26:V, reg c13:L, reg object28:V, reg dr20:V, reg dc10:L, reg dx47:V, reg dx48:V, reg r40:V, reg p2:p(V +), reg r42:V, reg as_matrix2:cls, reg object29:*, reg object30:V, reg c14:L, reg object32:V, reg dr22:V, reg dc11:L, reg dx49:V, reg dx50:V, reg r43:V, reg p3:p(V +), reg r45:V, reg object33:*, reg object34:V, reg c15:L, reg object36:V, reg dr24:V, reg dc12:L, reg dx51:V, reg dx52:V, reg r46:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r47:V, reg r48:V, reg wt:*, reg wt1:V, reg c16:V, reg r49:V, reg c17:L, reg resid:*, reg resid1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg resid4:V, reg r51:V, reg wt2:*, reg wt3:V, reg r52:V, reg r53:V, reg NCOL:cls, reg resid5:*, reg resid6:V, reg p4:p(V +), reg r56:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg r58:V, reg nresp:*, reg nresp1:V, reg vector:cls, reg r59:V, reg nresp2:*, reg nresp3:V, reg r60:V, reg c18:L, reg character:cls, reg nresp4:*, reg nresp5:V, reg p5:p(V +), reg r62:V, reg l:*, reg names__:cls, reg r63:V, reg nresp6:*, reg nresp7:V, reg r64:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c19:L, reg x:V, reg colnames:cls, reg resid7:*, reg resid8:V, reg p6:p(V +), reg r66:V, reg c20:L, reg i6:I, reg r68:V, reg dr26:V, reg dc13:L, reg dx53:V, reg i8:I, reg dx54:V, reg y:*, reg y1:V, reg __3:cls, reg r69:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r70:V, reg i11:I, reg r71:V, reg cn:*, reg cn1:V, reg c21:V, reg c22:L, reg i12:I, reg c23:V, reg cn2:*, reg cn3:V, reg r72:V, reg c25:L, reg c26:V, reg c28:L, reg y2:*, reg y3:V, reg i17:I, reg paste:cls, reg cn4:*, reg cn5:V, reg p7:p(V +), reg r74:V, reg l2:*, reg names:cls, reg r75:V, reg c29:L, reg i19:I, reg r78:V, reg l4:*, reg r79:V, reg dr28:V, reg dc14:L, reg dx55:V, reg i21:I, reg r81:V, reg l6:*, reg dx56:V, reg y5:*, reg y6:V, reg ___:cls, reg r82:V, reg names__1:cls, reg r83:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r84:V, reg r85:V, reg effects4:*, reg effects5:V, reg c30:V, reg r86:V, reg c31:L, reg c33:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r87:V, reg c36:L, reg r88:V, reg missing:cls, reg r89:V, reg r90:V, reg c37:L, reg c38:V, reg c40:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r91:V, reg r92:V, reg split1:*, reg split2:V, reg names1:cls, reg r93:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r94:V, reg r95:V, reg object37:*, reg object38:V, reg c41:L, reg object40:V, reg dr30:V, reg dc15:L, reg dx57:V, reg dx58:V, reg r96:V, reg c42:V, reg r97:V, reg c43:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r98:V, reg r99:V, reg split3:*, reg split4:V, reg is_list:cls, reg r100:V, reg r101:V, reg c44:L, reg stop:cls, reg r102:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r104:V, reg r105:V, reg _in_:cls, reg ns:*, reg ns1:V, reg p8:p(V +), reg nmeffect:*, reg nmeffect1:V, reg p9:p(V +), reg r108:V, reg all:cls, reg r109:V, reg r110:V, reg c45:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r111:V, reg r112:V, reg _in_1:cls, reg ns2:*, reg ns3:V, reg p10:p(V +), reg nmeffect2:*, reg nmeffect3:V, reg p11:p(V +), reg r115:V, reg r116:V, reg sum:cls, reg r117:V, reg stop1:cls, reg sprintf:cls, reg ngettext:cls, reg na:*, reg na1:V, reg p12:p(V +), reg r119:V, reg p13:p(V +), reg paste1:cls, reg sQuote:cls, reg ns4:*, reg ns5:V, reg c46:L, reg ns7:V, reg dr32:V, reg dc16:L, reg dx59:V, reg dx60:V, reg na2:*, reg na3:V, reg __4:cls, reg r121:V, reg p14:p(V +), reg r123:V, reg p15:p(V +), reg r125:V, reg p16:p(V +), reg r127:V, reg p17:p(V +), reg r129:V, reg r130:V, reg expand_split1:*, reg expand_split2:V, reg c47:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r132:V, reg r133:V, reg coef:cls, reg object41:*, reg object42:V, reg p18:p(V +), reg r135:V, reg names2:cls, reg r136:V, reg splitInteractions:cls, reg split5:*, reg split6:V, reg p19:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r138:V, reg r139:V, reg Terms:*, reg Terms1:V, reg attr1:cls, reg r140:V, reg p20:p(V +), reg nmeffect4:*, reg nmeffect5:V, reg p21:p(V +), reg asgn4:*, reg asgn5:V, reg p22:p(V +), reg df_names:*, reg df_names1:V, reg p23:p(V +), reg r145:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r146:V, reg r147:V, reg split7:*, reg split8:V, reg names3:cls, reg r148:V, reg r149:V, reg nresp8:*, reg nresp9:V, reg r151:V, reg s1:V, reg l7:I, reg i23:I, reg i24:I, reg i25:I, reg c48:L, reg x1:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r152:V, reg i30:I, reg r153:V, reg effects6:*, reg effects7:V, reg c49:V, reg c50:L, reg numeric:cls, reg r154:V, reg character1:cls, reg r155:V, reg i33:I, reg numeric1:cls, reg r157:V, reg character2:cls, reg r158:V, reg seq:cls, reg nterms:*, reg nterms1:V, reg p24:p(V +), reg r160:V, reg s2:V, reg l8:I, reg i34:I, reg i35:I, reg i36:I, reg i37:I, reg c51:L, reg x2:V, reg asgn6:*, reg asgn7:V, reg uasgn2:*, reg uasgn3:V, reg c52:L, reg i44:I, reg i45:I, reg asgn9:V, reg uasgn5:V, reg dr34:V, reg dc17:L, reg dx61:V, reg i48:I, reg i49:I, reg asgn11:V, reg dx62:V, reg i50:*, reg i51:V, reg __5:cls, reg r161:V, reg r162:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r163:V, reg i56:I, reg i57:I, reg r164:V, reg df:*, reg df1:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r165:V, reg i62:I, reg i63:I, reg r166:V, reg ai:*, reg ai1:V, reg sum1:cls, reg r167:V, reg c53:cls, reg r168:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r169:V, reg i68:I, reg i69:I, reg r170:V, reg ss:*, reg ss1:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r171:V, reg i74:I, reg i75:I, reg r172:V, reg effects8:*, reg effects9:V, reg c54:L, reg i78:I, reg i79:I, reg effects11:V, reg dr36:V, reg dc18:L, reg dx63:V, reg i82:I, reg i83:I, reg dx64:V, reg ai2:*, reg ai3:V, reg y7:*, reg y8:V, reg __6:cls, reg r173:V, reg r174:V, reg sum2:cls, reg r175:V, reg c55:cls, reg r176:V, reg nmeffect6:*, reg nmeffect7:V, reg c56:L, reg i86:I, reg i87:I, reg nmeffect9:V, reg dr38:V, reg dc19:L, reg dx65:V, reg i90:I, reg i91:I, reg dx66:V, reg uasgn6:*, reg uasgn7:V, reg c57:L, reg i94:I, reg i95:I, reg nmeffect11:V, reg r178:R, reg uasgn9:V, reg dr40:V, reg dc20:L, reg dx67:V, reg i98:I, reg i99:I, reg nmeffect13:V, reg r180:R, reg dx68:V, reg i100:*, reg i101:V, reg __7:cls, reg r181:V, reg r182:V, reg __8:cls, reg r183:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r184:V, reg i106:I, reg i107:I, reg r185:V, reg nmrows:*, reg nmrows1:V, reg nmi:*, reg nmi1:V, reg c58:cls, reg r186:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r187:V, reg i112:I, reg i113:I, reg r188:V, reg missing1:cls, reg r189:V, reg r190:V, reg c59:L, reg i116:I, reg i117:I, reg c61:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r191:V, reg i122:I, reg i123:I, reg c64:L, reg r192:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r193:V, reg i128:I, reg i129:I, reg c67:L, reg r194:V, reg nmi2:*, reg nmi3:V, reg ns8:*, reg ns9:V, reg match:cls, reg r195:V, reg is_na:cls, reg r196:V, reg r197:V, reg c68:L, reg c69:V, reg c71:L, reg sym28:cls, reg base28:cls, reg guard28:L, reg r198:V, reg i140:I, reg i141:I, reg r199:V, reg df2:*, reg df3:V, reg lengths:cls, reg split9:*, reg split10:V, reg c72:L, reg split12:V, reg dr42:V, reg dc21:L, reg dx69:V, reg dx70:V, reg int:*, reg int1:V, reg __9:cls, reg r200:V, reg p25:p(V +), reg r202:V, reg c73:cls, reg r203:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r204:V, reg i146:I, reg i147:I, reg r205:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r206:V, reg i152:I, reg i153:I, reg r207:V, reg split13:*, reg split14:V, reg c74:L, reg i156:I, reg i157:I, reg split16:V, reg dr44:V, reg dc22:L, reg dx71:V, reg i160:I, reg i161:I, reg dx72:V, reg int2:*, reg int3:V, reg __10:cls, reg r208:V, reg names4:cls, reg r209:V, reg c75:V, reg c76:L, reg paste2:cls, reg sym31:cls, reg base31:cls, reg guard31:L, reg r210:V, reg r211:V, reg split17:*, reg split18:V, reg c77:L, reg split20:V, reg dr46:V, reg dc23:L, reg dx73:V, reg dx74:V, reg int4:*, reg int5:V, reg __11:cls, reg r212:V, reg r213:I, reg p26:p(V +), reg r215:V, reg i166:I, reg i167:I, reg sym32:cls, reg base32:cls, reg guard32:L, reg r217:V, reg i172:I, reg i173:I, reg r218:V, reg ss2:*, reg ss3:V, reg unlist:cls, reg lapply:cls, reg split21:*, reg split22:V, reg c78:L, reg split24:V, reg dr48:V, reg dc24:L, reg dx75:V, reg dx76:V, reg int6:*, reg int7:V, reg __12:cls, reg r219:V, reg p27:p(V +), reg r221:cls, reg p28:p(V +), reg effects12:*, reg effects13:V, reg c79:L, reg effects15:V, reg dr50:V, reg dc25:L, reg dx77:V, reg dx78:V, reg ai4:*, reg ai5:V, reg y9:*, reg y10:V, reg __13:cls, reg r223:V, reg p29:p(V +), reg r225:V, reg p30:p(V +), reg r227:V, reg c80:cls, reg r228:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r229:V, reg i178:I, reg i179:I, reg r230:V, reg nmrows2:*, reg nmrows3:V, reg paste3:cls, reg nmi4:*, reg nmi5:V, reg p31:p(V +), reg nms:*, reg nms1:V, reg p32:p(V +), reg r233:V, reg c81:cls, reg r234:V, reg i180:I, reg i181:I, reg rdf:*, reg rdf1:V, reg r236:V, reg c82:L, reg sym34:cls, reg base34:cls, reg guard34:L, reg r237:V, reg i186:I, reg r238:V, reg df4:*, reg df5:V, reg rdf2:*, reg rdf3:V, reg c83:cls, reg r239:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r240:V, reg i189:I, reg r241:V, reg ss4:*, reg ss5:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r242:V, reg i192:I, reg r243:V, reg resid9:*, reg resid10:V, reg c84:L, reg i194:I, reg resid12:V, reg dr52:V, reg dc26:L, reg dx79:V, reg i196:I, reg dx80:V, reg y11:*, reg y12:V, reg __14:cls, reg r244:V, reg r245:V, reg sum3:cls, reg r246:V, reg c85:cls, reg r247:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r248:V, reg i199:I, reg r249:V, reg nmrows4:*, reg nmrows5:V, reg c86:cls, reg r250:V, reg i200:I, reg sym38:cls, reg base38:cls, reg guard38:L, reg r252:V, reg i203:I, reg r253:V, reg df6:*, reg df7:V, reg length1:cls, reg r254:V, reg ifelse:cls, reg df8:*, reg df9:V, reg r255:V, reg p33:p(V +), reg ss6:*, reg ss7:V, reg df10:*, reg df11:V, reg r257:V, reg p34:p(V +), reg r259:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r260:V, reg i206:I, reg r261:V, reg df12:*, reg df13:V, reg ss8:*, reg ss9:V, reg ms:*, reg ms1:V, reg list:cls, reg r262:V, reg rdf4:*, reg rdf5:V, reg r263:V, reg c87:L, reg ms2:*, reg ms3:V, reg ms4:*, reg ms5:V, reg c88:L, reg i210:I, reg ms8:V, reg ms9:V, reg dr54:V, reg dc27:L, reg dx81:V, reg i212:I, reg ms11:V, reg dx82:V, reg nt:*, reg nt1:V, reg __15:cls, reg r264:V, reg r265:V, reg pf:cls, reg TT:*, reg TT1:V, reg p35:p(V +), reg df14:*, reg df15:V, reg p36:p(V +), reg rdf6:*, reg rdf7:V, reg p37:p(V +), reg r269:V, reg l9:*, reg c89:L, reg i214:I, reg r271:L, reg l11:*, reg dr56:V, reg dc28:L, reg dx83:V, reg i216:I, reg r273:L, reg dx84:V, reg nt2:*, reg nt3:V, reg ___1:cls, reg r274:V, reg l12:*, reg c90:L, reg i218:I, reg r276:L, reg l14:*, reg dr58:V, reg dc29:L, reg dx85:V, reg i220:I, reg dx86:V, reg nt4:*, reg nt5:V, reg ___2:cls, reg r279:V, reg TT2:*, reg TT3:V, reg l15:*, reg c91:L, reg i222:I, reg TT5:V, reg l17:*, reg dr60:V, reg dc30:L, reg dx87:V, reg i224:I, reg dx88:V, reg r280:V, reg TP:*, reg TP1:V, reg l18:*, reg c92:L, reg i226:I, reg TP3:V, reg l20:*, reg dr62:V, reg dc31:L, reg dx89:V, reg i228:I, reg TP5:V, reg dx90:V, reg r281:V, reg i229:I, reg sym40:cls, reg base40:cls, reg guard40:L, reg r282:V, reg i232:I, reg r283:V, reg c93:cls, reg r284:V, reg l21:*, reg class__:cls, reg r285:V, reg format:cls, reg nmrows6:*, reg nmrows7:V, reg p38:p(V +), reg r287:V, reg l22:*, reg attr__:cls, reg r288:V, reg keep_zero_df1:*, reg keep_zero_df2:V, reg r289:V, reg c94:L, reg x3:*, reg x4:V, reg c95:L, reg i236:I, reg x6:V, reg dr64:V, reg dc32:L, reg dx91:V, reg i238:I, reg dx92:V, reg df16:*, reg df17:V, reg r290:V, reg __16:cls, reg r291:V, reg i239:I, reg pmatch:cls, reg row_names:cls, reg x7:*, reg x8:V, reg p39:p(V +), reg r293:V, reg p40:p(V +), reg r295:V, reg intercept1:*, reg intercept2:V, reg r296:V, reg c96:L, reg i241:I, reg c98:V, reg pm:*, reg pm1:V, reg r297:V, reg c99:L, reg c100:V, reg c102:L, reg x9:*, reg x10:V, reg c103:L, reg i246:I, reg x12:V, reg dr66:V, reg dc33:L, reg dx94:V, reg i248:I, reg dx95:V, reg pm2:*, reg pm3:V, reg r298:V, reg __17:cls, reg r299:V, reg i249:I, reg x13:*, reg x14:V, reg l23:*, reg c104:L, reg i251:I, reg x16:V, reg l25:*, reg dr68:V, reg dc34:L, reg dx97:V, reg i253:I, reg dx98:V, reg y13:*, reg y14:V, reg ____:cls, reg r300:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r301:V, reg r302:V, reg c105:cls, reg r303:V, reg l26:*, reg class__1:cls, reg r304:V, reg object43:*, reg object44:V, reg c106:L, reg object46:V, reg dr70:V, reg dc35:L, reg dx99:V, reg dx100:V, reg r305:V, reg l27:*, reg attr__1:cls, reg r306:V, reg ans:*, reg ans1:V |
    mkenv;
    st object = object;
    intercept_isMissing = missing.0(intercept);
    if intercept_isMissing then L0(FALSE) else L0(intercept);
  L0(intercept_orDefault):
    st intercept = intercept_orDefault;
    st split = split;
    expand_split_isMissing = missing.0(expand_split);
    if expand_split_isMissing then L1(TRUE) else L1(expand_split);
  L1(expand_split_orDefault):
    st `expand.split` = expand_split_orDefault;
    keep_zero_df_isMissing = missing.0(keep_zero_df);
    if keep_zero_df_isMissing then L2(TRUE) else L2(keep_zero_df);
  L2(keep_zero_df_orDefault):
    st `keep.zero.df` = keep_zero_df_orDefault;
    st `...` = ddd;
    r = clos inner1132925111;
    st splitInteractions = r;
    object1 = ld object;
    check L102() else D0();
  D0():
    deopt 3 [object1];
  L102():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L104() else L105(object2);
  L103(dx1):
    c1 = `is.object`(dx1);
    if c1 then L107() else L108(dx1);
  L104():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L106() else L105(dr);
  L105(object4):
    r1 = `$`(object4, <sym assign>);
    goto L103(r1);
  L3(dx5):
    st asgn = dx5;
    unique = ldf unique;
    check L127() else D3();
  L106():
    dx = getTryDispatchBuiltinValue(dr);
    goto L103(dx);
  L107():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L109() else L108(dr2);
  L108(dx3):
    object5 = ld object;
    check L110() else D1();
  D1():
    deopt 6 [dx3, object5];
  D3():
    deopt 19 [];
  L109():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx4);
  L110():
    object6 = force? object5;
    checkMissing(object6);
    c2 = `is.object`(object6);
    if c2 then L112() else L113(dx3, object6);
  L127():
    p = prom<V +>{
      asgn = ld asgn;
      asgn1 = force? asgn;
      checkMissing(asgn1);
      return asgn1;
    };
    r13 = dyn unique(p);
    check L128() else D4();
  D4():
    deopt 21 [r13];
  L111(dx10, dx11):
    c3 = `is.object`(dx11);
    if c3 then L116() else L117(dx10, dx11);
  L112():
    dr4 = tryDispatchBuiltin.1("$", object6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L114() else L113(dx3, dr4);
  L113(dx7, object8):
    r2 = `$`(object8, <sym qr>);
    goto L111(dx7, r2);
  L128():
    st uasgn = r13;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L129() else L130();
  L5(r15):
    st nterms = r15;
    object13 = ld object;
    check L133() else D7();
  L114():
    dx9 = getTryDispatchBuiltinValue(dr4);
    goto L111(dx3, dx9);
  L115(dx18, dx19):
    c4 = `is.object`(dx19);
    if c4 then L119() else L120(dx18, dx19);
  L116():
    dr6 = tryDispatchBuiltin.1("$", dx11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L118() else L117(dx10, dr6);
  L117(dx14, dx15):
    r3 = `$`(dx15, <sym pivot>);
    goto L115(dx14, r3);
  L129():
    uasgn = ld uasgn;
    check L131() else D5();
  L130():
    r14 = dyn base(<sym uasgn>);
    goto L5(r14);
  D5():
    deopt 25 [uasgn];
  D7():
    deopt 30 [object13];
  L4(dx26, dx27):
    __1 = ldf `[` in base;
    r11 = dyn __1(dx26, dx27);
    goto L3(r11);
  L118():
    dx17 = getTryDispatchBuiltinValue(dr6);
    goto L115(dx10, dx17);
  L119():
    dr8 = tryDispatchBuiltin.1("[", dx19);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L121() else L120(dx18, dr8);
  L120(dx22, dx23):
    object9 = ld object;
    check L122() else D2();
  L131():
    uasgn1 = force? uasgn;
    checkMissing(uasgn1);
    length = ldf length in base;
    r16 = dyn length(uasgn1);
    check L132() else D6();
  L133():
    object14 = force? object13;
    checkMissing(object14);
    c6 = `is.object`(object14);
    if c6 then L135() else L136(object14);
  D2():
    deopt 11 [dx22, dx23, 1, object9];
  D6():
    deopt 28 [r16];
  L121():
    dx25 = getTryDispatchBuiltinValue(dr8);
    goto L4(dx18, dx25);
  L122():
    object10 = force? object9;
    checkMissing(object10);
    c5 = `is.object`(object10);
    if c5 then L124() else L125(dx22, dx23, 1, object10);
  L132():
    goto L5(r16);
  L134(dx39):
    st effects = dx39;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L138() else L139();
  L135():
    dr12 = tryDispatchBuiltin.1("$", object14);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L137() else L136(dr12);
  L136(object16):
    r17 = `$`(object16, <sym effects>);
    goto L134(r17);
  L6(r19):
    r20 = `!`(r19);
    c8 = `as.logical`(r20);
    if c8 then L141() else L7();
  L123(dx35, dx36, r7, dx37):
    r9 = `:`(r7, dx37);
    __ = ldf `[` in base;
    r10 = dyn __(dx36, r9);
    goto L4(dx35, r10);
  L124():
    dr10 = tryDispatchBuiltin.1("$", object10);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L126() else L125(dx22, dx23, 1, dr10);
  L125(dx30, dx31, r5, object12):
    r8 = `$`(object12, <sym rank>);
    goto L123(dx30, dx31, r5, r8);
  L137():
    dx38 = getTryDispatchBuiltinValue(dr12);
    goto L134(dx38);
  L138():
    effects = ld effects;
    check L140() else D8();
  L139():
    r18 = dyn base1(<sym effects>);
    goto L6(r18);
  D8():
    deopt 35 [effects];
  L7():
    goto L10();
  L10():
    object17 = ld object;
    check L151() else D12();
  L126():
    dx34 = getTryDispatchBuiltinValue(dr10);
    goto L123(dx22, dx23, 1, dx34);
  L140():
    effects1 = force? effects;
    checkMissing(effects1);
    c7 = `==`(effects1, NULL);
    goto L6(c7);
  L141():
    as_matrix = ldf `as.matrix`;
    check L142() else D9();
  D9():
    deopt 40 [];
  D12():
    deopt 55 [object17];
  L142():
    p1 = prom<V +>{
      effects2 = ld effects;
      effects3 = force? effects2;
      checkMissing(effects3);
      return effects3;
    };
    r22 = dyn as_matrix(p1);
    check L143() else D10();
  L151():
    object18 = force? object17;
    checkMissing(object18);
    c10 = `is.object`(object18);
    if c10 then L153() else L154(object18);
  D10():
    deopt 42 [r22];
  L143():
    c9 = `is.object`(r22);
    if c9 then L144() else L145(r22);
  L152(dx44):
    st rdf = dx44;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L156() else L157();
  L153():
    dr16 = tryDispatchBuiltin.1("$", object18);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L155() else L154(dr16);
  L154(object20):
    r32 = `$`(object20, <sym df.residual>);
    goto L152(r32);
  L8(dx41):
    st effects = dx41;
    goto L10();
  L11(r34):
    st nmeffect = r34;
    as_matrix1 = ldf `as.matrix`;
    check L167() else D16();
  L144():
    dr14 = tryDispatchBuiltin.1("[", r22);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L146() else L145(dr14);
  L145(r24):
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L147() else L148();
  L155():
    dx43 = getTryDispatchBuiltinValue(dr16);
    goto L152(dx43);
  L156():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L158() else L159();
  L157():
    r33 = dyn base3("(Intercept)", <lang attr(`$`(object, terms), "term.labels")>);
    goto L11(r33);
  D16():
    deopt 74 [];
  L9(r29):
    __2 = ldf `[` in base;
    r31 = dyn __2(r22, r29, <missing>, FALSE);
    goto L8(r31);
  L12(r36):
    c12 = ldf c in base;
    r39 = dyn c12("(Intercept)", r36);
    check L166() else D15();
  L146():
    dx40 = getTryDispatchBuiltinValue(dr14);
    goto L8(dx40);
  L147():
    asgn2 = ld asgn;
    check L149() else D11();
  L148():
    r27 = dyn base2(<sym asgn>);
    goto L9(r27);
  L158():
    object21 = ld object;
    check L160() else D13();
  L159():
    r35 = dyn base4(<lang `$`(object, terms)>, "term.labels");
    goto L12(r35);
  L167():
    p2 = prom<V +>{
      object25 = ld object;
      object26 = force? object25;
      checkMissing(object26);
      c13 = `is.object`(object26);
      if c13 then L1() else L2(object26);
    L0(dx48):
      return dx48;
    L1():
      dr20 = tryDispatchBuiltin.1("$", object26);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(object28):
      r40 = `$`(object28, <sym coefficients>);
      goto L0(r40);
    L3():
      dx47 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx47);
    };
    r42 = dyn as_matrix1(p2);
    check L168() else D17();
  D11():
    deopt 44 [r24, asgn2];
  D13():
    deopt 64 [object21];
  D15():
    deopt 71 [r39];
  D17():
    deopt 76 [r42];
  L149():
    asgn3 = force? asgn2;
    checkMissing(asgn3);
    r30 = seq_along(asgn3);
    goto L9(r30);
  L160():
    object22 = force? object21;
    checkMissing(object22);
    c11 = `is.object`(object22);
    if c11 then L162() else L163(object22);
  L166():
    goto L11(r39);
  L168():
    st coef = r42;
    as_matrix2 = ldf `as.matrix`;
    check L169() else D18();
  D18():
    deopt 79 [];
  L161(dx46):
    attr = ldf attr in base;
    r38 = dyn attr(dx46, "term.labels");
    check L165() else D14();
  L162():
    dr18 = tryDispatchBuiltin.1("$", object22);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L164() else L163(dr18);
  L163(object24):
    r37 = `$`(object24, <sym terms>);
    goto L161(r37);
  L169():
    p3 = prom<V +>{
      object29 = ld object;
      object30 = force? object29;
      checkMissing(object30);
      c14 = `is.object`(object30);
      if c14 then L1() else L2(object30);
    L0(dx50):
      return dx50;
    L1():
      dr22 = tryDispatchBuiltin.1("$", object30);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(object32):
      r43 = `$`(object32, <sym residuals>);
      goto L0(r43);
    L3():
      dx49 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx49);
    };
    r45 = dyn as_matrix2(p3);
    check L170() else D19();
  D14():
    deopt 69 [r38];
  D19():
    deopt 81 [r45];
  L164():
    dx45 = getTryDispatchBuiltinValue(dr18);
    goto L161(dx45);
  L165():
    goto L12(r38);
  L170():
    st resid = r45;
    object33 = ld object;
    check L171() else D20();
  D20():
    deopt 83 [object33];
  L171():
    object34 = force? object33;
    checkMissing(object34);
    c15 = `is.object`(object34);
    if c15 then L173() else L174(object34);
  L172(dx52):
    st wt = dx52;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L176() else L177();
  L173():
    dr24 = tryDispatchBuiltin.1("$", object34);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L175() else L174(dr24);
  L174(object36):
    r46 = `$`(object36, <sym weights>);
    goto L172(r46);
  L13(r48):
    r49 = `!`(r48);
    c17 = `as.logical`(r49);
    if c17 then L179() else L14();
  L175():
    dx51 = getTryDispatchBuiltinValue(dr24);
    goto L172(dx51);
  L176():
    wt = ld wt;
    check L178() else D21();
  L177():
    r47 = dyn base5(<sym wt>);
    goto L13(r47);
  D21():
    deopt 88 [wt];
  L14():
    goto L16();
  L16():
    NCOL = ldf NCOL;
    check L185() else D24();
  L178():
    wt1 = force? wt;
    checkMissing(wt1);
    c16 = `==`(wt1, NULL);
    goto L13(c16);
  L179():
    resid = ld resid;
    check L180() else D22();
  D22():
    deopt 92 [resid];
  D24():
    deopt 102 [];
  L180():
    resid1 = force? resid;
    checkMissing(resid1);
    sym6 = ldf sqrt;
    base6 = ldf sqrt in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L181() else L182();
  L185():
    p4 = prom<V +>{
      resid5 = ld resid;
      resid6 = force? resid5;
      checkMissing(resid6);
      return resid6;
    };
    r56 = dyn NCOL(p4);
    check L186() else D25();
  D25():
    deopt 104 [r56];
  L15(resid4, r51):
    r53 = `*`(resid4, r51);
    st resid = r53;
    goto L16();
  L181():
    wt2 = ld wt;
    check L183() else D23();
  L182():
    r50 = dyn base6(<sym wt>);
    goto L15(resid1, r50);
  L186():
    st nresp = r56;
    sym7 = ldf vector;
    base7 = ldf vector in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L187() else L188();
  D23():
    deopt 94 [resid1, wt2];
  L17(r58):
    st ans = r58;
    nresp2 = ld nresp;
    check L191() else D28();
  L183():
    wt3 = force? wt2;
    checkMissing(wt3);
    r52 = sqrt(wt3);
    goto L15(resid1, r52);
  L187():
    nresp = ld nresp;
    check L189() else D26();
  L188():
    r57 = dyn base7("list", <sym nresp>);
    goto L17(r57);
  D26():
    deopt 109 [nresp];
  D28():
    deopt 114 [nresp2];
  L189():
    nresp1 = force? nresp;
    checkMissing(nresp1);
    vector = ldf vector in base;
    r59 = dyn vector("list", nresp1);
    check L190() else D27();
  L191():
    nresp3 = force? nresp2;
    checkMissing(nresp3);
    r60 = `>`(nresp3, 1.0);
    c18 = `as.logical`(r60);
    if c18 then L192() else L18();
  D27():
    deopt 112 [r59];
  L18():
    goto L27();
  L27():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L225() else L226();
  L190():
    goto L17(r59);
  L192():
    character = ldf character;
    check L193() else D29();
  D29():
    deopt 119 [];
  L28(r85):
    r86 = `!`(r85);
    c31 = `as.logical`(r86);
    if c31 then L228() else L29(c31);
  L193():
    p5 = prom<V +>{
      nresp4 = ld nresp;
      nresp5 = force? nresp4;
      checkMissing(nresp5);
      return nresp5;
    };
    r62 = dyn character(p5);
    check L194() else D30();
  L225():
    effects4 = ld effects;
    check L227() else D47();
  L226():
    r84 = dyn base9(<sym effects>);
    goto L28(r84);
  D30():
    deopt 121 [r62];
  D47():
    deopt 176 [effects4];
  L29(c33):
    c40 = `as.logical`(c33);
    if c40 then L232() else L31();
  L194():
    l = ld ans;
    names__ = ldf `names<-`;
    check L195() else D31();
  L227():
    effects5 = force? effects4;
    checkMissing(effects5);
    c30 = `==`(effects5, NULL);
    goto L28(c30);
  L228():
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L229() else L230();
  D31():
    deopt 123 [r62, l, r62];
  L30(c36, r88):
    r90 = `!`(r88);
    c37 = `as.logical`(r90);
    c38 = `&&`(c36, c37);
    goto L29(c38);
  L31():
    goto L47();
  L47():
    nresp8 = ld nresp;
    check L283() else D71();
  L195():
    r63 = dyn names__(l, NULL, r62);
    check L196() else D32();
  L229():
    missing = ldf missing in base;
    r89 = dyn missing(<sym split>);
    goto L30(c31, r89);
  L230():
    r87 = dyn base10(<sym split>);
    goto L30(c31, r87);
  L232():
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L233() else L234();
  D32():
    deopt 125 [r62, r63];
  D71():
    deopt 275 [1, nresp8];
  L32(r92):
    st ns = r92;
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L237() else L238();
  L196():
    st ans = r63;
    nresp6 = ld nresp;
    check L197() else D33();
  L233():
    split1 = ld split;
    check L235() else D48();
  L234():
    r91 = dyn base11(<sym split>);
    goto L32(r91);
  L283():
    nresp9 = force? nresp8;
    checkMissing(nresp9);
    r151 = `:`(1, nresp9);
    s1 = toForSeq(r151);
    l7 = length(s1);
    i23 = 0;
    goto L48(i23);
  D33():
    deopt 128 [1, nresp6];
  D48():
    deopt 187 [split1];
  L33(r95):
    r97 = `!`(r95);
    c43 = `as.logical`(r97);
    if c43 then L244() else L34();
  L48(i24):
    i25 = `+`.1(i24, 1);
    c48 = `<`.1(l7, i25);
    if c48 then L284() else L100();
  L197():
    nresp7 = force? nresp6;
    checkMissing(nresp7);
    r64 = `:`(1, nresp7);
    s = toForSeq(r64);
    l1 = length(s);
    i = 0;
    goto L19(i);
  L235():
    split2 = force? split1;
    checkMissing(split2);
    names1 = ldf names in base;
    r93 = dyn names1(split2);
    check L236() else D49();
  L237():
    object37 = ld object;
    check L239() else D50();
  L238():
    r94 = dyn base12(<lang `<-`(Terms, `$`(object, terms))>);
    goto L33(r94);
  D49():
    deopt 190 [r93];
  D50():
    deopt 193 [object37];
  L19(i1):
    i2 = `+`.1(i1, 1);
    c19 = `<`.1(l1, i2);
    if c19 then L198() else L26();
  L34():
    goto L42();
  L42():
    expand_split1 = ld `expand.split`;
    check L268() else D63();
  L100():
    x1 = `[[`(s1, i25, NULL, TRUE);
    st y = x1;
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L285() else L286();
  L236():
    goto L32(r93);
  L239():
    object38 = force? object37;
    checkMissing(object38);
    c41 = `is.object`(object38);
    if c41 then L241() else L242(object38);
  L244():
    sym13 = ldf `is.list`;
    base13 = ldf `is.list` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L245() else L246();
  L284():
    sym41 = ldf c;
    base41 = ldf c in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L488() else L489();
  D63():
    deopt 243 [expand_split1];
  L26():
    x = `[[`(s, i2, NULL, TRUE);
    st y = x;
    colnames = ldf colnames;
    check L199() else D34();
  L35(r99):
    r101 = `!`(r99);
    c44 = `as.logical`(r101);
    if c44 then L249() else L36();
  L49(i30, r153):
    c50 = `as.logical`(r153);
    if c50 then L288() else L50();
  L101(r302):
    l26 = ld ans;
    class__1 = ldf `class<-`;
    check L491() else D171();
  L198():
    goto L27();
  L240(dx58):
    st Terms = dx58;
    c42 = `==`(dx58, NULL);
    goto L33(c42);
  L241():
    dr30 = tryDispatchBuiltin.1("$", object38);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L243() else L242(dr30);
  L242(object40):
    r96 = `$`(object40, <sym terms>);
    goto L240(r96);
  L245():
    split3 = ld split;
    check L247() else D51();
  L246():
    r98 = dyn base13(<sym split>);
    goto L35(r98);
  L268():
    expand_split2 = force? expand_split1;
    checkMissing(expand_split2);
    c47 = `as.logical`(expand_split2);
    if c47 then L269() else L43();
  L285():
    effects6 = ld effects;
    check L287() else D72();
  L286():
    r152 = dyn base19(<sym effects>);
    goto L49(i25, r152);
  L488():
    c105 = ldf c in base;
    r303 = dyn c105("summary.aov", "listof");
    check L490() else D170();
  L489():
    r301 = dyn base41("summary.aov", "listof");
    goto L101(r301);
  D34():
    deopt 132 [i2];
  D51():
    deopt 201 [split3];
  D72():
    deopt 279 [i25, effects6];
  D170():
    deopt 643 [r303];
  D171():
    deopt 645 [r302, l26, r302];
  L36():
    goto L37();
  L37():
    sym14 = ldf all;
    base14 = ldf all in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L253() else L254();
  L43():
    goto L46(NULL);
  L46(r149):
    goto L47();
  L50():
    numeric1 = ldf numeric;
    check L294() else D77();
  L51(i33):
    rdf = ld rdf;
    check L388() else D123();
  L199():
    p6 = prom<V +>{
      resid7 = ld resid;
      resid8 = force? resid7;
      checkMissing(resid8);
      return resid8;
    };
    r66 = dyn colnames(p6);
    check L200() else D35();
  L243():
    dx57 = getTryDispatchBuiltinValue(dr30);
    goto L240(dx57);
  L247():
    split4 = force? split3;
    checkMissing(split4);
    is_list = ldf `is.list` in base;
    r100 = dyn is_list(split4);
    check L248() else D52();
  L249():
    stop = ldf stop;
    check L250() else D53();
  L269():
    sym16 = ldf names;
    base16 = ldf names in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L270() else L271();
  L287():
    effects7 = force? effects6;
    checkMissing(effects7);
    c49 = `==`(effects7, NULL);
    goto L49(i25, c49);
  L288():
    st nterms = 0;
    numeric = ldf numeric;
    check L289() else D73();
  L490():
    goto L101(r303);
  L491():
    r304 = dyn class__1(l26, NULL, r302);
    check L492() else D172();
  D35():
    deopt 134 [i2, r66];
  D52():
    deopt 204 [r100];
  D53():
    deopt 207 [];
  D73():
    deopt 286 [i30];
  D77():
    deopt 296 [i30];
  D123():
    deopt 450 [i33, rdf];
  D172():
    deopt 647 [r302, r304];
  L38(r105):
    r110 = `!`(r105);
    c45 = `as.logical`(r110);
    if c45 then L258() else L39();
  L44(r133):
    st `df.names` = r133;
    splitInteractions = ldf splitInteractions;
    check L275() else D67();
  L200():
    c20 = `is.object`(r66);
    if c20 then L201() else L202(i2, r66);
  L248():
    goto L35(r100);
  L250():
    r102 = dyn stop("the 'split' argument must be a list");
    check L251() else D54();
  L253():
    _in_ = ldf `%in%`;
    check L255() else D55();
  L254():
    r104 = dyn base14(<lang `%in%`(ns, nmeffect)>);
    goto L38(r104);
  L270():
    coef = ldf coef;
    check L272() else D64();
  L271():
    r132 = dyn base16(<lang coef(object)>);
    goto L44(r132);
  L289():
    r154 = dyn numeric();
    check L290() else D74();
  L294():
    r157 = dyn numeric1();
    check L295() else D78();
  L388():
    rdf1 = force? rdf;
    checkMissing(rdf1);
    r236 = `>`(rdf1, 0);
    c82 = `as.logical`(r236);
    if c82 then L389() else L77();
  L492():
    st ans = r304;
    object43 = ld object;
    check L493() else D173();
  D54():
    deopt 209 [r102];
  D55():
    deopt 215 [];
  D64():
    deopt 248 [];
  D67():
    deopt 255 [];
  D74():
    deopt 287 [i30, r154];
  D78():
    deopt 297 [i30, r157];
  D173():
    deopt 649 [object43];
  L20(i8, dx54):
    st cn = dx54;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L205() else L206();
  L39():
    goto L41(NULL);
  L41(r130):
    goto L42();
  L77():
    goto L83(i33);
  L83(i200):
    sym38 = ldf length;
    base38 = ldf length in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L412() else L413();
  L201():
    dr26 = tryDispatchBuiltin.1("[", r66);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L203() else L202(i2, dr26);
  L202(i6, r68):
    y = ld y;
    check L204() else D36();
  L251():
    goto L37();
  L255():
    p8 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      return ns1;
    };
    p9 = prom<V +>{
      nmeffect = ld nmeffect;
      nmeffect1 = force? nmeffect;
      checkMissing(nmeffect1);
      return nmeffect1;
    };
    r108 = dyn _in_(p8, p9);
    check L256() else D56();
  L258():
    sym15 = ldf sum;
    base15 = ldf sum in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L259() else L260();
  L272():
    p18 = prom<V +>{
      object41 = ld object;
      object42 = force? object41;
      checkMissing(object42);
      return object42;
    };
    r135 = dyn coef(p18);
    check L273() else D65();
  L275():
    p19 = prom<V +>{
      split5 = ld split;
      split6 = force? split5;
      checkMissing(split6);
      return split6;
    };
    p20 = prom<V +>{
      sym17 = ldf attr;
      base17 = ldf attr in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r139):
      return r139;
    L1():
      Terms = ld Terms;
      Terms1 = force? Terms;
      checkMissing(Terms1);
      attr1 = ldf attr in base;
      r140 = dyn attr1(Terms1, "factors");
      goto L0(r140);
    L2():
      r138 = dyn base17(<sym Terms>, "factors");
      goto L0(r138);
    };
    p21 = prom<V +>{
      nmeffect4 = ld nmeffect;
      nmeffect5 = force? nmeffect4;
      checkMissing(nmeffect5);
      return nmeffect5;
    };
    p22 = prom<V +>{
      asgn4 = ld asgn;
      asgn5 = force? asgn4;
      checkMissing(asgn5);
      return asgn5;
    };
    p23 = prom<V +>{
      df_names = ld `df.names`;
      df_names1 = force? df_names;
      checkMissing(df_names1);
      return df_names1;
    };
    r145 = dyn splitInteractions(p19, p20, p21, p22, p23);
    check L276() else D68();
  L290():
    st ms = r154;
    st ss = r154;
    st df = r154;
    character1 = ldf character;
    check L291() else D75();
  L295():
    st ss = r157;
    st df = r157;
    character2 = ldf character;
    check L296() else D79();
  L389():
    sym34 = ldf c;
    base34 = ldf c in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L390() else L391();
  L493():
    object44 = force? object43;
    checkMissing(object44);
    c106 = `is.object`(object44);
    if c106 then L495() else L496(object44);
  D36():
    deopt 135 [i6, r68, y];
  D56():
    deopt 218 [r108];
  D65():
    deopt 250 [r135];
  D68():
    deopt 261 [r145];
  D75():
    deopt 292 [i30];
  D79():
    deopt 301 [i30];
  L21(i11, r71):
    c22 = `as.logical`(r71);
    if c22 then L22(i11, c22) else L208();
  L40(r112):
    st na = r112;
    stop1 = ldf stop;
    check L264() else D61();
  L78(i186, r238):
    st df = r238;
    sym35 = ldf c;
    base35 = ldf c in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L395() else L396();
  L84(i203, r253):
    st nt = r253;
    ifelse = ldf ifelse;
    check L416() else D136();
  L203():
    dx53 = getTryDispatchBuiltinValue(dr26);
    goto L20(i2, dx53);
  L204():
    y1 = force? y;
    __3 = ldf `[` in base;
    r69 = dyn __3(r68, y1);
    goto L20(i6, r69);
  L205():
    cn = ld cn;
    check L207() else D37();
  L206():
    r70 = dyn base8(<sym cn>);
    goto L21(i8, r70);
  L256():
    all = ldf all in base;
    r109 = dyn all(r108);
    check L257() else D57();
  L259():
    _in_1 = ldf `%in%`;
    check L261() else D58();
  L260():
    r111 = dyn base15(<lang `!`(`%in%`(ns, nmeffect))>);
    goto L40(r111);
  L273():
    names2 = ldf names in base;
    r136 = dyn names2(r135);
    check L274() else D66();
  L276():
    st split = r145;
    sym18 = ldf names;
    base18 = ldf names in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L277() else L278();
  L291():
    r155 = dyn character1();
    check L292() else D76();
  L296():
    r158 = dyn character2();
    check L297() else D80();
  L390():
    df4 = ld df;
    check L392() else D124();
  L391():
    r237 = dyn base34(<sym df>, <sym rdf>);
    goto L78(i33, r237);
  L412():
    df6 = ld df;
    check L414() else D134();
  L413():
    r252 = dyn base38(<sym df>);
    goto L84(i200, r252);
  L494(dx100):
    l27 = ld ans;
    attr__1 = ldf `attr<-`;
    check L498() else D174();
  L495():
    dr70 = tryDispatchBuiltin.1("$", object44);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L497() else L496(dr70);
  L496(object46):
    r305 = `$`(object46, <sym na.action>);
    goto L494(r305);
  D37():
    deopt 140 [i8, cn];
  D57():
    deopt 220 [r109];
  D58():
    deopt 225 [];
  D61():
    deopt 234 [];
  D66():
    deopt 252 [r136];
  D76():
    deopt 293 [i30, r155];
  D80():
    deopt 302 [i30, r158];
  D124():
    deopt 456 [i33, df4];
  D134():
    deopt 495 [i200, df6];
  D136():
    deopt 501 [i203];
  D174():
    deopt 653 [dx100, l27, dx100];
  L22(i12, c23):
    c28 = `as.logical`(c23);
    if c28 then L211() else L23();
  L45(r147):
    st ns = r147;
    goto L46(r147);
  L79(i189, r241):
    st ss = r241;
    sym37 = ldf c;
    base37 = ldf c in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L407() else L408();
  L207():
    cn1 = force? cn;
    checkMissing(cn1);
    c21 = `==`(cn1, NULL);
    goto L21(i8, c21);
  L208():
    cn2 = ld cn;
    check L209() else D38();
  L257():
    goto L38(r109);
  L261():
    p10 = prom<V +>{
      ns2 = ld ns;
      ns3 = force? ns2;
      checkMissing(ns3);
      return ns3;
    };
    p11 = prom<V +>{
      nmeffect2 = ld nmeffect;
      nmeffect3 = force? nmeffect2;
      checkMissing(nmeffect3);
      return nmeffect3;
    };
    r115 = dyn _in_1(p10, p11);
    check L262() else D59();
  L264():
    p17 = prom<V +>{
      sprintf = ldf sprintf;
      p13 = prom<V +>{
        ngettext = ldf ngettext;
        p12 = prom<V +>{
          na = ld na;
          na1 = force? na;
          checkMissing(na1);
          return na1;
        };
        r119 = dyn ngettext(p12, "unknown name %s in the 'split' list", "unknown names %s in the 'split' list");
        return r119;
      };
      p16 = prom<V +>{
        paste1 = ldf paste;
        p15 = prom<V +>{
          sQuote = ldf sQuote;
          p14 = prom<V +>{
            ns4 = ld ns;
            ns5 = force? ns4;
            checkMissing(ns5);
            c46 = `is.object`(ns5);
            if c46 then L1() else L2(ns5);
          L0(dx60):
            return dx60;
          L1():
            dr32 = tryDispatchBuiltin.1("[", ns5);
            dc16 = getTryDispatchBuiltinDispatched(dr32);
            if dc16 then L3() else L2(dr32);
          L2(ns7):
            na2 = ld na;
            na3 = force? na2;
            __4 = ldf `[` in base;
            r121 = dyn __4(ns7, na3);
            goto L0(r121);
          L3():
            dx59 = getTryDispatchBuiltinValue(dr32);
            goto L0(dx59);
          };
          r123 = dyn sQuote(p14);
          return r123;
        };
        r125 = dyn paste1[, collapse](p15, ", ");
        return r125;
      };
      r127 = dyn sprintf(p13, p16);
      return r127;
    };
    r129 = dyn stop1[, domain](p17, NA_LGL);
    check L265() else D62();
  L274():
    goto L44(r136);
  L277():
    split7 = ld split;
    check L279() else D69();
  L278():
    r146 = dyn base18(<sym split>);
    goto L45(r146);
  L292():
    st nmrows = r155;
    goto L51(i30);
  L297():
    st nmrows = r158;
    seq = ldf seq;
    check L298() else D81();
  L392():
    df5 = force? df4;
    checkMissing(df5);
    rdf2 = ld rdf;
    check L393() else D125();
  L395():
    ss4 = ld ss;
    check L397() else D127();
  L396():
    r240 = dyn base35(<sym ss>, <lang sum(`^`(`[`(resid, , y), 2.0))>);
    goto L79(i186, r240);
  L414():
    df7 = force? df6;
    checkMissing(df7);
    length1 = ldf length in base;
    r254 = dyn length1(df7);
    check L415() else D135();
  L416():
    p33 = prom<V +>{
      df8 = ld df;
      df9 = force? df8;
      checkMissing(df9);
      r255 = `>`(df9, 0);
      return r255;
    };
    p34 = prom<V +>{
      ss6 = ld ss;
      ss7 = force? ss6;
      checkMissing(ss7);
      df10 = ld df;
      df11 = force? df10;
      checkMissing(df11);
      r257 = `/`(ss7, df11);
      return r257;
    };
    r259 = dyn ifelse(p33, p34, NA_LGL);
    check L417() else D137();
  L497():
    dx99 = getTryDispatchBuiltinValue(dr70);
    goto L494(dx99);
  L498():
    r306 = dyn attr__1(l27, NULL, "na.action", dx100);
    check L499() else D175();
  D38():
    deopt 143 [i11, c22, cn2];
  D59():
    deopt 228 [r115];
  D62():
    deopt 238 [r129];
  D69():
    deopt 265 [split7];
  D81():
    deopt 305 [i30];
  D125():
    deopt 458 [i33, rdf2];
  D127():
    deopt 465 [i186, ss4];
  D135():
    deopt 498 [i200, r254];
  D137():
    deopt 505 [i203, r259];
  D175():
    deopt 656 [dx100, r306];
  L23():
    goto L24(i12);
  L24(i17):
    paste = ldf paste;
    check L214() else D40();
  L82(i199, r249):
    st nmrows = r249;
    goto L83(i199);
  L209():
    cn3 = force? cn2;
    checkMissing(cn3);
    r72 = `==`(cn3, "");
    c25 = `as.logical`(r72);
    c26 = `||`(c22, c25);
    goto L22(i11, c26);
  L211():
    y2 = ld y;
    check L212() else D39();
  L262():
    r116 = `!`(r115);
    sum = ldf sum in base;
    r117 = dyn sum(r116);
    check L263() else D60();
  L265():
    goto L41(r129);
  L279():
    split8 = force? split7;
    checkMissing(split8);
    names3 = ldf names in base;
    r148 = dyn names3(split8);
    check L280() else D70();
  L298():
    p24 = prom<V +>{
      nterms = ld nterms;
      nterms1 = force? nterms;
      checkMissing(nterms1);
      return nterms1;
    };
    r160 = dyn seq(p24);
    check L299() else D82();
  L393():
    rdf3 = force? rdf2;
    checkMissing(rdf3);
    c83 = ldf c in base;
    r239 = dyn c83(df5, rdf3);
    check L394() else D126();
  L397():
    ss5 = force? ss4;
    checkMissing(ss5);
    sym36 = ldf sum;
    base36 = ldf sum in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L398() else L399();
  L407():
    nmrows4 = ld nmrows;
    check L409() else D132();
  L408():
    r248 = dyn base37(<sym nmrows>, "Residuals");
    goto L82(i189, r248);
  L415():
    goto L84(i200, r254);
  L417():
    st ms = r259;
    sym39 = ldf list;
    base39 = ldf list in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L418() else L419();
  L499():
    st ans = r306;
    ans = ld ans;
    check L500() else D176();
  D39():
    deopt 148 [i12, y2];
  D40():
    deopt 154 [i17];
  D60():
    deopt 231 [r117];
  D70():
    deopt 268 [r148];
  D82():
    deopt 307 [i30, r160];
  D126():
    deopt 461 [i33, r239];
  D132():
    deopt 485 [i189, nmrows4];
  D176():
    deopt 658 [ans];
  L80(i192, r243):
    c85 = ldf c in base;
    r247 = dyn c85(ss5, r243);
    check L406() else D131();
  L85(i206, r261):
    st x = r261;
    rdf4 = ld rdf;
    check L424() else D142();
  L212():
    y3 = force? y2;
    checkMissing(y3);
    st cn = y3;
    goto L24(i12);
  L214():
    p7 = prom<V +>{
      cn4 = ld cn;
      cn5 = force? cn4;
      checkMissing(cn5);
      return cn5;
    };
    r74 = dyn paste(" Response", p7);
    check L215() else D41();
  L263():
    goto L40(r117);
  L280():
    goto L45(r148);
  L299():
    s2 = toForSeq(r160);
    l8 = length(s2);
    i34 = 0;
    goto L52(i30, i34);
  L394():
    goto L78(i33, r239);
  L398():
    resid9 = ld resid;
    check L400() else D128();
  L399():
    r242 = dyn base36(<lang `^`(`[`(resid, , y), 2.0)>);
    goto L80(i186, r242);
  L409():
    nmrows5 = force? nmrows4;
    checkMissing(nmrows5);
    c86 = ldf c in base;
    r250 = dyn c86(nmrows5, "Residuals");
    check L410() else D133();
  L418():
    df12 = ld df;
    check L420() else D138();
  L419():
    r260 = dyn base39[Df, `Sum Sq`, `Mean Sq`](<sym df>, <sym ss>, <sym ms>);
    goto L85(i203, r260);
  L500():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D41():
    deopt 157 [i17, r74];
  D128():
    deopt 469 [i186, resid9];
  D131():
    deopt 481 [i192, r247];
  D133():
    deopt 489 [i189, r250];
  D138():
    deopt 509 [i203, df12];
  D142():
    deopt 521 [i206, rdf4];
  L52(i35, i36):
    i37 = `+`.1(i36, 1);
    c51 = `<`.1(l8, i37);
    if c51 then L300() else L76();
  L215():
    l2 = ld ans;
    names = ldf names;
    check L216() else D42();
  L400():
    resid10 = force? resid9;
    checkMissing(resid10);
    c84 = `is.object`(resid10);
    if c84 then L401() else L402(i186, resid10);
  L406():
    goto L79(i192, r247);
  L410():
    goto L82(i189, r250);
  L420():
    df13 = force? df12;
    checkMissing(df13);
    ss8 = ld ss;
    check L421() else D139();
  L424():
    rdf5 = force? rdf4;
    checkMissing(rdf5);
    r263 = `>`(rdf5, 0);
    c87 = `as.logical`(r263);
    if c87 then L425() else L86();
  D42():
    deopt 159 [i17, r74, l2, r74];
  D139():
    deopt 512 [i203, ss8];
  L76():
    x2 = `[[`(s2, i37, NULL, TRUE);
    st i = x2;
    asgn6 = ld asgn;
    check L301() else D83();
  L81(i196, dx80):
    r245 = `^`(dx80, 2.0);
    sum3 = ldf sum in base;
    r246 = dyn sum3(r245);
    check L405() else D130();
  L86():
    goto L90(i206);
  L90(i229):
    sym40 = ldf c;
    base40 = ldf c in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L453() else L454();
  L216():
    r75 = dyn names(r74, NULL);
    check L217() else D43();
  L300():
    goto L51(i35);
  L401():
    dr52 = tryDispatchBuiltin.1("[", resid10);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L403() else L402(i186, dr52);
  L402(i194, resid12):
    y11 = ld y;
    check L404() else D129();
  L421():
    ss9 = force? ss8;
    checkMissing(ss9);
    ms = ld ms;
    check L422() else D140();
  L425():
    ms2 = ld ms;
    check L426() else D143();
  D43():
    deopt 161 [i17, r74, l2, r74, r75];
  D83():
    deopt 308 [i35, i37, asgn6];
  D129():
    deopt 472 [i194, resid12, y11];
  D130():
    deopt 479 [i196, r246];
  D140():
    deopt 515 [i203, ms];
  D143():
    deopt 525 [i206, ms2];
  L91(i232, r283):
    l21 = ld x;
    class__ = ldf `class<-`;
    check L456() else D153();
  L217():
    c29 = `is.object`(r75);
    if c29 then L218() else L219(i17, r74, l2, r75);
  L301():
    asgn7 = force? asgn6;
    checkMissing(asgn7);
    uasgn2 = ld uasgn;
    check L302() else D84();
  L403():
    dx79 = getTryDispatchBuiltinValue(dr52);
    goto L81(i186, dx79);
  L404():
    y12 = force? y11;
    __14 = ldf `[` in base;
    r244 = dyn __14(resid10, <missing>, y12);
    goto L81(i194, r244);
  L405():
    goto L80(i196, r246);
  L422():
    ms1 = force? ms;
    checkMissing(ms1);
    list = ldf list in base;
    r262 = dyn list(df13, ss9, ms1);
    check L423() else D141();
  L426():
    ms3 = force? ms2;
    checkMissing(ms3);
    ms4 = ld ms;
    check L427() else D144();
  L453():
    c93 = ldf c in base;
    r284 = dyn c93("anova", "data.frame");
    check L455() else D152();
  L454():
    r282 = dyn base40("anova", "data.frame");
    goto L91(i229, r282);
  D84():
    deopt 309 [i35, i37, asgn7, uasgn2];
  D141():
    deopt 519 [i203, r262];
  D144():
    deopt 526 [i206, ms3, ms4];
  D152():
    deopt 571 [i229, r284];
  D153():
    deopt 573 [i232, r283, l21, r283];
  L25(i21, r81, l6, dx56):
    names__1 = ldf `names<-`;
    check L222() else D45();
  L218():
    dr28 = tryDispatchBuiltin.0("[<-", r75, r74);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L220() else L219(i17, r74, l2, dr28);
  L219(i19, r78, l4, r79):
    y5 = ld y;
    check L221() else D44();
  L302():
    uasgn3 = force? uasgn2;
    checkMissing(uasgn3);
    c52 = `is.object`(uasgn3);
    if c52 then L303() else L304(i35, i37, asgn7, uasgn3);
  L423():
    goto L85(i203, r262);
  L427():
    ms5 = force? ms4;
    checkMissing(ms5);
    c88 = `is.object`(ms5);
    if c88 then L428() else L429(i206, ms3, ms5);
  L455():
    goto L91(i229, r284);
  L456():
    r285 = dyn class__(l21, NULL, r283);
    check L457() else D154();
  D44():
    deopt 163 [i19, r78, l4, r79, r74, y5];
  D45():
    deopt 166 [i21, r81, l6, dx56];
  D154():
    deopt 575 [i232, r283, r285];
  L53(i48, i49, asgn11, dx62):
    r162 = `==`(asgn11, dx62);
    st ai = r162;
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L307() else L308();
  L87(i212, ms11, dx82):
    r265 = `/`(ms11, dx82);
    st TT = r265;
    pf = ldf pf;
    check L432() else D146();
  L220():
    dx55 = getTryDispatchBuiltinValue(dr28);
    goto L25(i17, r74, l2, dx55);
  L221():
    y6 = force? y5;
    ___ = ldf `[<-` in base;
    r82 = dyn ___(r79, r74, y6);
    goto L25(i19, r78, l4, r82);
  L222():
    r83 = dyn names__1(l6, NULL, dx56);
    check L223() else D46();
  L303():
    dr34 = tryDispatchBuiltin.1("[", uasgn3);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L305() else L304(i35, i37, asgn7, dr34);
  L304(i44, i45, asgn9, uasgn5):
    i50 = ld i;
    check L306() else D85();
  L428():
    dr54 = tryDispatchBuiltin.1("[", ms5);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L430() else L429(i206, ms3, dr54);
  L429(i210, ms8, ms9):
    nt = ld nt;
    check L431() else D145();
  L457():
    st x = r285;
    format = ldf format;
    check L458() else D155();
  D46():
    deopt 168 [i21, r81, r83];
  D85():
    deopt 311 [i44, i45, asgn9, uasgn5, i50];
  D145():
    deopt 528 [i210, ms8, ms9, nt];
  D146():
    deopt 534 [i212];
  D155():
    deopt 578 [i232];
  L54(i56, i57, r164):
    st df = r164;
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L315() else L316();
  L223():
    st ans = r83;
    goto L19(i21);
  L305():
    dx61 = getTryDispatchBuiltinValue(dr34);
    goto L53(i35, i37, asgn7, dx61);
  L306():
    i51 = force? i50;
    __5 = ldf `[` in base;
    r161 = dyn __5(uasgn5, i51);
    goto L53(i44, i45, asgn9, r161);
  L307():
    df = ld df;
    check L309() else D86();
  L308():
    r163 = dyn base20(<sym df>, <lang sum(ai)>);
    goto L54(i48, i49, r163);
  L430():
    dx81 = getTryDispatchBuiltinValue(dr54);
    goto L87(i206, ms3, dx81);
  L431():
    nt1 = force? nt;
    __15 = ldf `[` in base;
    r264 = dyn __15(ms9, nt1);
    goto L87(i210, ms8, r264);
  L432():
    p35 = prom<V +>{
      TT = ld TT;
      TT1 = force? TT;
      checkMissing(TT1);
      return TT1;
    };
    p36 = prom<V +>{
      df14 = ld df;
      df15 = force? df14;
      checkMissing(df15);
      return df15;
    };
    p37 = prom<V +>{
      rdf6 = ld rdf;
      rdf7 = force? rdf6;
      checkMissing(rdf7);
      return rdf7;
    };
    r269 = dyn pf[, , , `lower.tail`](p35, p36, p37, FALSE);
    check L433() else D147();
  L458():
    p38 = prom<V +>{
      nmrows6 = ld nmrows;
      nmrows7 = force? nmrows6;
      checkMissing(nmrows7);
      return nmrows7;
    };
    r287 = dyn format(p38);
    check L459() else D156();
  D86():
    deopt 318 [i48, i49, df];
  D147():
    deopt 540 [i212, r269];
  D156():
    deopt 580 [i232, r287];
  L56(i68, i69, r170):
    st ss = r170;
    nmeffect6 = ld nmeffect;
    check L328() else D96();
  L309():
    df1 = force? df;
    checkMissing(df1);
    sym21 = ldf sum;
    base21 = ldf sum in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L310() else L311();
  L315():
    ss = ld ss;
    check L317() else D90();
  L316():
    r169 = dyn base22(<sym ss>, <lang sum(`^`(`[`(effects, ai, y), 2.0))>);
    goto L56(i56, i57, r169);
  L433():
    st TP = r269;
    l9 = ld TP;
    c89 = `is.object`(l9);
    if c89 then L434() else L435(i212, NA_LGL, l9);
  L459():
    l22 = ld x;
    attr__ = ldf `attr<-`;
    check L460() else D157();
  D90():
    deopt 331 [i56, i57, ss];
  D96():
    deopt 348 [i68, i69, nmeffect6];
  D157():
    deopt 582 [i232, r287, l22, r287];
  L55(i62, i63, r166):
    c53 = ldf c in base;
    r168 = dyn c53(df1, r166);
    check L314() else D89();
  L88(i216, r273, dx84):
    st TP = dx84;
    l12 = ld TT;
    c90 = `is.object`(l12);
    if c90 then L438() else L439(i216, r273, l12);
  L310():
    ai = ld ai;
    check L312() else D87();
  L311():
    r165 = dyn base21(<sym ai>);
    goto L55(i48, i49, r165);
  L317():
    ss1 = force? ss;
    checkMissing(ss1);
    sym23 = ldf sum;
    base23 = ldf sum in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L318() else L319();
  L328():
    nmeffect7 = force? nmeffect6;
    checkMissing(nmeffect7);
    c56 = `is.object`(nmeffect7);
    if c56 then L329() else L330(i68, i69, nmeffect7);
  L434():
    dr56 = tryDispatchBuiltin.0("[<-", l9, NA_LGL);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L436() else L435(i212, NA_LGL, dr56);
  L435(i214, r271, l11):
    nt2 = ld nt;
    check L437() else D148();
  L460():
    r288 = dyn attr__(l22, NULL, "row.names", r287);
    check L461() else D158();
  D87():
    deopt 322 [i48, i49, ai];
  D89():
    deopt 327 [i62, i63, r168];
  D148():
    deopt 545 [i214, r271, l11, NA_LGL, nt2];
  D158():
    deopt 585 [i232, r287, r288];
  L57(i74, i75, r172):
    c55 = ldf c in base;
    r176 = dyn c55(ss1, r172);
    check L327() else D95();
  L59(i90, i91, dx66):
    st nmi = dx66;
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L337() else L338();
  L89(i220, dx86):
    st TT = dx86;
    TT2 = ld TT;
    check L442() else D150();
  L312():
    ai1 = force? ai;
    checkMissing(ai1);
    sum1 = ldf sum in base;
    r167 = dyn sum1(ai1);
    check L313() else D88();
  L314():
    goto L54(i62, i63, r168);
  L318():
    effects8 = ld effects;
    check L320() else D91();
  L319():
    r171 = dyn base23(<lang `^`(`[`(effects, ai, y), 2.0)>);
    goto L57(i56, i57, r171);
  L329():
    dr38 = tryDispatchBuiltin.1("[", nmeffect7);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L331() else L330(i68, i69, dr38);
  L330(i86, i87, nmeffect9):
    uasgn6 = ld uasgn;
    check L332() else D97();
  L436():
    dx83 = getTryDispatchBuiltinValue(dr56);
    goto L88(i212, NA_LGL, dx83);
  L437():
    nt3 = force? nt2;
    ___1 = ldf `[<-` in base;
    r274 = dyn ___1(l11, NA_LGL, nt3);
    goto L88(i214, r271, r274);
  L438():
    dr58 = tryDispatchBuiltin.0("[<-", l12, r273);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L440() else L439(i216, r273, dr58);
  L439(i218, r276, l14):
    nt4 = ld nt;
    check L441() else D149();
  L461():
    st x = r288;
    keep_zero_df1 = ld `keep.zero.df`;
    check L462() else D159();
  D88():
    deopt 325 [i48, i49, r167];
  D91():
    deopt 335 [i56, i57, effects8];
  D95():
    deopt 346 [i74, i75, r176];
  D97():
    deopt 351 [i86, i87, nmeffect9, 1.0, uasgn6];
  D149():
    deopt 550 [i218, r276, l14, r273, nt4];
  D150():
    deopt 554 [i220, TT2];
  D159():
    deopt 587 [i232, keep_zero_df1];
  L61(i106, i107, r185):
    st nmrows = r185;
    sym25 = ldf missing;
    base25 = ldf missing in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L342() else L343();
  L313():
    goto L55(i48, i49, r167);
  L320():
    effects9 = force? effects8;
    checkMissing(effects9);
    c54 = `is.object`(effects9);
    if c54 then L321() else L322(i56, i57, effects9);
  L327():
    goto L56(i74, i75, r176);
  L331():
    dx65 = getTryDispatchBuiltinValue(dr38);
    goto L59(i68, i69, dx65);
  L332():
    uasgn7 = force? uasgn6;
    checkMissing(uasgn7);
    c57 = `is.object`(uasgn7);
    if c57 then L333() else L334(i86, i87, nmeffect9, 1.0, uasgn7);
  L337():
    nmrows = ld nmrows;
    check L339() else D99();
  L338():
    r184 = dyn base24(<sym nmrows>, <sym nmi>);
    goto L61(i90, i91, r184);
  L440():
    dx85 = getTryDispatchBuiltinValue(dr58);
    goto L89(i216, dx85);
  L441():
    nt5 = force? nt4;
    ___2 = ldf `[<-` in base;
    r279 = dyn ___2(l14, r273, nt5);
    goto L89(i218, r279);
  L442():
    TT3 = force? TT2;
    checkMissing(TT3);
    l15 = ld x;
    c91 = `is.object`(l15);
    if c91 then L444() else L445(i220, TT3, l15);
  L462():
    keep_zero_df2 = force? keep_zero_df1;
    checkMissing(keep_zero_df2);
    r289 = `!`(keep_zero_df2);
    c94 = `as.logical`(r289);
    if c94 then L463() else L92();
  D99():
    deopt 361 [i90, i91, nmrows];
  L58(i82, i83, dx64):
    r174 = `^`(dx64, 2.0);
    sum2 = ldf sum in base;
    r175 = dyn sum2(r174);
    check L326() else D94();
  L60(i98, i99, nmeffect13, r180, dx68):
    r182 = `+`(r180, dx68);
    __8 = ldf `[` in base;
    r183 = dyn __8(nmeffect13, r182);
    goto L59(i98, i99, r183);
  L62(i112, i113, r188):
    r190 = `!`(r188);
    c59 = `as.logical`(r190);
    if c59 then L344() else L63(i112, i113, c59);
  L92():
    goto L94(i232);
  L94(i239):
    pmatch = ldf pmatch;
    check L470() else D162();
  L321():
    dr36 = tryDispatchBuiltin.1("[", effects9);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L323() else L322(i56, i57, dr36);
  L322(i78, i79, effects11):
    ai2 = ld ai;
    check L324() else D92();
  L333():
    dr40 = tryDispatchBuiltin.1("[", uasgn7);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L335() else L334(i86, i87, nmeffect9, 1.0, dr40);
  L334(i94, i95, nmeffect11, r178, uasgn9):
    i100 = ld i;
    check L336() else D98();
  L339():
    nmrows1 = force? nmrows;
    checkMissing(nmrows1);
    nmi = ld nmi;
    check L340() else D100();
  L342():
    missing1 = ldf missing in base;
    r189 = dyn missing1(<sym split>);
    goto L62(i106, i107, r189);
  L343():
    r187 = dyn base25(<sym split>);
    goto L62(i106, i107, r187);
  L443(i224, dx88):
    st x = dx88;
    TP = ld TP;
    check L447() else D151();
  L444():
    dr60 = tryDispatchBuiltin.0("$<-", l15, TT3);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L446() else L445(i220, TT3, dr60);
  L445(i222, TT5, l17):
    r280 = `$<-`(l17, <sym `F value`>, TT3);
    goto L443(i222, r280);
  L463():
    x3 = ld x;
    check L464() else D160();
  D92():
    deopt 337 [i78, i79, effects11, ai2];
  D94():
    deopt 344 [i82, i83, r175];
  D98():
    deopt 353 [i94, i95, nmeffect11, r178, uasgn9, i100];
  D100():
    deopt 363 [i90, i91, nmi];
  D151():
    deopt 559 [i224, TP];
  D160():
    deopt 590 [i232, x3];
  D162():
    deopt 603 [i239];
  L63(i116, i117, c61):
    c71 = `as.logical`(c61);
    if c71 then L354() else L66();
  L323():
    dx63 = getTryDispatchBuiltinValue(dr36);
    goto L58(i56, i57, dx63);
  L324():
    ai3 = force? ai2;
    y7 = ld y;
    check L325() else D93();
  L326():
    goto L57(i82, i83, r175);
  L335():
    dx67 = getTryDispatchBuiltinValue(dr40);
    goto L60(i86, i87, nmeffect9, 1.0, dx67);
  L336():
    i101 = force? i100;
    __7 = ldf `[` in base;
    r181 = dyn __7(uasgn9, i101);
    goto L60(i94, i95, nmeffect11, r178, r181);
  L340():
    nmi1 = force? nmi;
    checkMissing(nmi1);
    c58 = ldf c in base;
    r186 = dyn c58(nmrows1, nmi1);
    check L341() else D101();
  L344():
    sym26 = ldf `is.na`;
    base26 = ldf `is.na` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L345() else L346();
  L446():
    dx87 = getTryDispatchBuiltinValue(dr60);
    goto L443(i220, dx87);
  L447():
    TP1 = force? TP;
    checkMissing(TP1);
    l18 = ld x;
    c92 = `is.object`(l18);
    if c92 then L449() else L450(i224, TP1, l18);
  L464():
    x4 = force? x3;
    checkMissing(x4);
    c95 = `is.object`(x4);
    if c95 then L465() else L466(i232, x4);
  L470():
    p40 = prom<V +>{
      row_names = ldf `row.names`;
      p39 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r293 = dyn row_names(p39);
      return r293;
    };
    r295 = dyn pmatch("(Intercept)", p40, 0);
    check L471() else D163();
  D93():
    deopt 338 [i78, i79, effects11, ai3, y7];
  D101():
    deopt 366 [i90, i91, r186];
  D163():
    deopt 607 [i239, r295];
  L64(i122, i123, c64, r192):
    r197 = `!`(r192);
    c68 = `as.logical`(r197);
    c69 = `&&`(c64, c68);
    goto L63(i122, i123, c69);
  L66():
    goto L75(i116, i117);
  L75(i180, i181):
    goto L52(i180, i181);
  L93(i238, dx92):
    st x = dx92;
    goto L94(i238);
  L325():
    y8 = force? y7;
    __6 = ldf `[` in base;
    r173 = dyn __6(effects11, ai3, y8);
    goto L58(i78, i79, r173);
  L341():
    goto L61(i90, i91, r186);
  L345():
    sym27 = ldf match;
    base27 = ldf match in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L347() else L348();
  L346():
    r191 = dyn base26(<lang `<-`(int, match(nmi, ns))>);
    goto L64(i112, i113, c59, r191);
  L354():
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L355() else L356();
  L448(i228, TP5, dx90):
    st x = dx90;
    goto L90(i228);
  L449():
    dr62 = tryDispatchBuiltin.0("$<-", l18, TP1);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L451() else L450(i224, TP1, dr62);
  L450(i226, TP3, l20):
    r281 = `$<-`(l20, <sym `Pr(>F)`>, TP1);
    goto L448(i226, TP3, r281);
  L465():
    dr64 = tryDispatchBuiltin.1("[", x4);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L467() else L466(i232, dr64);
  L466(i236, x6):
    df16 = ld df;
    check L468() else D161();
  L471():
    st pm = r295;
    intercept1 = ld intercept;
    check L472() else D164();
  D161():
    deopt 592 [i236, x6, df16];
  D164():
    deopt 609 [i239, intercept1];
  L65(i128, i129, c67, r194):
    st int = r194;
    is_na = ldf `is.na` in base;
    r196 = dyn is_na(r194);
    check L352() else D105();
  L67(i140, i141, r199):
    st df = r199;
    sym29 = ldf `is.null`;
    base29 = ldf `is.null` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L361() else L362();
  L347():
    nmi2 = ld nmi;
    check L349() else D102();
  L348():
    r193 = dyn base27(<sym nmi>, <sym ns>);
    goto L65(i112, i113, c59, r193);
  L355():
    df2 = ld df;
    check L357() else D106();
  L356():
    r198 = dyn base28(<sym df>, <lang lengths(`[[`(split, int))>);
    goto L67(i116, i117, r198);
  L451():
    dx89 = getTryDispatchBuiltinValue(dr62);
    goto L448(i224, TP1, dx89);
  L467():
    dx91 = getTryDispatchBuiltinValue(dr64);
    goto L93(i232, dx91);
  L468():
    df17 = force? df16;
    checkMissing(df17);
    r290 = `>`(df17, 0);
    __16 = ldf `[` in base;
    r291 = dyn __16(x4, r290, <missing>);
    goto L93(i236, r291);
  L472():
    intercept2 = force? intercept1;
    checkMissing(intercept2);
    r296 = `!`(intercept2);
    c96 = `as.logical`(r296);
    if c96 then L473() else L95(i239, c96);
  D102():
    deopt 376 [i112, i113, c59, nmi2];
  D105():
    deopt 386 [i128, i129, c67, r196];
  D106():
    deopt 391 [i116, i117, df2];
  L68(i146, i147, r205):
    c76 = `as.logical`(r205);
    if c76 then L371() else L71();
  L95(i241, c98):
    c102 = `as.logical`(c98);
    if c102 then L476() else L96();
  L349():
    nmi3 = force? nmi2;
    checkMissing(nmi3);
    ns8 = ld ns;
    check L350() else D103();
  L352():
    goto L64(i128, i129, c67, r196);
  L357():
    df3 = force? df2;
    checkMissing(df3);
    lengths = ldf lengths;
    check L358() else D107();
  L361():
    sym30 = ldf names;
    base30 = ldf names in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L363() else L364();
  L362():
    r204 = dyn base29(<lang `<-`(nms, names(`[[`(split, int)))>);
    goto L68(i140, i141, r204);
  L473():
    pm = ld pm;
    check L474() else D165();
  D103():
    deopt 378 [i112, i113, c59, ns8];
  D107():
    deopt 394 [i116, i117];
  D165():
    deopt 612 [i239, c96, pm];
  L69(i152, i153, r207):
    st nms = r207;
    c75 = `==`(r207, NULL);
    goto L68(i152, i153, c75);
  L71():
    goto L72(i146, i147);
  L72(i166, i167):
    sym32 = ldf c;
    base32 = ldf c in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L375() else L376();
  L96():
    goto L98(i241);
  L98(i249):
    x13 = ld x;
    check L483() else D168();
  L350():
    ns9 = force? ns8;
    checkMissing(ns9);
    match = ldf match in base;
    r195 = dyn match(nmi3, ns9, NA_INT, NULL);
    check L351() else D104();
  L358():
    p25 = prom<V +>{
      split9 = ld split;
      split10 = force? split9;
      checkMissing(split10);
      c72 = `is.object`(split10);
      if c72 then L1() else L2(split10);
    L0(dx70):
      return dx70;
    L1():
      dr42 = tryDispatchBuiltin.1("[[", split10);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(split12):
      int = ld int;
      int1 = force? int;
      __9 = ldf `[[` in base;
      r200 = dyn __9(split12, int1);
      goto L0(r200);
    L3():
      dx69 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx69);
    };
    r202 = dyn lengths(p25);
    check L359() else D108();
  L363():
    split13 = ld split;
    check L365() else D110();
  L364():
    r206 = dyn base30(<lang `[[`(split, int)>);
    goto L69(i140, i141, r206);
  L371():
    paste2 = ldf paste0;
    check L372() else D113();
  L474():
    pm1 = force? pm;
    checkMissing(pm1);
    r297 = `>`(pm1, 0);
    c99 = `as.logical`(r297);
    c100 = `&&`(c96, c99);
    goto L95(i239, c100);
  L476():
    x9 = ld x;
    check L477() else D166();
  D104():
    deopt 383 [i112, i113, c59, r195];
  D108():
    deopt 396 [i116, i117, r202];
  D110():
    deopt 403 [i140, i141, split13];
  D113():
    deopt 413 [i146, i147];
  D166():
    deopt 617 [i241, x9];
  D168():
    deopt 628 [i249, x13];
  L73(i172, i173, r218):
    st ss = r218;
    sym33 = ldf c;
    base33 = ldf c in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L381() else L382();
  L351():
    goto L65(i112, i113, c59, r195);
  L359():
    c73 = ldf c in base;
    r203 = dyn c73(df3, r202);
    check L360() else D109();
  L365():
    split14 = force? split13;
    checkMissing(split14);
    c74 = `is.object`(split14);
    if c74 then L366() else L367(i140, i141, split14);
  L372():
    p26 = prom<V +>{
      sym31 = ldf seq_along;
      base31 = ldf seq_along in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L2() else L3();
    L0(r211):
      return r211;
    L2():
      split17 = ld split;
      split18 = force? split17;
      checkMissing(split18);
      c77 = `is.object`(split18);
      if c77 then L4() else L5(split18);
    L3():
      r210 = dyn base31(<lang `[[`(split, int)>);
      goto L0(r210);
    L1(dx74):
      r213 = seq_along(dx74);
      goto L0(r213);
    L4():
      dr46 = tryDispatchBuiltin.1("[[", split18);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L6() else L5(dr46);
    L5(split20):
      int4 = ld int;
      int5 = force? int4;
      __11 = ldf `[[` in base;
      r212 = dyn __11(split20, int5);
      goto L1(r212);
    L6():
      dx73 = getTryDispatchBuiltinValue(dr46);
      goto L1(dx73);
    };
    r215 = dyn paste2("C", p26);
    check L373() else D114();
  L375():
    ss2 = ld ss;
    check L377() else D115();
  L376():
    r217 = dyn base32(<sym ss>, <lang unlist(lapply(`[[`(split, int), function((i=, e=), sum(`^`(`[`(e, i), 2.0)), NULL), `[`(effects, ai, y)))>);
    goto L73(i166, i167, r217);
  L477():
    x10 = force? x9;
    checkMissing(x10);
    c103 = `is.object`(x10);
    if c103 then L478() else L479(i241, x10);
  L483():
    x14 = force? x13;
    checkMissing(x14);
    l23 = ld ans;
    c104 = `is.object`(l23);
    if c104 then L484() else L485(i249, x14, l23);
  D109():
    deopt 398 [i116, i117, r203];
  D114():
    deopt 416 [i146, i147, r215];
  D115():
    deopt 422 [i166, i167, ss2];
  L70(i160, i161, dx72):
    names4 = ldf names in base;
    r209 = dyn names4(dx72);
    check L370() else D112();
  L74(i178, i179, r230):
    st nmrows = r230;
    goto L75(i178, i179);
  L97(i248, dx95):
    st x = dx95;
    goto L98(i248);
  L99(i253, dx98):
    st ans = dx98;
    goto L48(i253);
  L360():
    goto L67(i116, i117, r203);
  L366():
    dr44 = tryDispatchBuiltin.1("[[", split14);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L368() else L367(i140, i141, dr44);
  L367(i156, i157, split16):
    int2 = ld int;
    check L369() else D111();
  L373():
    st nms = r215;
    goto L72(i146, i147);
  L377():
    ss3 = force? ss2;
    checkMissing(ss3);
    unlist = ldf unlist;
    check L378() else D116();
  L381():
    nmrows2 = ld nmrows;
    check L383() else D119();
  L382():
    r229 = dyn base33(<sym nmrows>, <lang paste0("  ", nmi, ": ", nms)>);
    goto L74(i172, i173, r229);
  L478():
    dr66 = tryDispatchBuiltin.1("[", x10);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L480() else L479(i241, dr66);
  L479(i246, x12):
    pm2 = ld pm;
    check L481() else D167();
  L484():
    dr68 = tryDispatchBuiltin.0("[[<-", l23, x14);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L486() else L485(i249, x14, dr68);
  L485(i251, x16, l25):
    y13 = ld y;
    check L487() else D169();
  D111():
    deopt 405 [i156, i157, split16, int2];
  D112():
    deopt 409 [i160, i161, r209];
  D116():
    deopt 425 [i166, i167];
  D119():
    deopt 433 [i172, i173, nmrows2];
  D167():
    deopt 619 [i246, x12, pm2];
  D169():
    deopt 631 [i251, x16, l25, x14, y13];
  L368():
    dx71 = getTryDispatchBuiltinValue(dr44);
    goto L70(i140, i141, dx71);
  L369():
    int3 = force? int2;
    __10 = ldf `[[` in base;
    r208 = dyn __10(split16, int3);
    goto L70(i156, i157, r208);
  L370():
    goto L69(i160, i161, r209);
  L378():
    p30 = prom<V +>{
      lapply = ldf lapply;
      p27 = prom<V +>{
        split21 = ld split;
        split22 = force? split21;
        checkMissing(split22);
        c78 = `is.object`(split22);
        if c78 then L1() else L2(split22);
      L0(dx76):
        return dx76;
      L1():
        dr48 = tryDispatchBuiltin.1("[[", split22);
        dc24 = getTryDispatchBuiltinDispatched(dr48);
        if dc24 then L3() else L2(dr48);
      L2(split24):
        int6 = ld int;
        int7 = force? int6;
        __12 = ldf `[[` in base;
        r219 = dyn __12(split24, int7);
        goto L0(r219);
      L3():
        dx75 = getTryDispatchBuiltinValue(dr48);
        goto L0(dx75);
      };
      p28 = prom<V +>{
        r221 = clos inner3643595400;
        return r221;
      };
      p29 = prom<V +>{
        effects12 = ld effects;
        effects13 = force? effects12;
        checkMissing(effects13);
        c79 = `is.object`(effects13);
        if c79 then L1() else L2(effects13);
      L0(dx78):
        return dx78;
      L1():
        dr50 = tryDispatchBuiltin.1("[", effects13);
        dc25 = getTryDispatchBuiltinDispatched(dr50);
        if dc25 then L3() else L2(dr50);
      L2(effects15):
        ai4 = ld ai;
        ai5 = force? ai4;
        y9 = ld y;
        y10 = force? y9;
        __13 = ldf `[` in base;
        r223 = dyn __13(effects15, ai5, y10);
        goto L0(r223);
      L3():
        dx77 = getTryDispatchBuiltinValue(dr50);
        goto L0(dx77);
      };
      r225 = dyn lapply(p27, p28, p29);
      return r225;
    };
    r227 = dyn unlist(p30);
    check L379() else D117();
  L383():
    nmrows3 = force? nmrows2;
    checkMissing(nmrows3);
    paste3 = ldf paste0;
    check L384() else D120();
  L480():
    dx94 = getTryDispatchBuiltinValue(dr66);
    goto L97(i241, dx94);
  L481():
    pm3 = force? pm2;
    checkMissing(pm3);
    r298 = `-`(<missing>, pm3);
    __17 = ldf `[` in base;
    r299 = dyn __17(x10, r298, <missing>);
    goto L97(i246, r299);
  L486():
    dx97 = getTryDispatchBuiltinValue(dr68);
    goto L99(i249, dx97);
  L487():
    y14 = force? y13;
    ____ = ldf `[[<-` in base;
    r300 = dyn ____(l25, x14, y14);
    goto L99(i251, r300);
  D117():
    deopt 427 [i166, i167, r227];
  D120():
    deopt 436 [i172, i173];
  L379():
    c80 = ldf c in base;
    r228 = dyn c80(ss3, r227);
    check L380() else D118();
  L384():
    p31 = prom<V +>{
      nmi4 = ld nmi;
      nmi5 = force? nmi4;
      checkMissing(nmi5);
      return nmi5;
    };
    p32 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    r233 = dyn paste3("  ", p31, ": ", p32);
    check L385() else D121();
  D118():
    deopt 429 [i166, i167, r228];
  D121():
    deopt 441 [i172, i173, r233];
  L380():
    goto L73(i166, i167, r228);
  L385():
    c81 = ldf c in base;
    r234 = dyn c81(nmrows3, r233);
    check L386() else D122();
  D122():
    deopt 443 [i172, i173, r234];
  L386():
    goto L74(i172, i173, r234);
  }
}
fun inner1132925111(split, factors, names, asgn, `df.names`) {
  (reg split:*, reg factors:*, reg names:*, reg asgn:*, reg df_names:*) -+> V { var split:*, var factors:*, var names:*, var asgn:*, var `df.names`:*, reg names1:cls, reg split1:*, reg split2:V, reg p:p(V +), reg r1:V, reg unique:cls, reg asgn1:*, reg asgn2:V, reg p1:p(V +), reg r3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg i5:*, reg i6:V, reg r4:V, reg c1:L, reg i7:I, reg c2:V, reg _in_:cls, reg names2:*, reg names3:V, reg c4:L, reg names5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i9:*, reg i10:V, reg r5:V, reg __:cls, reg r6:V, reg p2:p(V +), reg ns:*, reg ns1:V, reg p3:p(V +), reg r9:V, reg c5:L, reg c6:V, reg c8:L, reg rownames:cls, reg factors1:*, reg factors2:V, reg p4:p(V +), reg r12:V, reg c9:L, reg i17:I, reg r14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i19:I, reg dx3:V, reg factors3:*, reg factors4:V, reg c10:L, reg i21:I, reg r16:V, reg factors6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i23:I, reg r18:V, reg dx5:V, reg i24:*, reg i25:V, reg __1:cls, reg r19:V, reg r20:V, reg __2:cls, reg r21:V, reg _in_1:cls, reg f:*, reg f1:V, reg p5:p(V +), reg ns2:*, reg ns3:V, reg p6:p(V +), reg r24:V, reg sym:cls, reg base:cls, reg guard:L, reg r25:V, reg i28:I, reg r26:V, reg sp:*, reg sp1:V, reg any:cls, reg r27:V, reg c11:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg i33:I, reg r29:V, reg sp2:*, reg sp3:V, reg sum:cls, reg r30:V, reg r31:V, reg c12:L, reg split3:*, reg split4:V, reg c13:L, reg i37:I, reg split6:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i39:I, reg dx7:V, reg f2:*, reg f3:V, reg c14:L, reg i41:I, reg split8:V, reg f5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i43:I, reg split10:V, reg dx9:V, reg sp4:*, reg sp5:V, reg __3:cls, reg r32:V, reg __4:cls, reg r33:V, reg setNames:cls, reg f6:*, reg f7:V, reg c15:L, reg f9:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg sp6:*, reg sp7:V, reg __5:cls, reg r34:V, reg p7:p(V +), reg r36:V, reg lapply:cls, reg nn:*, reg nn1:V, reg p8:p(V +), reg r38:cls, reg p9:p(V +), reg r40:V, reg strsplit:cls, reg df_names1:*, reg df_names2:V, reg c16:L, reg df_names4:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg asgn3:*, reg asgn4:V, reg i44:*, reg i45:V, reg r41:V, reg __6:cls, reg r42:V, reg p10:p(V +), reg r44:V, reg sapply:cls, reg term_coefs:*, reg term_coefs1:V, reg p11:p(V +), reg r46:cls, reg p12:p(V +), reg r48:V, reg nn2:*, reg nn3:V, reg l1:*, reg rownames__:cls, reg r49:V, reg setNames1:cls, reg apply:cls, reg expand_grid:cls, reg lapply1:cls, reg old:*, reg old1:V, reg p13:p(V +), reg names6:*, reg names7:V, reg p14:p(V +), reg r52:V, reg p15:p(V +), reg r54:V, reg p16:p(V +), reg r56:cls, reg p17:p(V +), reg r58:V, reg p18:p(V +), reg r60:V, reg sapply1:cls, reg nn4:*, reg nn5:V, reg p19:p(V +), reg r62:cls, reg p20:p(V +), reg r64:V, reg apply1:cls, reg tmp:*, reg tmp1:V, reg p21:p(V +), reg r66:cls, reg p22:p(V +), reg r68:V, reg lapply2:cls, reg splitnames:*, reg splitnames1:V, reg p23:p(V +), reg r70:cls, reg p24:p(V +), reg r72:V, reg new:*, reg new1:V, reg c17:L, reg i47:I, reg new3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i49:I, reg dx15:V, reg sapply2:cls, reg new4:*, reg new5:V, reg p25:p(V +), reg r74:cls, reg p26:p(V +), reg r76:V, reg __7:cls, reg r77:V, reg l2:*, reg c18:L, reg i51:I, reg dx17:V, reg l4:*, reg dr16:V, reg dc8:L, reg dx19:V, reg i53:I, reg dx20:V, reg dx21:V, reg names8:*, reg names9:V, reg c19:L, reg i55:I, reg dx24:V, reg l6:*, reg dx25:V, reg names11:V, reg dr18:V, reg dc9:L, reg dx28:V, reg i57:I, reg dx29:V, reg l8:*, reg dx30:V, reg dx31:V, reg i58:*, reg i59:V, reg r78:V, reg __8:cls, reg r79:V, reg ____:cls, reg r80:V, reg i60:I, reg dx32:V, reg split11:*, reg split12:V, reg c20:L, reg i62:I, reg split14:V, reg dr20:V, reg dc10:L, reg dx33:V, reg i64:I, reg dx34:V, reg f10:*, reg f11:V, reg c21:L, reg i66:I, reg split16:V, reg f13:V, reg dr22:V, reg dc11:L, reg dx35:V, reg i68:I, reg split18:V, reg dx36:V, reg sp8:*, reg sp9:V, reg __9:cls, reg r81:V, reg __10:cls, reg r82:V, reg df_names5:*, reg df_names6:V, reg c22:L, reg i70:I, reg df_names8:V, reg dr24:V, reg dc12:L, reg dx37:V, reg i72:I, reg dx38:V, reg asgn5:*, reg asgn6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r83:V, reg i75:I, reg df_names11:V, reg asgn9:V, reg r84:V, reg f14:*, reg f15:V, reg c23:L, reg i77:I, reg df_names13:V, reg asgn11:V, reg f17:V, reg dr26:V, reg dc13:L, reg dx39:V, reg i79:I, reg df_names15:V, reg asgn13:V, reg dx40:V, reg sp10:*, reg sp11:V, reg __11:cls, reg r85:V, reg names12:*, reg names13:V, reg match:cls, reg r86:V, reg r87:V, reg r88:V, reg __12:cls, reg r89:V, reg strsplit1:cls, reg df_names16:*, reg df_names17:V, reg c24:L, reg df_names19:V, reg dr28:V, reg dc14:L, reg dx41:V, reg dx42:V, reg asgn14:*, reg asgn15:V, reg i80:*, reg i81:V, reg r90:V, reg __13:cls, reg r91:V, reg p27:p(V +), reg r93:V, reg sapply3:cls, reg term_coefs2:*, reg term_coefs3:V, reg p28:p(V +), reg r95:cls, reg p29:p(V +), reg r97:V, reg lapply3:cls, reg old2:*, reg old3:V, reg p30:p(V +), reg r99:cls, reg p31:p(V +), reg r101:V, reg new6:*, reg new7:V, reg l9:*, reg c25:L, reg i83:I, reg new9:V, reg l11:*, reg dr30:V, reg dc15:L, reg dx43:V, reg i85:I, reg new11:V, reg dx44:V, reg names14:*, reg names15:V, reg c26:L, reg i87:I, reg new14:V, reg l13:*, reg new15:V, reg names17:V, reg dr32:V, reg dc16:L, reg dx45:V, reg i89:I, reg new18:V, reg l15:*, reg new19:V, reg dx46:V, reg i90:*, reg i91:V, reg r102:V, reg __14:cls, reg r103:V, reg ____1:cls, reg r104:V, reg i92:I, reg split19:*, reg split20:V |
    mkenv;
    st split = split;
    st factors = factors;
    st names = names;
    st asgn = asgn;
    st `df.names` = df_names;
    names1 = ldf names;
    check L25() else D0();
  D0():
    deopt 1 [];
  L25():
    p = prom<V +>{
      split1 = ld split;
      split2 = force? split1;
      checkMissing(split2);
      return split2;
    };
    r1 = dyn names1(p);
    check L26() else D1();
  D1():
    deopt 3 [r1];
  L26():
    st ns = r1;
    unique = ldf unique;
    check L27() else D2();
  D2():
    deopt 6 [];
  L27():
    p1 = prom<V +>{
      asgn1 = ld asgn;
      asgn2 = force? asgn1;
      checkMissing(asgn2);
      return asgn2;
    };
    r3 = dyn unique(p1);
    check L28() else D3();
  D3():
    deopt 8 [r3];
  L28():
    s = toForSeq(r3);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L29() else L24();
  L24():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    i5 = ld i;
    check L30() else D4();
  L29():
    split19 = ld split;
    check L142() else D62();
  D4():
    deopt 9 [i2, i5];
  D62():
    deopt 210 [split19];
  L30():
    i6 = force? i5;
    checkMissing(i6);
    r4 = `==`(i6, 0.0);
    c1 = `as.logical`(r4);
    if c1 then L1(i2, c1) else L31();
  L142():
    split20 = force? split19;
    checkMissing(split20);
    popenv;
    return split20;
  L1(i7, c2):
    c8 = `as.logical`(c2);
    if c8 then L35() else L2();
  L31():
    _in_ = ldf `%in%`;
    check L32() else D5();
  D5():
    deopt 14 [i2, c1];
  L2():
    rownames = ldf rownames;
    check L38() else D7();
  L32():
    p2 = prom<V +>{
      names2 = ld names;
      names3 = force? names2;
      checkMissing(names3);
      c4 = `is.object`(names3);
      if c4 then L1() else L2(names3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", names3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(names5):
      i9 = ld i;
      i10 = force? i9;
      checkMissing(i10);
      r5 = `+`(i10, 1);
      __ = ldf `[` in base;
      r6 = dyn __(names5, r5);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      return ns1;
    };
    r9 = dyn _in_(p2, p3);
    check L33() else D6();
  L35():
    goto L0(i7);
  D6():
    deopt 17 [i2, c1, r9];
  D7():
    deopt 24 [i7];
  L33():
    c5 = `as.logical`(r9);
    c6 = `||`(c1, c5);
    goto L1(i2, c6);
  L38():
    p4 = prom<V +>{
      factors1 = ld factors;
      factors2 = force? factors1;
      checkMissing(factors2);
      return factors2;
    };
    r12 = dyn rownames(p4);
    check L39() else D8();
  D8():
    deopt 26 [i7, r12];
  L39():
    c9 = `is.object`(r12);
    if c9 then L40() else L41(i7, r12);
  L4(i19, dx3):
    st f = dx3;
    _in_1 = ldf `%in%`;
    check L48() else D11();
  L40():
    dr2 = tryDispatchBuiltin.1("[", r12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(i7, dr2);
  L41(i17, r14):
    factors3 = ld factors;
    check L43() else D9();
  D9():
    deopt 27 [i17, r14, factors3];
  D11():
    deopt 39 [i19];
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(i7, dx2);
  L43():
    factors4 = force? factors3;
    checkMissing(factors4);
    c10 = `is.object`(factors4);
    if c10 then L44() else L45(i17, r14, factors4);
  L48():
    p5 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p6 = prom<V +>{
      ns2 = ld ns;
      ns3 = force? ns2;
      checkMissing(ns3);
      return ns3;
    };
    r24 = dyn _in_1(p5, p6);
    check L49() else D12();
  D12():
    deopt 42 [i19, r24];
  L5(i23, r18, dx5):
    r20 = `>`(dx5, 0.0);
    __2 = ldf `[` in base;
    r21 = dyn __2(r18, r20);
    goto L4(i23, r21);
  L44():
    dr4 = tryDispatchBuiltin.1("[", factors4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L46() else L45(i17, r14, dr4);
  L45(i21, r16, factors6):
    i24 = ld i;
    check L47() else D10();
  L49():
    st sp = r24;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L50() else L51();
  D10():
    deopt 30 [i21, r16, factors6, i24];
  L6(i28, r26):
    c11 = `as.logical`(r26);
    if c11 then L54() else L7();
  L46():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(i17, r14, dx4);
  L47():
    i25 = force? i24;
    __1 = ldf `[` in base;
    r19 = dyn __1(factors4, <missing>, i25);
    goto L5(i21, r16, r19);
  L50():
    sp = ld sp;
    check L52() else D13();
  L51():
    r25 = dyn base(<sym sp>);
    goto L6(i19, r25);
  D13():
    deopt 46 [i19, sp];
  L7():
    goto L23(i28);
  L23(i92):
    goto L0(i92);
  L52():
    sp1 = force? sp;
    checkMissing(sp1);
    any = ldf any in base;
    r27 = dyn any(sp1);
    check L53() else D14();
  L54():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L55() else L56();
  D14():
    deopt 49 [i19, r27];
  L8(i33, r29):
    r31 = `>`(r29, 1);
    c12 = `as.logical`(r31);
    if c12 then L59() else L9();
  L53():
    goto L6(i19, r27);
  L55():
    sp2 = ld sp;
    check L57() else D15();
  L56():
    r28 = dyn base1(<sym sp>);
    goto L8(i28, r28);
  D15():
    deopt 52 [i28, sp2];
  L9():
    split11 = ld split;
    check L103() else D44();
  L15(i60, dx32):
    goto L23(i60);
  L57():
    sp3 = force? sp2;
    checkMissing(sp3);
    sum = ldf sum in base;
    r30 = dyn sum(sp3);
    check L58() else D16();
  L59():
    split3 = ld split;
    check L60() else D17();
  D16():
    deopt 55 [i28, r30];
  D17():
    deopt 58 [i33, split3];
  D44():
    deopt 143 [i33, split11];
  L58():
    goto L8(i28, r30);
  L60():
    split4 = force? split3;
    checkMissing(split4);
    c13 = `is.object`(split4);
    if c13 then L61() else L62(i33, split4);
  L103():
    split12 = force? split11;
    checkMissing(split12);
    c20 = `is.object`(split12);
    if c20 then L104() else L105(i33, split12);
  L10(i39, dx7):
    st old = dx7;
    setNames = ldf setNames;
    check L69() else D20();
  L16(i64, dx34):
    st old = dx34;
    df_names5 = ld `df.names`;
    check L112() else D47();
  L61():
    dr6 = tryDispatchBuiltin.1("[", split4);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L63() else L62(i33, dr6);
  L62(i37, split6):
    f2 = ld f;
    check L64() else D18();
  L104():
    dr20 = tryDispatchBuiltin.1("[[", split12);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L106() else L105(i33, dr20);
  L105(i62, split14):
    f10 = ld f;
    check L107() else D45();
  D18():
    deopt 60 [i37, split6, f2];
  D20():
    deopt 68 [i39];
  D45():
    deopt 145 [i62, split14, f10];
  D47():
    deopt 152 [i64, df_names5];
  L63():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(i33, dx6);
  L64():
    f3 = force? f2;
    checkMissing(f3);
    c14 = `is.object`(f3);
    if c14 then L65() else L66(i37, split6, f3);
  L69():
    p7 = prom<V +>{
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      c15 = `is.object`(f7);
      if c15 then L1() else L2(f7);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", f7);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(f9):
      sp6 = ld sp;
      sp7 = force? sp6;
      __5 = ldf `[` in base;
      r34 = dyn __5(f9, sp7);
      goto L0(r34);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r36 = dyn setNames[nm](p7);
    check L70() else D21();
  L106():
    dx33 = getTryDispatchBuiltinValue(dr20);
    goto L16(i33, dx33);
  L107():
    f11 = force? f10;
    checkMissing(f11);
    c21 = `is.object`(f11);
    if c21 then L108() else L109(i62, split14, f11);
  L112():
    df_names6 = force? df_names5;
    checkMissing(df_names6);
    c22 = `is.object`(df_names6);
    if c22 then L113() else L114(i64, df_names6);
  D21():
    deopt 71 [i39, r36];
  L11(i43, split10, dx9):
    __4 = ldf `[` in base;
    r33 = dyn __4(split10, dx9);
    goto L10(i43, r33);
  L17(i68, split18, dx36):
    __10 = ldf `[[` in base;
    r82 = dyn __10(split18, dx36);
    goto L16(i68, r82);
  L18(i72, dx38):
    st `marg.coefs` = dx38;
    strsplit1 = ldf strsplit;
    check L126() else D53();
  L65():
    dr8 = tryDispatchBuiltin.1("[", f3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L67() else L66(i37, split6, dr8);
  L66(i41, split8, f5):
    sp4 = ld sp;
    check L68() else D19();
  L70():
    st nn = r36;
    lapply = ldf lapply;
    check L71() else D22();
  L108():
    dr22 = tryDispatchBuiltin.1("[", f11);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L110() else L109(i62, split14, dr22);
  L109(i66, split16, f13):
    sp8 = ld sp;
    check L111() else D46();
  L113():
    dr24 = tryDispatchBuiltin.1("[", df_names6);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L115() else L114(i64, dr24);
  L114(i70, df_names8):
    asgn5 = ld asgn;
    check L116() else D48();
  D19():
    deopt 62 [i41, split8, f5, sp4];
  D22():
    deopt 74 [i39];
  D46():
    deopt 147 [i66, split16, f13, sp8];
  D48():
    deopt 154 [i70, df_names8, asgn5];
  D53():
    deopt 174 [i72];
  L67():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L11(i37, split6, dx8);
  L68():
    sp5 = force? sp4;
    __3 = ldf `[` in base;
    r32 = dyn __3(f5, sp5);
    goto L11(i41, split8, r32);
  L71():
    p8 = prom<V +>{
      nn = ld nn;
      nn1 = force? nn;
      checkMissing(nn1);
      return nn1;
    };
    p9 = prom<V +>{
      r38 = clos inner2501545716;
      return r38;
    };
    r40 = dyn lapply(p8, p9);
    check L72() else D23();
  L110():
    dx35 = getTryDispatchBuiltinValue(dr22);
    goto L17(i62, split14, dx35);
  L111():
    sp9 = force? sp8;
    __9 = ldf `[` in base;
    r81 = dyn __9(f13, sp9);
    goto L17(i66, split16, r81);
  L115():
    dx37 = getTryDispatchBuiltinValue(dr24);
    goto L18(i64, dx37);
  L116():
    asgn6 = force? asgn5;
    checkMissing(asgn6);
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L117() else L118();
  L126():
    p27 = prom<V +>{
      df_names16 = ld `df.names`;
      df_names17 = force? df_names16;
      checkMissing(df_names17);
      c24 = `is.object`(df_names17);
      if c24 then L1() else L2(df_names17);
    L0(dx42):
      return dx42;
    L1():
      dr28 = tryDispatchBuiltin.1("[", df_names17);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(df_names19):
      asgn14 = ld asgn;
      asgn15 = force? asgn14;
      checkMissing(asgn15);
      i80 = ld i;
      i81 = force? i80;
      checkMissing(i81);
      r90 = `==`(asgn15, i81);
      __13 = ldf `[` in base;
      r91 = dyn __13(df_names19, r90);
      goto L0(r91);
    L3():
      dx41 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx41);
    };
    r93 = dyn strsplit1[, , fixed](p27, ":", TRUE);
    check L127() else D54();
  D23():
    deopt 77 [i39, r40];
  D54():
    deopt 179 [i72, r93];
  L19(i75, df_names11, asgn9, r84):
    r87 = `-`(r84, 1);
    r88 = `==`(asgn9, r87);
    __12 = ldf `[` in base;
    r89 = dyn __12(df_names11, r88);
    goto L18(i75, r89);
  L72():
    st marg = r40;
    strsplit = ldf strsplit;
    check L73() else D24();
  L117():
    f14 = ld f;
    check L119() else D49();
  L118():
    r83 = dyn base2(<lang `[`(f, sp)>, <sym names>);
    goto L19(i70, df_names8, asgn6, r83);
  L127():
    st `term.coefs` = r93;
    sapply3 = ldf sapply;
    check L128() else D55();
  D24():
    deopt 80 [i39];
  D49():
    deopt 157 [i70, df_names8, asgn6, f14];
  D55():
    deopt 182 [i72];
  L73():
    p10 = prom<V +>{
      df_names1 = ld `df.names`;
      df_names2 = force? df_names1;
      checkMissing(df_names2);
      c16 = `is.object`(df_names2);
      if c16 then L1() else L2(df_names2);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", df_names2);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(df_names4):
      asgn3 = ld asgn;
      asgn4 = force? asgn3;
      checkMissing(asgn4);
      i44 = ld i;
      i45 = force? i44;
      checkMissing(i45);
      r41 = `==`(asgn4, i45);
      __6 = ldf `[` in base;
      r42 = dyn __6(df_names4, r41);
      goto L0(r42);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r44 = dyn strsplit[, , fixed](p10, ":", TRUE);
    check L74() else D25();
  L119():
    f15 = force? f14;
    checkMissing(f15);
    c23 = `is.object`(f15);
    if c23 then L120() else L121(i70, df_names8, asgn6, f15);
  L128():
    p28 = prom<V +>{
      term_coefs2 = ld `term.coefs`;
      term_coefs3 = force? term_coefs2;
      checkMissing(term_coefs3);
      return term_coefs3;
    };
    p29 = prom<V +>{
      r95 = clos inner2501545716;
      return r95;
    };
    r97 = dyn sapply3(p28, p29);
    check L129() else D56();
  D25():
    deopt 85 [i39, r44];
  D56():
    deopt 185 [i72, r97];
  L20(i79, df_names15, asgn13, dx40):
    names12 = ld names;
    check L124() else D51();
  L74():
    st `term.coefs` = r44;
    sapply = ldf sapply;
    check L75() else D26();
  L120():
    dr26 = tryDispatchBuiltin.1("[", f15);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L122() else L121(i70, df_names8, asgn6, dr26);
  L121(i77, df_names13, asgn11, f17):
    sp10 = ld sp;
    check L123() else D50();
  L129():
    st ttc = r97;
    lapply3 = ldf lapply;
    check L130() else D57();
  D26():
    deopt 88 [i39];
  D50():
    deopt 159 [i77, df_names13, asgn11, f17, sp10];
  D51():
    deopt 162 [i79, df_names15, asgn13, names12];
  D57():
    deopt 188 [i72];
  L75():
    p11 = prom<V +>{
      term_coefs = ld `term.coefs`;
      term_coefs1 = force? term_coefs;
      checkMissing(term_coefs1);
      return term_coefs1;
    };
    p12 = prom<V +>{
      r46 = clos inner2501545716;
      return r46;
    };
    r48 = dyn sapply(p11, p12);
    check L76() else D27();
  L122():
    dx39 = getTryDispatchBuiltinValue(dr26);
    goto L20(i70, df_names8, asgn6, dx39);
  L123():
    sp11 = force? sp10;
    __11 = ldf `[` in base;
    r85 = dyn __11(f17, sp11);
    goto L20(i77, df_names13, asgn11, r85);
  L124():
    names13 = force? names12;
    checkMissing(names13);
    match = ldf match in base;
    r86 = dyn match(dx40, names13, NA_INT, NULL);
    check L125() else D52();
  L130():
    p30 = prom<V +>{
      old2 = ld old;
      old3 = force? old2;
      checkMissing(old3);
      return old3;
    };
    p31 = prom<V +>{
      r99 = clos inner2501545716;
      return r99;
    };
    r101 = dyn lapply3(p30, p31);
    check L131() else D58();
  D27():
    deopt 91 [i39, r48];
  D52():
    deopt 167 [i79, df_names15, asgn13, r86];
  D58():
    deopt 191 [i72, r101];
  L76():
    st ttc = r48;
    nn2 = ld nn;
    check L77() else D28();
  L125():
    goto L19(i79, df_names15, asgn13, r86);
  L131():
    st new = r101;
    new6 = ld new;
    check L132() else D59();
  D28():
    deopt 93 [i39, nn2];
  D59():
    deopt 193 [i72, new6];
  L77():
    nn3 = force? nn2;
    checkMissing(nn3);
    l1 = ld ttc;
    rownames__ = ldf `rownames<-`;
    check L78() else D29();
  L132():
    new7 = force? new6;
    checkMissing(new7);
    l9 = ld split;
    c25 = `is.object`(l9);
    if c25 then L133() else L134(i72, new7, l9);
  D29():
    deopt 96 [i39, nn3, l1, nn3];
  L21(i85, new11, dx44):
    st split = dx44;
    goto L15(i85, new11);
  L78():
    r49 = dyn rownames__(l1, NULL, nn3);
    check L79() else D30();
  L133():
    dr30 = tryDispatchBuiltin.0("[[<-", l9, new7);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L135() else L134(i72, new7, dr30);
  L134(i83, new9, l11):
    names14 = ld names;
    check L136() else D60();
  D30():
    deopt 98 [i39, nn3, r49];
  D60():
    deopt 196 [i83, new9, l11, new7, names14];
  L79():
    st ttc = r49;
    setNames1 = ldf setNames;
    check L80() else D31();
  L135():
    dx43 = getTryDispatchBuiltinValue(dr30);
    goto L21(i72, new7, dx43);
  L136():
    names15 = force? names14;
    checkMissing(names15);
    c26 = `is.object`(names15);
    if c26 then L137() else L138(i83, new9, l11, new7, names15);
  D31():
    deopt 101 [i39];
  L22(i89, new18, l15, new19, dx46):
    ____1 = ldf `[[<-` in base;
    r104 = dyn ____1(l15, new19, dx46);
    goto L21(i89, new18, r104);
  L80():
    p18 = prom<V +>{
      apply = ldf apply;
      p16 = prom<V +>{
        expand_grid = ldf `expand.grid`;
        p15 = prom<V +>{
          lapply1 = ldf lapply;
          p13 = prom<V +>{
            old = ld old;
            old1 = force? old;
            checkMissing(old1);
            return old1;
          };
          p14 = prom<V +>{
            names6 = ld names;
            names7 = force? names6;
            checkMissing(names7);
            return names7;
          };
          r52 = dyn lapply1(p13, p14);
          return r52;
        };
        r54 = dyn expand_grid(p15);
        return r54;
      };
      p17 = prom<V +>{
        r56 = clos inner2501545716;
        return r56;
      };
      r58 = dyn apply(p16, 1, p17);
      return r58;
    };
    r60 = dyn setNames1[nm](p18);
    check L81() else D32();
  L137():
    dr32 = tryDispatchBuiltin.1("[", names15);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L139() else L138(i83, new9, l11, new7, dr32);
  L138(i87, new14, l13, new15, names17):
    i90 = ld i;
    check L140() else D61();
  D32():
    deopt 104 [i39, r60];
  D61():
    deopt 198 [i87, new14, l13, new15, names17, i90];
  L81():
    st splitnames = r60;
    sapply1 = ldf sapply;
    check L82() else D33();
  L139():
    dx45 = getTryDispatchBuiltinValue(dr32);
    goto L22(i83, new9, l11, new7, dx45);
  L140():
    i91 = force? i90;
    checkMissing(i91);
    r102 = `+`(i91, 1);
    __14 = ldf `[` in base;
    r103 = dyn __14(names17, r102);
    goto L22(i87, new14, l13, new15, r103);
  D33():
    deopt 107 [i39];
  L82():
    p19 = prom<V +>{
      nn4 = ld nn;
      nn5 = force? nn4;
      checkMissing(nn5);
      return nn5;
    };
    p20 = prom<V +>{
      r62 = clos inner3002224933;
      return r62;
    };
    r64 = dyn sapply1(p19, p20);
    check L83() else D34();
  D34():
    deopt 110 [i39, r64];
  L83():
    st tmp = r64;
    apply1 = ldf apply;
    check L84() else D35();
  D35():
    deopt 113 [i39];
  L84():
    p21 = prom<V +>{
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      return tmp1;
    };
    p22 = prom<V +>{
      r66 = clos inner2501545716;
      return r66;
    };
    r68 = dyn apply1(p21, 1, p22);
    check L85() else D36();
  D36():
    deopt 117 [i39, r68];
  L85():
    st tmp = r68;
    lapply2 = ldf lapply;
    check L86() else D37();
  D37():
    deopt 120 [i39];
  L86():
    p23 = prom<V +>{
      splitnames = ld splitnames;
      splitnames1 = force? splitnames;
      checkMissing(splitnames1);
      return splitnames1;
    };
    p24 = prom<V +>{
      r70 = clos inner2501545716;
      return r70;
    };
    r72 = dyn lapply2(p23, p24);
    check L87() else D38();
  D38():
    deopt 123 [i39, r72];
  L87():
    st new = r72;
    new = ld new;
    check L88() else D39();
  D39():
    deopt 125 [i39, new];
  L88():
    new1 = force? new;
    checkMissing(new1);
    c17 = `is.object`(new1);
    if c17 then L89() else L90(i39, new1);
  L12(i49, dx15):
    l2 = ld split;
    c18 = `is.object`(l2);
    if c18 then L94() else L95(i49, dx15, l2);
  L89():
    dr14 = tryDispatchBuiltin.1("[", new1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L91() else L90(i39, dr14);
  L90(i47, new3):
    sapply2 = ldf sapply;
    check L92() else D40();
  D40():
    deopt 128 [i47, new3];
  L13(i53, dx20, dx21):
    st split = dx21;
    goto L15(i53, dx20);
  L91():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L12(i39, dx14);
  L92():
    p25 = prom<V +>{
      new4 = ld new;
      new5 = force? new4;
      checkMissing(new5);
      return new5;
    };
    p26 = prom<V +>{
      r74 = clos inner2501545716;
      return r74;
    };
    r76 = dyn sapply2(p25, p26);
    check L93() else D41();
  L94():
    dr16 = tryDispatchBuiltin.0("[[<-", l2, dx15);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L96() else L95(i49, dx15, dr16);
  L95(i51, dx17, l4):
    names8 = ld names;
    check L97() else D42();
  D41():
    deopt 131 [i47, new3, r76];
  D42():
    deopt 134 [i51, dx17, l4, dx15, names8];
  L93():
    __7 = ldf `[` in base;
    r77 = dyn __7(new3, r76);
    goto L12(i47, r77);
  L96():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L13(i49, dx15, dx19);
  L97():
    names9 = force? names8;
    checkMissing(names9);
    c19 = `is.object`(names9);
    if c19 then L98() else L99(i51, dx17, l4, dx15, names9);
  L14(i57, dx29, l8, dx30, dx31):
    ____ = ldf `[[<-` in base;
    r80 = dyn ____(l8, dx30, dx31);
    goto L13(i57, dx29, r80);
  L98():
    dr18 = tryDispatchBuiltin.1("[", names9);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L100() else L99(i51, dx17, l4, dx15, dr18);
  L99(i55, dx24, l6, dx25, names11):
    i58 = ld i;
    check L101() else D43();
  D43():
    deopt 136 [i55, dx24, l6, dx25, names11, i58];
  L100():
    dx28 = getTryDispatchBuiltinValue(dr18);
    goto L14(i51, dx17, l4, dx15, dx28);
  L101():
    i59 = force? i58;
    checkMissing(i59);
    r78 = `+`(i59, 1);
    __8 = ldf `[` in base;
    r79 = dyn __8(names11, r78);
    goto L14(i55, dx24, l6, dx25, r79);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg df_names:*, reg df_names1:V, reg c:L, reg df_names3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg asgn:*, reg asgn1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg df_names6:V, reg asgn4:V, reg r1:V, reg x1:*, reg x2:V, reg names:*, reg names1:V, reg match:cls, reg r2:V, reg r3:V, reg r4:V, reg __:cls, reg r5:V |
    mkenv;
    st x = x;
    df_names = ld `df.names`;
    check L2() else D0();
  D0():
    deopt 0 [df_names];
  L2():
    df_names1 = force? df_names;
    checkMissing(df_names1);
    c = `is.object`(df_names1);
    if c then L3() else L4(df_names1);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[", df_names1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(df_names3):
    asgn = ld asgn;
    check L6() else D1();
  D1():
    deopt 2 [df_names3, asgn];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    asgn1 = force? asgn;
    checkMissing(asgn1);
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(df_names6, asgn4, r1):
    r3 = `-`(r1, 1);
    r4 = `==`(asgn4, r3);
    __ = ldf `[` in base;
    r5 = dyn __(df_names6, r4);
    goto L0(r5);
  L7():
    x1 = ld x;
    check L9() else D2();
  L8():
    r = dyn base(<sym x>, <sym names>);
    goto L1(df_names3, asgn1, r);
  D2():
    deopt 5 [df_names3, asgn1, x1];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    names = ld names;
    check L10() else D3();
  D3():
    deopt 7 [df_names3, asgn1, names];
  L10():
    names1 = force? names;
    checkMissing(names1);
    match = ldf match in base;
    r2 = dyn match(x2, names1, NA_INT, NULL);
    check L11() else D4();
  D4():
    deopt 12 [df_names3, asgn1, r2];
  L11():
    goto L1(df_names3, asgn1, r2);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg names:cls, reg old:*, reg old1:V, reg c:L, reg old3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V, reg c1:L, reg r4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg r9:V, reg ttc:*, reg ttc1:V, reg c2:L, reg r11:V, reg ttc3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r13:V, reg dx5:V, reg i3:*, reg i4:V, reg __1:cls, reg r14:V, reg marg:*, reg marg1:V, reg c3:L, reg r16:V, reg marg3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r18:V, reg dx7:V, reg i5:*, reg i6:V, reg __2:cls, reg r19:V, reg match:cls, reg r20:V, reg __3:cls, reg r21:V |
    mkenv;
    st i = i;
    names = ldf names;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      old = ld old;
      old1 = force? old;
      checkMissing(old1);
      c = `is.object`(old1);
      if c then L1() else L2(old1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", old1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(old3):
      i1 = ld i;
      i2 = force? i1;
      __ = ldf `[[` in base;
      r = dyn __(old3, i2);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn names(p);
    check L5() else D1();
  D1():
    deopt 3 [r2];
  L5():
    c1 = `is.object`(r2);
    if c1 then L6() else L7(r2);
  L0(dx3):
    popenv;
    return dx3;
  L6():
    dr2 = tryDispatchBuiltin.1("[", r2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L8() else L7(dr2);
  L7(r4):
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r8, r9):
    __3 = ldf `[` in base;
    r21 = dyn __3(r8, r9);
    goto L0(r21);
  L8():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L9():
    ttc = ld ttc;
    check L11() else D2();
  L10():
    r7 = dyn base(<lang `[`(ttc, i, )>, <lang `[[`(marg, i)>);
    goto L1(r4, r7);
  D2():
    deopt 6 [r4, ttc];
  L11():
    ttc1 = force? ttc;
    checkMissing(ttc1);
    c2 = `is.object`(ttc1);
    if c2 then L12() else L13(r4, ttc1);
  L2(r13, dx5):
    marg = ld marg;
    check L16() else D4();
  L12():
    dr4 = tryDispatchBuiltin.1("[", ttc1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L14() else L13(r4, dr4);
  L13(r11, ttc3):
    i3 = ld i;
    check L15() else D3();
  D3():
    deopt 8 [r11, ttc3, i3];
  D4():
    deopt 13 [r13, marg];
  L14():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L2(r4, dx4);
  L15():
    i4 = force? i3;
    __1 = ldf `[` in base;
    r14 = dyn __1(ttc1, i4, <missing>);
    goto L2(r11, r14);
  L16():
    marg1 = force? marg;
    checkMissing(marg1);
    c3 = `is.object`(marg1);
    if c3 then L17() else L18(r13, marg1);
  L3(r18, dx7):
    match = ldf match in base;
    r20 = dyn match(dx5, dx7, NA_INT, NULL);
    check L21() else D6();
  L17():
    dr6 = tryDispatchBuiltin.1("[[", marg1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L19() else L18(r13, dr6);
  L18(r16, marg3):
    i5 = ld i;
    check L20() else D5();
  D5():
    deopt 15 [r16, marg3, i5];
  D6():
    deopt 21 [r18, r20];
  L19():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L3(r13, dx6);
  L20():
    i6 = force? i5;
    __2 = ldf `[[` in base;
    r19 = dyn __2(marg3, i6);
    goto L3(r16, r19);
  L21():
    goto L1(r18, r20);
  }
}
fun inner3643595400(i, e) {
  (reg i:*, reg e:*) -+> V { var i:*, var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r2:V, reg r3:V, reg sum:cls, reg r4:V |
    mkenv;
    st i = i;
    st e = e;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    e1 = ld e;
    check L4() else D0();
  L3():
    r = dyn base(<lang `^`(`[`(e, i), 2.0)>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L4():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.object`(e2);
    if c then L5() else L6(e2);
  L1(dx1):
    r3 = `^`(dx1, 2.0);
    sum = ldf sum in base;
    r4 = dyn sum(r3);
    check L9() else D2();
  L5():
    dr = tryDispatchBuiltin.1("[", e2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(e4):
    i1 = ld i;
    check L8() else D1();
  D1():
    deopt 4 [e4, i1];
  D2():
    deopt 10 [r4];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L8():
    i2 = force? i1;
    __ = ldf `[` in base;
    r2 = dyn __(e4, i2);
    goto L1(r2);
  L9():
    goto L0(r4);
  }
}