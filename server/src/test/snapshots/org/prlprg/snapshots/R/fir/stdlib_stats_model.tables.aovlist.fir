fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1749473219;
    st `model.tables.aovlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1749473219(x, type, se, `...`) {
  (reg x:*, reg type:*, reg se:*, reg ddd:dots) -+> V { var x:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var se:*, reg se_isMissing:L, reg se_orDefault:*, var `...`:dots?, reg match_arg:cls, reg type1:*, reg type2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg type3:*, reg type4:V, reg r6:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg type5:*, reg type6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg proj:cls, reg x1:*, reg x2:V, reg p4:p(V +), reg r13:V, reg model_frame_aovlist:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg r15:V, reg lapply:cls, reg prjs:*, reg prjs1:V, reg p6:p(V +), reg attr:*, reg attr1:V, reg p7:p(V +), reg r18:V, reg unlist:cls, reg lapply1:cls, reg factors:*, reg factors1:V, reg p8:p(V +), reg names:*, reg names1:V, reg p9:p(V +), reg r21:V, reg p10:p(V +), reg r23:V, reg unlist1:cls, reg factors2:*, reg factors3:V, reg p11:p(V +), reg r25:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r26:V, reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg factors4:*, reg factors5:V, reg names2:cls, reg r30:V, reg lengths:cls, reg factors6:*, reg factors7:V, reg p12:p(V +), reg r32:V, reg rep_int:cls, reg r33:V, reg unlist2:cls, reg dn_proj:*, reg dn_proj1:V, reg p13:p(V +), reg r35:V, reg l:*, reg names__:cls, reg r36:V, reg l1:*, reg names__1:cls, reg r37:V, reg l2:*, reg names__2:cls, reg r38:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg prjs2:*, reg prjs3:V, reg attr2:cls, reg r41:V, reg type7:*, reg type8:V, reg r42:V, reg c2:L, reg c3:V, reg type9:*, reg type10:V, reg r43:V, reg c5:L, reg c6:V, reg c8:L, reg anyDuplicated:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg dn_proj2:*, reg dn_proj3:V, reg names3:cls, reg r46:V, reg c9:L, reg r48:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r51:V, reg r52:V, reg r53:V, reg dn_proj4:*, reg dn_proj5:V, reg names4:cls, reg r54:V, reg r55:V, reg __:cls, reg r56:V, reg p14:p(V +), reg r58:V, reg c10:L, reg eff_aovlist:cls, reg x5:*, reg x6:V, reg p15:p(V +), reg r60:V, reg apply:cls, reg efficiency:*, reg efficiency1:V, reg p16:p(V +), reg r62:cls, reg p17:p(V +), reg r64:V, reg r65:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r67:V, reg r68:V, reg efficiency2:*, reg efficiency3:V, reg any:cls, reg r69:V, reg c11:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r70:V, reg r71:V, reg eff_used:*, reg eff_used1:V, reg is_list:cls, reg r72:V, reg c12:L, reg stop1:cls, reg r73:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r75:V, reg r76:V, reg outer:cls, reg rownames:cls, reg efficiency4:*, reg efficiency5:V, reg p18:p(V +), reg r78:V, reg p19:p(V +), reg colnames:cls, reg efficiency6:*, reg efficiency7:V, reg p20:p(V +), reg r81:V, reg p21:p(V +), reg paste:*, reg paste1:V, reg p22:p(V +), reg r84:V, reg c13:L, reg r86:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg eff_used2:*, reg eff_used3:V, reg __1:cls, reg r87:V, reg paste2:cls, reg dn_strata:*, reg dn_strata1:V, reg p23:p(V +), reg dn_proj6:*, reg dn_proj7:V, reg p24:p(V +), reg r90:V, reg match:cls, reg r91:V, reg efficiency8:*, reg efficiency9:V, reg c14:L, reg efficiency11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg eff_used4:*, reg eff_used5:V, reg __2:cls, reg r92:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r93:V, reg r94:V, reg colnames1:cls, reg t_factor:*, reg t_factor1:V, reg p25:p(V +), reg r96:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r97:V, reg r98:V, reg dn_proj8:*, reg dn_proj9:V, reg names5:cls, reg r99:V, reg match1:cls, reg r100:V, reg which:*, reg which1:V, reg c15:L, reg which3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r101:V, reg which6:V, reg r102:V, reg which7:*, reg which8:V, reg is_na:cls, reg r103:V, reg r104:V, reg __3:cls, reg r105:V, reg dn_proj10:*, reg dn_proj11:V, reg c16:L, reg dn_proj13:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg which9:*, reg which10:V, reg __4:cls, reg r106:V, reg dn_strata2:*, reg dn_strata3:V, reg c17:L, reg dn_strata5:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg which11:*, reg which12:V, reg __5:cls, reg r107:V, reg m_factors:*, reg m_factors1:V, reg c18:L, reg m_factors3:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg which13:*, reg which14:V, reg __6:cls, reg r108:V, reg type11:*, reg type12:V, reg r109:V, reg c19:L, reg t_factor2:*, reg t_factor3:V, reg c20:L, reg t_factor5:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r110:V, reg r111:V, reg dn_proj14:*, reg dn_proj15:V, reg names6:cls, reg r112:V, reg __7:cls, reg r113:V, reg lapply2:cls, reg dn_proj16:*, reg dn_proj17:V, reg p26:p(V +), reg r115:cls, reg p27:p(V +), reg t_factor9:*, reg t_factor10:V, reg p28:p(V +), reg colnames2:cls, reg t_factor11:*, reg t_factor12:V, reg p29:p(V +), reg r119:V, reg p30:p(V +), reg r121:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r123:V, reg r124:V, reg efficiency12:*, reg efficiency13:V, reg any1:cls, reg r125:V, reg c21:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r126:V, reg r127:V, reg dn_proj18:*, reg dn_proj19:V, reg names7:cls, reg r128:V, reg l3:*, reg names__3:cls, reg r129:V, reg make_tables_aovprojlist:cls, reg dn_proj20:*, reg dn_proj21:V, reg p31:p(V +), reg dn_strata6:*, reg dn_strata7:V, reg p32:p(V +), reg m_factors4:*, reg m_factors5:V, reg p33:p(V +), reg prjs4:*, reg prjs5:V, reg p34:p(V +), reg mf:*, reg mf1:V, reg p35:p(V +), reg efficiency14:*, reg efficiency15:V, reg p36:p(V +), reg r136:V, reg r137:V, reg make_tables_aovprojlist1:cls, reg dn_proj22:*, reg dn_proj23:V, reg p37:p(V +), reg dn_strata8:*, reg dn_strata9:V, reg p38:p(V +), reg m_factors6:*, reg m_factors7:V, reg p39:p(V +), reg prjs6:*, reg prjs7:V, reg p40:p(V +), reg mf2:*, reg mf3:V, reg p41:p(V +), reg r143:V, reg type13:*, reg type14:V, reg r144:V, reg c22:L, reg mean:cls, reg prjs8:*, reg prjs9:V, reg c23:L, reg prjs11:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg __8:cls, reg r145:V, reg p42:p(V +), reg r147:V, reg l4:*, reg class__:cls, reg r148:V, reg lapply3:cls, reg tables:*, reg tables1:V, reg p43:p(V +), reg __9:*, reg __10:V, reg p44:p(V +), reg gmtable:*, reg gmtable1:V, reg p45:p(V +), reg r152:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r153:V, reg r154:V, reg gmtable2:*, reg gmtable3:V, reg tables2:*, reg tables3:V, reg c24:cls, reg r155:V, reg replications:cls, reg terms:cls, reg x7:*, reg x8:V, reg p46:p(V +), reg r158:V, reg p47:p(V +), reg mf4:*, reg mf5:V, reg p48:p(V +), reg r161:V, reg se1:*, reg se2:V, reg c25:L, reg type15:*, reg type16:V, reg r162:V, reg c26:L, reg c28:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r163:V, reg c31:L, reg r164:V, reg n:*, reg n1:V, reg is_list1:cls, reg r165:V, reg c32:L, reg c33:V, reg c35:L, reg message:cls, reg r166:V, reg r167:V, reg type17:*, reg type18:V, reg r168:V, reg c36:L, reg warning:cls, reg gettextf1:cls, reg type19:*, reg type20:V, reg p49:p(V +), reg r170:V, reg p50:p(V +), reg r172:V, reg se_aovlist:cls, reg x9:*, reg x10:V, reg p51:p(V +), reg dn_proj24:*, reg dn_proj25:V, reg p52:p(V +), reg dn_strata10:*, reg dn_strata11:V, reg p53:p(V +), reg factors8:*, reg factors9:V, reg p54:p(V +), reg mf6:*, reg mf7:V, reg p55:p(V +), reg efficiency16:*, reg efficiency17:V, reg p56:p(V +), reg n2:*, reg n3:V, reg p57:p(V +), reg type21:*, reg type22:V, reg p58:p(V +), reg r181:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r183:V, reg r184:V, reg tables4:*, reg tables5:V, reg n4:*, reg n5:V, reg list:cls, reg r185:V, reg se3:*, reg se4:V, reg c37:L, reg se_tables:*, reg se_tables1:V, reg l5:*, reg c38:L, reg se_tables3:V, reg l7:*, reg dr18:V, reg dc9:L, reg dx19:V, reg se_tables5:V, reg dx20:V, reg r186:V, reg type23:*, reg type24:V, reg l8:*, reg attr__:cls, reg r187:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r188:V, reg r189:V, reg c39:cls, reg r190:V, reg l9:*, reg class__1:cls, reg r191:V, reg result:*, reg result1:V |
    mkenv;
    st x = x;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("effects") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    se_isMissing = missing.0(se);
    if se_isMissing then L1(FALSE) else L1(se);
  L1(se_orDefault):
    st se = se_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L50() else D0();
  D0():
    deopt 1 [];
  L50():
    p = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("effects", "means", "residuals");
      goto L0(r3);
    L2():
      r1 = dyn base("effects", "means", "residuals");
      goto L0(r1);
    };
    r5 = dyn match_arg(p, p1);
    check L51() else D1();
  D1():
    deopt 4 [r5];
  L51():
    st type = r5;
    type3 = ld type;
    check L52() else D2();
  D2():
    deopt 6 [type3];
  L52():
    type4 = force? type3;
    checkMissing(type4);
    r6 = `==`(type4, "residuals");
    c1 = `as.logical`(r6);
    if c1 then L53() else L2();
  L2():
    goto L3();
  L3():
    proj = ldf proj;
    check L57() else D5();
  L53():
    stop = ldf stop;
    check L54() else D3();
  D3():
    deopt 11 [];
  D5():
    deopt 19 [];
  L54():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        type5 = ld type;
        type6 = force? type5;
        checkMissing(type6);
        return type6;
      };
      r8 = dyn gettextf("type '%s' is not implemented yet", p2);
      return r8;
    };
    r10 = dyn stop[, domain](p3, NA_LGL);
    check L55() else D4();
  L57():
    p4 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r13 = dyn proj[, `unweighted.scale`](p4, TRUE);
    check L58() else D6();
  D4():
    deopt 15 [r10];
  D6():
    deopt 23 [r13];
  L55():
    goto L3();
  L58():
    st prjs = r13;
    model_frame_aovlist = ldf `model.frame.aovlist`;
    check L59() else D7();
  D7():
    deopt 26 [];
  L59():
    p5 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r15 = dyn model_frame_aovlist(p5);
    check L60() else D8();
  D8():
    deopt 28 [r15];
  L60():
    st mf = r15;
    lapply = ldf lapply;
    check L61() else D9();
  D9():
    deopt 31 [];
  L61():
    p6 = prom<V +>{
      prjs = ld prjs;
      prjs1 = force? prjs;
      checkMissing(prjs1);
      return prjs1;
    };
    p7 = prom<V +>{
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    r18 = dyn lapply(p6, p7, "factors");
    check L62() else D10();
  D10():
    deopt 35 [r18];
  L62():
    st factors = r18;
    unlist = ldf unlist;
    check L63() else D11();
  D11():
    deopt 38 [];
  L63():
    p10 = prom<V +>{
      lapply1 = ldf lapply;
      p8 = prom<V +>{
        factors = ld factors;
        factors1 = force? factors;
        checkMissing(factors1);
        return factors1;
      };
      p9 = prom<V +>{
        names = ld names;
        names1 = force? names;
        checkMissing(names1);
        return names1;
      };
      r21 = dyn lapply1(p8, p9);
      return r21;
    };
    r23 = dyn unlist[, recursive](p10, FALSE);
    check L64() else D12();
  D12():
    deopt 42 [r23];
  L64():
    st `dn.proj` = r23;
    unlist1 = ldf unlist;
    check L65() else D13();
  D13():
    deopt 45 [];
  L65():
    p11 = prom<V +>{
      factors2 = ld factors;
      factors3 = force? factors2;
      checkMissing(factors3);
      return factors3;
    };
    r25 = dyn unlist1[, recursive](p11, FALSE);
    check L66() else D14();
  D14():
    deopt 49 [r25];
  L66():
    st `m.factors` = r25;
    sym1 = ldf `rep.int`;
    base1 = ldf `rep.int` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L67() else L68();
  L4(r27):
    st `dn.strata` = r27;
    unlist2 = ldf unlist;
    check L76() else D20();
  L67():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L69() else L70();
  L68():
    r26 = dyn base1(<lang names(factors)>, <lang lengths(factors)>);
    goto L4(r26);
  D20():
    deopt 67 [];
  L5(r29):
    lengths = ldf lengths;
    check L73() else D17();
  L69():
    factors4 = ld factors;
    check L71() else D15();
  L70():
    r28 = dyn base2(<sym factors>);
    goto L5(r28);
  L76():
    p13 = prom<V +>{
      dn_proj = ld `dn.proj`;
      dn_proj1 = force? dn_proj;
      checkMissing(dn_proj1);
      return dn_proj1;
    };
    r35 = dyn unlist2(p13);
    check L77() else D21();
  D15():
    deopt 55 [factors4];
  D17():
    deopt 60 [];
  D21():
    deopt 69 [r35];
  L71():
    factors5 = force? factors4;
    checkMissing(factors5);
    names2 = ldf names in base;
    r30 = dyn names2(factors5);
    check L72() else D16();
  L73():
    p12 = prom<V +>{
      factors6 = ld factors;
      factors7 = force? factors6;
      checkMissing(factors7);
      return factors7;
    };
    r32 = dyn lengths(p12);
    check L74() else D18();
  L77():
    l = ld `dn.proj`;
    names__ = ldf `names<-`;
    check L78() else D22();
  D16():
    deopt 58 [r30];
  D18():
    deopt 62 [r32];
  D22():
    deopt 71 [r35, l, r35];
  L72():
    goto L5(r30);
  L74():
    rep_int = ldf `rep.int` in base;
    r33 = dyn rep_int(r29, r32);
    check L75() else D19();
  L78():
    r36 = dyn names__(l, NULL, r35);
    check L79() else D23();
  D19():
    deopt 64 [r33];
  D23():
    deopt 73 [r35, r36];
  L75():
    goto L4(r33);
  L79():
    st `dn.proj` = r36;
    l1 = ld `m.factors`;
    names__1 = ldf `names<-`;
    check L80() else D24();
  D24():
    deopt 76 [r35, l1, r35];
  L80():
    r37 = dyn names__1(l1, NULL, r35);
    check L81() else D25();
  D25():
    deopt 78 [r35, r37];
  L81():
    st `m.factors` = r37;
    l2 = ld `dn.strata`;
    names__2 = ldf `names<-`;
    check L82() else D26();
  D26():
    deopt 81 [r35, l2, r35];
  L82():
    r38 = dyn names__2(l2, NULL, r35);
    check L83() else D27();
  D27():
    deopt 83 [r35, r38];
  L83():
    st `dn.strata` = r38;
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L84() else L85();
  L6(r40):
    st `t.factor` = r40;
    st efficiency = FALSE;
    type7 = ld type;
    check L88() else D30();
  L84():
    prjs2 = ld prjs;
    check L86() else D28();
  L85():
    r39 = dyn base3(<sym prjs>, "t.factor");
    goto L6(r39);
  D28():
    deopt 87 [prjs2];
  D30():
    deopt 96 [type7];
  L86():
    prjs3 = force? prjs2;
    checkMissing(prjs3);
    attr2 = ldf attr in base;
    r41 = dyn attr2(prjs3, "t.factor");
    check L87() else D29();
  L88():
    type8 = force? type7;
    checkMissing(type8);
    r42 = `==`(type8, "effects");
    c2 = `as.logical`(r42);
    if c2 then L7(c2) else L89();
  D29():
    deopt 91 [r41];
  L7(c3):
    c8 = `as.logical`(c3);
    if c8 then L92() else L8();
  L87():
    goto L6(r41);
  L89():
    type9 = ld type;
    check L90() else D31();
  D31():
    deopt 100 [c2, type9];
  L8():
    goto L11();
  L11():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L102() else L103();
  L90():
    type10 = force? type9;
    checkMissing(type10);
    r43 = `==`(type10, "means");
    c5 = `as.logical`(r43);
    c6 = `||`(c2, c5);
    goto L7(c6);
  L92():
    anyDuplicated = ldf anyDuplicated;
    check L93() else D32();
  D32():
    deopt 106 [];
  L12(r68):
    c11 = `as.logical`(r68);
    if c11 then L106() else L13();
  L93():
    p14 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L3() else L4();
    L0(r45):
      c9 = `is.object`(r45);
      if c9 then L5() else L6(r45);
    L3():
      dn_proj2 = ld `dn.proj`;
      dn_proj3 = force? dn_proj2;
      checkMissing(dn_proj3);
      names3 = ldf names in base;
      r46 = dyn names3(dn_proj3);
      goto L0(r46);
    L4():
      r44 = dyn base4(<sym dn.proj>);
      goto L0(r44);
    L1(dx1):
      return dx1;
    L5():
      dr = tryDispatchBuiltin.1("[", r45);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(r48):
      sym5 = ldf names;
      base5 = ldf names in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L8() else L9();
    L2(r52, r53):
      r55 = `!=`(r53, "Residuals");
      __ = ldf `[` in base;
      r56 = dyn __(r52, r55);
      goto L1(r56);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L8():
      dn_proj4 = ld `dn.proj`;
      dn_proj5 = force? dn_proj4;
      checkMissing(dn_proj5);
      names4 = ldf names in base;
      r54 = dyn names4(dn_proj5);
      goto L2(r48, r54);
    L9():
      r51 = dyn base5(<sym dn.proj>);
      goto L2(r48, r51);
    };
    r58 = dyn anyDuplicated(p14);
    check L94() else D33();
  L102():
    efficiency2 = ld efficiency;
    check L104() else D38();
  L103():
    r67 = dyn base6(<sym efficiency>);
    goto L12(r67);
  D33():
    deopt 108 [r58];
  D38():
    deopt 127 [efficiency2];
  L13():
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L132() else L133();
  L20():
    which = ld which;
    check L141() else D57();
  L94():
    c10 = `as.logical`(r58);
    if c10 then L95() else L9();
  L104():
    efficiency3 = force? efficiency2;
    checkMissing(efficiency3);
    any = ldf any in base;
    r69 = dyn any(efficiency3);
    check L105() else D39();
  L106():
    sym7 = ldf `is.list`;
    base7 = ldf `is.list` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L107() else L108();
  D39():
    deopt 130 [r69];
  D57():
    deopt 187 [which];
  L9():
    goto L10(NULL);
  L10(r65):
    goto L11();
  L14(r71):
    c12 = `as.logical`(r71);
    if c12 then L111() else L15();
  L21(r94):
    st which = r94;
    goto L20();
  L95():
    eff_aovlist = ldf `eff.aovlist`;
    check L96() else D34();
  L105():
    goto L12(r69);
  L107():
    eff_used = ld `eff.used`;
    check L109() else D40();
  L108():
    r70 = dyn base7(<sym eff.used>);
    goto L14(r70);
  L132():
    colnames1 = ldf colnames;
    check L134() else D52();
  L133():
    r93 = dyn base9(<lang colnames(t.factor)>, <lang names(dn.proj)>);
    goto L21(r93);
  L141():
    which1 = force? which;
    checkMissing(which1);
    c15 = `is.object`(which1);
    if c15 then L142() else L143(which1);
  D34():
    deopt 110 [];
  D40():
    deopt 133 [eff_used];
  D52():
    deopt 173 [];
  L15():
    goto L16();
  L16():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L115() else L116();
  L23(dx8):
    st which = dx8;
    dn_proj10 = ld `dn.proj`;
    check L149() else D60();
  L96():
    p15 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r60 = dyn eff_aovlist(p15);
    check L97() else D35();
  L109():
    eff_used1 = force? eff_used;
    checkMissing(eff_used1);
    is_list = ldf `is.list` in base;
    r72 = dyn is_list(eff_used1);
    check L110() else D41();
  L111():
    stop1 = ldf stop;
    check L112() else D42();
  L134():
    p25 = prom<V +>{
      t_factor = ld `t.factor`;
      t_factor1 = force? t_factor;
      checkMissing(t_factor1);
      return t_factor1;
    };
    r96 = dyn colnames1(p25);
    check L135() else D53();
  L142():
    dr6 = tryDispatchBuiltin.1("[", which1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L144() else L143(dr6);
  L143(which3):
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L145() else L146();
  D35():
    deopt 112 [r60];
  D41():
    deopt 136 [r72];
  D42():
    deopt 138 [];
  D53():
    deopt 175 [r96];
  D60():
    deopt 198 [dn_proj10];
  L17(r76):
    st which = r76;
    efficiency8 = ld efficiency;
    check L126() else D50();
  L24(which6, r102):
    r104 = `!`(r102);
    __3 = ldf `[` in base;
    r105 = dyn __3(which6, r104);
    goto L23(r105);
  L97():
    st efficiency = r60;
    apply = ldf apply;
    check L98() else D36();
  L110():
    goto L14(r72);
  L112():
    r73 = dyn stop1("design is unbalanced so cannot proceed");
    check L113() else D43();
  L115():
    outer = ldf outer;
    check L117() else D44();
  L116():
    r75 = dyn base8(<lang `[`(outer(rownames(efficiency), colnames(efficiency), paste), eff.used)>, <lang paste(dn.strata, dn.proj)>);
    goto L17(r75);
  L135():
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L136() else L137();
  L144():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L23(dx7);
  L145():
    which7 = ld which;
    check L147() else D58();
  L146():
    r101 = dyn base11(<sym which>);
    goto L24(which3, r101);
  L149():
    dn_proj11 = force? dn_proj10;
    checkMissing(dn_proj11);
    c16 = `is.object`(dn_proj11);
    if c16 then L150() else L151(dn_proj11);
  D36():
    deopt 115 [];
  D43():
    deopt 140 [r73];
  D44():
    deopt 146 [];
  D50():
    deopt 164 [efficiency8];
  D58():
    deopt 191 [which3, which7];
  L22(r98):
    match1 = ldf match in base;
    r100 = dyn match1(r96, r98, NA_INT, NULL);
    check L140() else D56();
  L25(dx10):
    st `dn.proj` = dx10;
    dn_strata2 = ld `dn.strata`;
    check L154() else D62();
  L98():
    p16 = prom<V +>{
      efficiency = ld efficiency;
      efficiency1 = force? efficiency;
      checkMissing(efficiency1);
      return efficiency1;
    };
    p17 = prom<V +>{
      r62 = clos inner3242394666;
      return r62;
    };
    r64 = dyn apply(p16, 2, p17);
    check L99() else D37();
  L113():
    goto L16();
  L117():
    p19 = prom<V +>{
      rownames = ldf rownames;
      p18 = prom<V +>{
        efficiency4 = ld efficiency;
        efficiency5 = force? efficiency4;
        checkMissing(efficiency5);
        return efficiency5;
      };
      r78 = dyn rownames(p18);
      return r78;
    };
    p21 = prom<V +>{
      colnames = ldf colnames;
      p20 = prom<V +>{
        efficiency6 = ld efficiency;
        efficiency7 = force? efficiency6;
        checkMissing(efficiency7);
        return efficiency7;
      };
      r81 = dyn colnames(p20);
      return r81;
    };
    p22 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r84 = dyn outer(p19, p21, p22);
    check L118() else D45();
  L126():
    efficiency9 = force? efficiency8;
    checkMissing(efficiency9);
    c14 = `is.object`(efficiency9);
    if c14 then L127() else L128(efficiency9);
  L136():
    dn_proj8 = ld `dn.proj`;
    check L138() else D54();
  L137():
    r97 = dyn base10(<sym dn.proj>);
    goto L22(r97);
  L147():
    which8 = force? which7;
    checkMissing(which8);
    is_na = ldf `is.na` in base;
    r103 = dyn is_na(which8);
    check L148() else D59();
  L150():
    dr8 = tryDispatchBuiltin.1("[", dn_proj11);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L152() else L151(dr8);
  L151(dn_proj13):
    which9 = ld which;
    check L153() else D61();
  D37():
    deopt 119 [r64];
  D45():
    deopt 150 [r84];
  D54():
    deopt 178 [dn_proj8];
  D56():
    deopt 185 [r100];
  D59():
    deopt 194 [which3, r103];
  D61():
    deopt 200 [dn_proj13, which9];
  D62():
    deopt 204 [dn_strata2];
  L19(dx5):
    st efficiency = dx5;
    goto L20();
  L99():
    st `eff.used` = r64;
    goto L10(r64);
  L118():
    c13 = `is.object`(r84);
    if c13 then L119() else L120(r84);
  L127():
    dr4 = tryDispatchBuiltin.1("[", efficiency9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L129() else L128(dr4);
  L128(efficiency11):
    eff_used4 = ld `eff.used`;
    check L130() else D51();
  L138():
    dn_proj9 = force? dn_proj8;
    checkMissing(dn_proj9);
    names5 = ldf names in base;
    r99 = dyn names5(dn_proj9);
    check L139() else D55();
  L140():
    goto L21(r100);
  L148():
    goto L24(which3, r103);
  L152():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L25(dx9);
  L153():
    which10 = force? which9;
    __4 = ldf `[` in base;
    r106 = dyn __4(dn_proj13, which10);
    goto L25(r106);
  L154():
    dn_strata3 = force? dn_strata2;
    checkMissing(dn_strata3);
    c17 = `is.object`(dn_strata3);
    if c17 then L155() else L156(dn_strata3);
  D51():
    deopt 166 [efficiency11, eff_used4];
  D55():
    deopt 181 [r99];
  L18(dx3):
    paste2 = ldf paste;
    check L123() else D47();
  L26(dx12):
    st `dn.strata` = dx12;
    m_factors = ld `m.factors`;
    check L159() else D64();
  L119():
    dr2 = tryDispatchBuiltin.1("[", r84);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L121() else L120(dr2);
  L120(r86):
    eff_used2 = ld `eff.used`;
    check L122() else D46();
  L129():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L19(dx4);
  L130():
    eff_used5 = force? eff_used4;
    __2 = ldf `[` in base;
    r92 = dyn __2(efficiency11, eff_used5);
    goto L19(r92);
  L139():
    goto L22(r99);
  L155():
    dr10 = tryDispatchBuiltin.1("[", dn_strata3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L157() else L156(dr10);
  L156(dn_strata5):
    which11 = ld which;
    check L158() else D63();
  D46():
    deopt 151 [r86, eff_used2];
  D47():
    deopt 155 [];
  D63():
    deopt 206 [dn_strata5, which11];
  D64():
    deopt 210 [m_factors];
  L121():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx2);
  L122():
    eff_used3 = force? eff_used2;
    __1 = ldf `[` in base;
    r87 = dyn __1(r86, eff_used3);
    goto L18(r87);
  L123():
    p23 = prom<V +>{
      dn_strata = ld `dn.strata`;
      dn_strata1 = force? dn_strata;
      checkMissing(dn_strata1);
      return dn_strata1;
    };
    p24 = prom<V +>{
      dn_proj6 = ld `dn.proj`;
      dn_proj7 = force? dn_proj6;
      checkMissing(dn_proj7);
      return dn_proj7;
    };
    r90 = dyn paste2(p23, p24);
    check L124() else D48();
  L157():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L26(dx11);
  L158():
    which12 = force? which11;
    __5 = ldf `[` in base;
    r107 = dyn __5(dn_strata5, which12);
    goto L26(r107);
  L159():
    m_factors1 = force? m_factors;
    checkMissing(m_factors1);
    c18 = `is.object`(m_factors1);
    if c18 then L160() else L161(m_factors1);
  D48():
    deopt 158 [r90];
  L27(dx14):
    st `m.factors` = dx14;
    type11 = ld type;
    check L164() else D66();
  L124():
    match = ldf match in base;
    r91 = dyn match(dx3, r90, NA_INT, NULL);
    check L125() else D49();
  L160():
    dr12 = tryDispatchBuiltin.1("[", m_factors1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L162() else L161(dr12);
  L161(m_factors3):
    which13 = ld which;
    check L163() else D65();
  D49():
    deopt 162 [r91];
  D65():
    deopt 212 [m_factors3, which13];
  D66():
    deopt 216 [type11];
  L125():
    goto L17(r91);
  L162():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L27(dx13);
  L163():
    which14 = force? which13;
    __6 = ldf `[` in base;
    r108 = dyn __6(m_factors3, which14);
    goto L27(r108);
  L164():
    type12 = force? type11;
    checkMissing(type12);
    r109 = `==`(type12, "means");
    c19 = `as.logical`(r109);
    if c19 then L165() else L28();
  L28():
    goto L31();
  L31():
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L177() else L178();
  L165():
    t_factor2 = ld `t.factor`;
    check L166() else D67();
  D67():
    deopt 220 [t_factor2];
  L32(r124):
    c21 = `as.logical`(r124);
    if c21 then L181() else L33();
  L166():
    t_factor3 = force? t_factor2;
    checkMissing(t_factor3);
    c20 = `is.object`(t_factor3);
    if c20 then L167() else L168(t_factor3);
  L177():
    efficiency12 = ld efficiency;
    check L179() else D72();
  L178():
    r123 = dyn base13(<sym efficiency>);
    goto L32(r123);
  D72():
    deopt 246 [efficiency12];
  L29(dx16):
    st `t.factor` = dx16;
    lapply2 = ldf lapply;
    check L174() else D70();
  L33():
    make_tables_aovprojlist1 = ldf `make.tables.aovprojlist`;
    check L191() else D80();
  L35(r137):
    st tables = r137;
    type13 = ld type;
    check L193() else D82();
  L167():
    dr14 = tryDispatchBuiltin.1("[", t_factor3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L169() else L168(dr14);
  L168(t_factor5):
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L170() else L171();
  L179():
    efficiency13 = force? efficiency12;
    checkMissing(efficiency13);
    any1 = ldf any in base;
    r125 = dyn any1(efficiency13);
    check L180() else D73();
  L181():
    sym14 = ldf names;
    base14 = ldf names in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L182() else L183();
  D70():
    deopt 235 [];
  D73():
    deopt 249 [r125];
  D80():
    deopt 271 [];
  D82():
    deopt 279 [type13];
  L30(r111):
    __7 = ldf `[` in base;
    r113 = dyn __7(t_factor3, <missing>, r111, FALSE);
    goto L29(r113);
  L34(r127):
    l3 = ld efficiency;
    names__3 = ldf `names<-`;
    check L186() else D76();
  L169():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L29(dx15);
  L170():
    dn_proj14 = ld `dn.proj`;
    check L172() else D68();
  L171():
    r110 = dyn base12(<sym dn.proj>);
    goto L30(r110);
  L174():
    p26 = prom<V +>{
      dn_proj16 = ld `dn.proj`;
      dn_proj17 = force? dn_proj16;
      checkMissing(dn_proj17);
      return dn_proj17;
    };
    p27 = prom<V +>{
      r115 = clos inner843450816;
      return r115;
    };
    p28 = prom<V +>{
      t_factor9 = ld `t.factor`;
      t_factor10 = force? t_factor9;
      checkMissing(t_factor10);
      return t_factor10;
    };
    p30 = prom<V +>{
      colnames2 = ldf colnames;
      p29 = prom<V +>{
        t_factor11 = ld `t.factor`;
        t_factor12 = force? t_factor11;
        checkMissing(t_factor12);
        return t_factor12;
      };
      r119 = dyn colnames2(p29);
      return r119;
    };
    r121 = dyn lapply2(p26, p27, p28, p30);
    check L175() else D71();
  L180():
    goto L32(r125);
  L182():
    dn_proj18 = ld `dn.proj`;
    check L184() else D74();
  L183():
    r126 = dyn base14(<sym dn.proj>);
    goto L34(r126);
  L191():
    p37 = prom<V +>{
      dn_proj22 = ld `dn.proj`;
      dn_proj23 = force? dn_proj22;
      checkMissing(dn_proj23);
      return dn_proj23;
    };
    p38 = prom<V +>{
      dn_strata8 = ld `dn.strata`;
      dn_strata9 = force? dn_strata8;
      checkMissing(dn_strata9);
      return dn_strata9;
    };
    p39 = prom<V +>{
      m_factors6 = ld `m.factors`;
      m_factors7 = force? m_factors6;
      checkMissing(m_factors7);
      return m_factors7;
    };
    p40 = prom<V +>{
      prjs6 = ld prjs;
      prjs7 = force? prjs6;
      checkMissing(prjs7);
      return prjs7;
    };
    p41 = prom<V +>{
      mf2 = ld mf;
      mf3 = force? mf2;
      checkMissing(mf3);
      return mf3;
    };
    r143 = dyn make_tables_aovprojlist1(p37, p38, p39, p40, p41);
    check L192() else D81();
  L193():
    type14 = force? type13;
    checkMissing(type14);
    r144 = `==`(type14, "means");
    c22 = `as.logical`(r144);
    if c22 then L194() else L36();
  D68():
    deopt 225 [t_factor5, dn_proj14];
  D71():
    deopt 240 [r121];
  D74():
    deopt 252 [dn_proj18];
  D76():
    deopt 257 [r127, l3, r127];
  D81():
    deopt 277 [r143];
  L36():
    goto L38();
  L38():
    replications = ldf replications;
    check L207() else D92();
  L172():
    dn_proj15 = force? dn_proj14;
    checkMissing(dn_proj15);
    names6 = ldf names in base;
    r112 = dyn names6(dn_proj15);
    check L173() else D69();
  L175():
    st `dn.proj` = r121;
    goto L31();
  L184():
    dn_proj19 = force? dn_proj18;
    checkMissing(dn_proj19);
    names7 = ldf names in base;
    r128 = dyn names7(dn_proj19);
    check L185() else D75();
  L186():
    r129 = dyn names__3(l3, NULL, r127);
    check L187() else D77();
  L192():
    goto L35(r143);
  L194():
    mean = ldf mean;
    check L195() else D83();
  D69():
    deopt 228 [t_factor5, r112];
  D75():
    deopt 255 [r128];
  D77():
    deopt 259 [r127, r129];
  D83():
    deopt 284 [];
  D92():
    deopt 315 [];
  L173():
    goto L30(r112);
  L185():
    goto L34(r128);
  L187():
    st efficiency = r129;
    make_tables_aovprojlist = ldf `make.tables.aovprojlist`;
    check L188() else D78();
  L195():
    p42 = prom<V +>{
      prjs8 = ld prjs;
      prjs9 = force? prjs8;
      checkMissing(prjs9);
      c23 = `is.object`(prjs9);
      if c23 then L1() else L2(prjs9);
    L0(dx18):
      return dx18;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", prjs9);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(prjs11):
      __8 = ldf `[[` in base;
      r145 = dyn __8(prjs11, "(Intercept)");
      goto L0(r145);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx17);
    };
    r147 = dyn mean(p42);
    check L196() else D84();
  L207():
    p47 = prom<V +>{
      terms = ldf terms;
      p46 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r158 = dyn terms(p46);
      return r158;
    };
    p48 = prom<V +>{
      mf4 = ld mf;
      mf5 = force? mf4;
      checkMissing(mf5);
      return mf5;
    };
    r161 = dyn replications[, data](p47, p48);
    check L208() else D93();
  D78():
    deopt 262 [];
  D84():
    deopt 286 [r147];
  D93():
    deopt 319 [r161];
  L188():
    p31 = prom<V +>{
      dn_proj20 = ld `dn.proj`;
      dn_proj21 = force? dn_proj20;
      checkMissing(dn_proj21);
      return dn_proj21;
    };
    p32 = prom<V +>{
      dn_strata6 = ld `dn.strata`;
      dn_strata7 = force? dn_strata6;
      checkMissing(dn_strata7);
      return dn_strata7;
    };
    p33 = prom<V +>{
      m_factors4 = ld `m.factors`;
      m_factors5 = force? m_factors4;
      checkMissing(m_factors5);
      return m_factors5;
    };
    p34 = prom<V +>{
      prjs4 = ld prjs;
      prjs5 = force? prjs4;
      checkMissing(prjs5);
      return prjs5;
    };
    p35 = prom<V +>{
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      return mf1;
    };
    p36 = prom<V +>{
      efficiency14 = ld efficiency;
      efficiency15 = force? efficiency14;
      checkMissing(efficiency15);
      return efficiency15;
    };
    r136 = dyn make_tables_aovprojlist(p31, p32, p33, p34, p35, p36);
    check L189() else D79();
  L196():
    st gmtable = r147;
    l4 = ld gmtable;
    class__ = ldf `class<-`;
    check L197() else D85();
  L208():
    st n = r161;
    se1 = ld se;
    check L209() else D94();
  D79():
    deopt 269 [r136];
  D85():
    deopt 291 ["mtable", l4, "mtable"];
  D94():
    deopt 321 [se1];
  L189():
    goto L35(r136);
  L197():
    r148 = dyn class__(l4, NULL, "mtable");
    check L198() else D86();
  L209():
    se2 = force? se1;
    checkMissing(se2);
    c25 = `as.logical`(se2);
    if c25 then L210() else L39();
  D86():
    deopt 293 ["mtable", r148];
  L39():
    goto L45();
  L45():
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L230() else L231();
  L198():
    st gmtable = r148;
    lapply3 = ldf lapply;
    check L199() else D87();
  L210():
    type15 = ld type;
    check L211() else D95();
  D87():
    deopt 296 [];
  D95():
    deopt 323 [type15];
  L46(r184):
    st result = r184;
    se3 = ld se;
    check L235() else D108();
  L199():
    p43 = prom<V +>{
      tables = ld tables;
      tables1 = force? tables;
      checkMissing(tables1);
      return tables1;
    };
    p44 = prom<V +>{
      __9 = ld `+`;
      __10 = force? __9;
      checkMissing(__10);
      return __10;
    };
    p45 = prom<V +>{
      gmtable = ld gmtable;
      gmtable1 = force? gmtable;
      checkMissing(gmtable1);
      return gmtable1;
    };
    r152 = dyn lapply3(p43, p44, p45);
    check L200() else D88();
  L211():
    type16 = force? type15;
    checkMissing(type16);
    r162 = `==`(type16, "effects");
    c26 = `as.logical`(r162);
    if c26 then L212() else L40(c26);
  L230():
    tables4 = ld tables;
    check L232() else D105();
  L231():
    r183 = dyn base17[tables, n](<sym tables>, <sym n>);
    goto L46(r183);
  D88():
    deopt 300 [r152];
  D105():
    deopt 371 [tables4];
  D108():
    deopt 380 [se3];
  L40(c28):
    c35 = `as.logical`(c28);
    if c35 then L218() else L42();
  L200():
    st tables = r152;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L201() else L202();
  L212():
    sym16 = ldf `is.list`;
    base16 = ldf `is.list` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L213() else L214();
  L232():
    tables5 = force? tables4;
    checkMissing(tables5);
    n4 = ld n;
    check L233() else D106();
  L235():
    se4 = force? se3;
    checkMissing(se4);
    c37 = `as.logical`(se4);
    if c37 then L236() else L47();
  D106():
    deopt 374 [n4];
  L37(r154):
    st tables = r154;
    goto L38();
  L41(c31, r164):
    c32 = `as.logical`(r164);
    c33 = `&&`(c31, c32);
    goto L40(c33);
  L42():
    type17 = ld type;
    check L222() else D100();
  L43(r167):
    goto L45();
  L47():
    goto L48();
  L48():
    type23 = ld type;
    check L243() else D110();
  L201():
    gmtable2 = ld gmtable;
    check L203() else D89();
  L202():
    r153 = dyn base15[`Grand mean`, ](<sym gmtable>, <sym tables>);
    goto L37(r153);
  L213():
    n = ld n;
    check L215() else D96();
  L214():
    r163 = dyn base16(<sym n>);
    goto L41(c26, r163);
  L218():
    message = ldf message;
    check L219() else D98();
  L233():
    n5 = force? n4;
    checkMissing(n5);
    list = ldf list in base;
    r185 = dyn list(tables5, n5);
    check L234() else D107();
  L236():
    se_tables = ld `se.tables`;
    check L237() else D109();
  D89():
    deopt 304 [gmtable2];
  D96():
    deopt 329 [c26, n];
  D98():
    deopt 335 [];
  D100():
    deopt 341 [type17];
  D107():
    deopt 378 [r185];
  D109():
    deopt 382 [se_tables];
  D110():
    deopt 389 [type23];
  L203():
    gmtable3 = force? gmtable2;
    checkMissing(gmtable3);
    tables2 = ld tables;
    check L204() else D90();
  L215():
    n1 = force? n;
    checkMissing(n1);
    is_list1 = ldf `is.list` in base;
    r165 = dyn is_list1(n1);
    check L216() else D97();
  L219():
    r166 = dyn message("Standard error information not returned as design is unbalanced. \nStandard errors can be obtained through 'se.contrast'.");
    check L220() else D99();
  L222():
    type18 = force? type17;
    checkMissing(type18);
    r168 = `!=`(type18, "effects");
    c36 = `as.logical`(r168);
    if c36 then L223() else L44();
  L234():
    goto L46(r185);
  L237():
    se_tables1 = force? se_tables;
    checkMissing(se_tables1);
    l5 = ld result;
    c38 = `is.object`(l5);
    if c38 then L239() else L240(se_tables1, l5);
  L243():
    type24 = force? type23;
    checkMissing(type24);
    l8 = ld result;
    attr__ = ldf `attr<-`;
    check L244() else D111();
  D90():
    deopt 307 [tables2];
  D97():
    deopt 332 [c26, r165];
  D99():
    deopt 337 [r166];
  D111():
    deopt 392 [type24, l8, type24];
  L44():
    se_aovlist = ldf `se.aovlist`;
    check L227() else D103();
  L204():
    tables3 = force? tables2;
    checkMissing(tables3);
    c24 = ldf c in base;
    r155 = dyn c24(gmtable3, tables3);
    check L205() else D91();
  L216():
    goto L41(c26, r165);
  L220():
    st se = FALSE;
    goto L43(FALSE);
  L223():
    warning = ldf warning;
    check L224() else D101();
  L238(se_tables5, dx20):
    st result = dx20;
    goto L48();
  L239():
    dr18 = tryDispatchBuiltin.0("$<-", l5, se_tables1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L241() else L240(se_tables1, dr18);
  L240(se_tables3, l7):
    r186 = `$<-`(l7, <sym se>, se_tables1);
    goto L238(se_tables3, r186);
  L244():
    r187 = dyn attr__(l8, NULL, "type", type24);
    check L245() else D112();
  D91():
    deopt 310 [r155];
  D101():
    deopt 346 [];
  D103():
    deopt 355 [];
  D112():
    deopt 395 [type24, r187];
  L205():
    goto L37(r155);
  L224():
    p50 = prom<V +>{
      gettextf1 = ldf gettextf;
      p49 = prom<V +>{
        type19 = ld type;
        type20 = force? type19;
        checkMissing(type20);
        return type20;
      };
      r170 = dyn gettextf1("SEs for type '%s' are not yet implemented", p49);
      return r170;
    };
    r172 = dyn warning[, domain](p50, NA_LGL);
    check L225() else D102();
  L227():
    p51 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p52 = prom<V +>{
      dn_proj24 = ld `dn.proj`;
      dn_proj25 = force? dn_proj24;
      checkMissing(dn_proj25);
      return dn_proj25;
    };
    p53 = prom<V +>{
      dn_strata10 = ld `dn.strata`;
      dn_strata11 = force? dn_strata10;
      checkMissing(dn_strata11);
      return dn_strata11;
    };
    p54 = prom<V +>{
      factors8 = ld factors;
      factors9 = force? factors8;
      checkMissing(factors9);
      return factors9;
    };
    p55 = prom<V +>{
      mf6 = ld mf;
      mf7 = force? mf6;
      checkMissing(mf7);
      return mf7;
    };
    p56 = prom<V +>{
      efficiency16 = ld efficiency;
      efficiency17 = force? efficiency16;
      checkMissing(efficiency17);
      return efficiency17;
    };
    p57 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      return n3;
    };
    p58 = prom<V +>{
      type21 = ld type;
      type22 = force? type21;
      checkMissing(type22);
      return type22;
    };
    r181 = dyn se_aovlist[, , , , , , , type](p51, p52, p53, p54, p55, p56, p57, p58);
    check L228() else D104();
  L241():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L238(se_tables1, dx19);
  L245():
    st result = r187;
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L246() else L247();
  D102():
    deopt 350 [r172];
  D104():
    deopt 365 [r181];
  L49(r189):
    l9 = ld result;
    class__1 = ldf `class<-`;
    check L249() else D114();
  L225():
    st se = FALSE;
    goto L43(FALSE);
  L228():
    st `se.tables` = r181;
    goto L43(r181);
  L246():
    c39 = ldf c in base;
    r190 = dyn c39("tables_aov", "list.of");
    check L248() else D113();
  L247():
    r188 = dyn base18("tables_aov", "list.of");
    goto L49(r188);
  D113():
    deopt 402 [r190];
  D114():
    deopt 404 [r189, l9, r189];
  L248():
    goto L49(r190);
  L249():
    r191 = dyn class__1(l9, NULL, r189);
    check L250() else D115();
  D115():
    deopt 406 [r189, r191];
  L250():
    st result = r191;
    result = ld result;
    check L251() else D116();
  D116():
    deopt 408 [result];
  L251():
    result1 = force? result;
    checkMissing(result1);
    popenv;
    return result1;
  }
}
fun inner3242394666(x, ind) {
  (reg x:*, reg ind:*) -+> V { var x:*, var ind:*, reg ind_isMissing:L, reg ind_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:I, reg p:p(V +), reg x3:*, reg x4:V, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg temp:*, reg temp1:V, reg sum:cls, reg r7:V, reg r8:V, reg c:L, reg temp2:*, reg temp3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg ind1:*, reg ind2:V, reg c1:L, reg ind4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg temp4:*, reg temp5:V, reg __:cls, reg r11:V, reg max:cls, reg r12:V, reg ind5:*, reg ind6:V, reg r13:V |
    mkenv;
    st x = x;
    ind_isMissing = missing.0(ind);
    if ind_isMissing then L0() else L1(ind);
  L0():
    p = prom<V +>{
      sym = ldf seq_len;
      base = ldf seq_len in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      r2 = seq_len(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    goto L1(p);
  L1(ind_orDefault):
    st ind = ind_orDefault;
    x3 = ld x;
    check L6() else D0();
  D0():
    deopt 0 [x3];
  L6():
    x4 = force? x3;
    checkMissing(x4);
    r4 = `>`(x4, 0.0);
    st temp = r4;
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L2(r6):
    r8 = `==`(r6, 1.0);
    c = `as.logical`(r8);
    if c then L11() else L3();
  L7():
    temp = ld temp;
    check L9() else D1();
  L8():
    r5 = dyn base1(<sym temp>);
    goto L2(r5);
  D1():
    deopt 7 [temp];
  L3():
    sym2 = ldf max;
    base2 = ldf max in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L9():
    temp1 = force? temp;
    checkMissing(temp1);
    sum = ldf sum in base;
    r7 = dyn sum(temp1);
    check L10() else D2();
  L11():
    temp2 = ld temp;
    check L12() else D3();
  D2():
    deopt 10 [r7];
  D3():
    deopt 13 [temp2];
  L4(r10):
    ind5 = ld ind;
    check L22() else D7();
  L10():
    goto L2(r7);
  L12():
    temp3 = force? temp2;
    checkMissing(temp3);
    popenv;
    return temp3;
  L14():
    ind1 = ld ind;
    check L16() else D4();
  L15():
    r9 = dyn base2(<lang `[`(ind, temp)>);
    goto L4(r9);
  D4():
    deopt 17 [ind1];
  D7():
    deopt 23 [r10, ind5];
  L16():
    ind2 = force? ind1;
    checkMissing(ind2);
    c1 = `is.object`(ind2);
    if c1 then L17() else L18(ind2);
  L22():
    ind6 = force? ind5;
    checkMissing(ind6);
    r13 = `==`(r10, ind6);
    popenv;
    return r13;
  L5(dx1):
    max = ldf max in base;
    r12 = dyn max(dx1);
    check L21() else D6();
  L17():
    dr = tryDispatchBuiltin.1("[", ind2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(ind4):
    temp4 = ld temp;
    check L20() else D5();
  D5():
    deopt 19 [ind4, temp4];
  D6():
    deopt 23 [r12];
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L20():
    temp5 = force? temp4;
    __ = ldf `[` in base;
    r11 = dyn __(ind4, temp5);
    goto L5(r11);
  L21():
    goto L4(r12);
  }
}
fun inner843450816(x, mat, vn) {
  (reg x:*, reg mat:*, reg vn:*) -+> V { var x:*, var mat:*, var vn:*, reg vn1:*, reg vn2:V, reg c:L, reg vn4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg t:cls, reg mat1:*, reg mat2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg vn7:V, reg r3:V, reg mat3:*, reg mat4:V, reg c1:L, reg vn9:V, reg mat6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg vn11:V, reg dx3:V, reg x1:*, reg x2:V, reg __:cls, reg r4:V, reg as_logical:cls, reg r5:V, reg r6:V, reg ___:cls, reg r7:V, reg r8:V, reg __1:cls, reg r9:V |
    mkenv;
    st x = x;
    st mat = mat;
    st vn = vn;
    vn1 = ld vn;
    check L3() else D0();
  D0():
    deopt 0 [vn1];
  L3():
    vn2 = force? vn1;
    checkMissing(vn2);
    c = `is.object`(vn2);
    if c then L4() else L5(vn2);
  L0(dx1):
    popenv;
    return dx1;
  L4():
    dr = tryDispatchBuiltin.1("[", vn2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(vn4):
    t = ldf t;
    check L7() else D1();
  D1():
    deopt 4 [vn4];
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L7():
    p = prom<V +>{
      mat1 = ld mat;
      mat2 = force? mat1;
      checkMissing(mat2);
      return mat2;
    };
    r1 = dyn t(p);
    check L8() else D2();
  D2():
    deopt 6 [vn4, r1];
  L8():
    sym = ldf `as.logical`;
    base = ldf `as.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(vn7, r3):
    r6 = `-`(r3, 1.0);
    ___ = ldf `%*%` in base;
    r7 = dyn ___(r1, r6);
    check L17() else D6();
  L9():
    mat3 = ld mat;
    check L11() else D3();
  L10():
    r2 = dyn base(<lang `[`(mat, , x)>);
    goto L1(vn4, r2);
  D3():
    deopt 9 [vn4, mat3];
  D6():
    deopt 21 [vn7, r7];
  L11():
    mat4 = force? mat3;
    checkMissing(mat4);
    c1 = `is.object`(mat4);
    if c1 then L12() else L13(vn4, mat4);
  L17():
    r8 = `==`(r7, 0.0);
    __1 = ldf `[` in base;
    r9 = dyn __1(vn7, r8);
    goto L0(r9);
  L2(vn11, dx3):
    as_logical = ldf `as.logical` in base;
    r5 = dyn as_logical(dx3);
    check L16() else D5();
  L12():
    dr2 = tryDispatchBuiltin.1("[", mat4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(vn4, dr2);
  L13(vn9, mat6):
    x1 = ld x;
    check L15() else D4();
  D4():
    deopt 12 [vn9, mat6, x1];
  D5():
    deopt 17 [vn11, r5];
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(vn4, dx2);
  L15():
    x2 = force? x1;
    __ = ldf `[` in base;
    r4 = dyn __(mat4, <missing>, x2);
    goto L2(vn9, r4);
  L16():
    goto L1(vn11, r5);
  }
}