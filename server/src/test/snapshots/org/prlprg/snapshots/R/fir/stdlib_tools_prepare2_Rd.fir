fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1401470749;
    st prepare2_Rd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1401470749(Rd, Rdfile, stages) {
  (reg Rd:*, reg Rdfile:*, reg stages:*) -+> V { var Rd:*, var Rdfile:*, var stages:*, reg RdTags:cls, reg Rd1:*, reg Rd2:V, reg p:p(V +), reg r1:V, reg which:cls, reg sections:*, reg sections1:V, reg r2:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg version:*, reg version1:V, reg length:cls, reg r7:V, reg r8:V, reg c:L, reg stopRd:cls, reg Rd3:*, reg Rd4:V, reg c1:L, reg Rd6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg version2:*, reg version3:V, reg c2:L, reg Rd8:V, reg version5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg Rd10:V, reg dx3:V, reg __:cls, reg r9:V, reg __1:cls, reg r10:V, reg p2:p(V +), reg Rdfile1:*, reg Rdfile2:V, reg p3:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg grep:cls, reg unlist:cls, reg Rd11:*, reg Rd12:V, reg c3:L, reg Rd14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sections2:*, reg sections3:V, reg r17:V, reg __2:cls, reg r18:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg r22:V, reg length1:cls, reg r23:V, reg c4:L, reg bad:*, reg bad1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg warnRd:cls, reg Rd15:*, reg Rd16:V, reg c6:L, reg Rd18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sections4:*, reg sections5:V, reg r24:V, reg __3:cls, reg r25:V, reg c7:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg s1:*, reg s2:V, reg __4:cls, reg r26:V, reg p6:p(V +), reg Rdfile3:*, reg Rdfile4:V, reg p7:p(V +), reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg sections6:*, reg sections7:V, reg length2:cls, reg r34:V, reg rep_int:cls, reg r35:V, reg paste0:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg c8:cls, reg r38:V, reg p8:p(V +), reg r40:V, reg unique_tags:*, reg unique_tags1:V, reg s3:V, reg l1:I, reg i6:I, reg i7:I, reg i8:I, reg c9:L, reg x1:V, reg which1:cls, reg sections8:*, reg sections9:V, reg tag:*, reg tag1:V, reg r41:V, reg p9:p(V +), reg r43:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg i13:I, reg r45:V, reg where:*, reg where1:V, reg length3:cls, reg r46:V, reg r47:V, reg c10:L, reg warnRd1:cls, reg Rdfile5:*, reg Rdfile6:V, reg p10:p(V +), reg sprintf:cls, reg tag2:*, reg tag3:V, reg p11:p(V +), reg r50:V, reg p12:p(V +), reg r52:V, reg l2:*, reg c11:L, reg i17:I, reg r54:L, reg l4:*, reg dr10:V, reg dc5:L, reg dx12:V, reg i19:I, reg r56:L, reg dx13:V, reg where2:*, reg where3:V, reg c12:L, reg i21:I, reg r59:L, reg l6:*, reg r60:L, reg where5:V, reg dr12:V, reg dc6:L, reg dx14:V, reg i23:I, reg r63:L, reg l8:*, reg r64:L, reg dx15:V, reg __5:cls, reg r65:V, reg ___:cls, reg r66:V, reg i24:I, reg which2:cls, reg sections10:*, reg sections11:V, reg r68:V, reg p13:p(V +), reg r70:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r71:V, reg r72:V, reg enc:*, reg enc1:V, reg length4:cls, reg r73:V, reg c13:L, reg Rd19:*, reg Rd20:V, reg c14:L, reg Rd22:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg enc2:*, reg enc3:V, reg c15:L, reg Rd24:V, reg enc5:V, reg dr16:V, reg dc8:L, reg dx18:V, reg Rd26:V, reg dx19:V, reg __6:cls, reg r74:V, reg __7:cls, reg r75:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r76:V, reg r77:V, reg RdTags1:cls, reg encoding:*, reg encoding1:V, reg p14:p(V +), reg r79:V, reg identical:cls, reg r80:V, reg r81:V, reg c16:L, reg stopRd1:cls, reg encoding2:*, reg encoding3:V, reg p15:p(V +), reg Rdfile7:*, reg Rdfile8:V, reg p16:p(V +), reg r84:V, reg r85:V, reg which3:cls, reg sections12:*, reg sections13:V, reg r87:V, reg p17:p(V +), reg r89:V, reg character:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r90:V, reg r91:V, reg dt:*, reg dt1:V, reg length5:cls, reg r92:V, reg p18:p(V +), reg r94:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r95:V, reg r96:V, reg dt2:*, reg dt3:V, reg length6:cls, reg r97:V, reg c17:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r98:V, reg r99:V, reg dt4:*, reg dt5:V, reg length7:cls, reg r100:V, reg r101:V, reg c18:L, reg warnRd2:cls, reg Rdfile9:*, reg Rdfile10:V, reg p19:p(V +), reg r103:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r105:V, reg r106:V, reg dt6:*, reg dt7:V, reg r107:I, reg s4:V, reg l9:I, reg i25:I, reg i26:I, reg i27:I, reg c19:L, reg x2:V, reg Rd27:*, reg Rd28:V, reg c20:L, reg i31:I, reg Rd30:V, reg dr18:V, reg dc9:L, reg dx20:V, reg i33:I, reg dx21:V, reg dt8:*, reg dt9:V, reg c21:L, reg i35:I, reg Rd32:V, reg dt11:V, reg dr20:V, reg dc10:L, reg dx22:V, reg i37:I, reg Rd34:V, reg dx23:V, reg i38:*, reg i39:V, reg __8:cls, reg r108:V, reg __9:cls, reg r109:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r110:V, reg i42:I, reg r111:V, reg RdTags2:cls, reg docType:*, reg docType1:V, reg p20:p(V +), reg r113:V, reg identical1:cls, reg r114:V, reg r115:V, reg c22:L, reg stopRd2:cls, reg docType2:*, reg docType3:V, reg p21:p(V +), reg Rdfile11:*, reg Rdfile12:V, reg p22:p(V +), reg r118:V, reg i45:I, reg sub:cls, reg sub1:cls, reg docType4:*, reg docType5:V, reg c23:L, reg docType7:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg __10:cls, reg r120:V, reg p23:p(V +), reg r122:V, reg p24:p(V +), reg r124:V, reg l10:*, reg c24:L, reg i47:I, reg r126:V, reg l12:*, reg dr24:V, reg dc12:L, reg dx26:V, reg i49:I, reg dx27:V, reg i50:*, reg i51:V, reg ___1:cls, reg r129:V, reg _notin_:cls, reg docTypes:*, reg docTypes1:V, reg c25:L, reg docTypes3:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg i52:*, reg i53:V, reg __11:cls, reg r130:V, reg p25:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r132:V, reg r133:V, reg c26:cls, reg r134:V, reg p26:p(V +), reg r136:V, reg c27:L, reg warnRd3:cls, reg docType8:*, reg docType9:V, reg p27:p(V +), reg Rdfile13:*, reg Rdfile14:V, reg p28:p(V +), reg sQuote:cls, reg docTypes4:*, reg docTypes5:V, reg c28:L, reg docTypes7:V, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg i56:*, reg i57:V, reg __12:cls, reg r139:V, reg p29:p(V +), reg r141:V, reg p30:p(V +), reg r143:V, reg i58:I, reg sections14:*, reg sections15:V, reg c29:L, reg sections17:V, reg dr30:V, reg dc15:L, reg dx32:V, reg dx33:V, reg __13:cls, reg r145:V, reg r146:V, reg c30:L, reg c32:V, reg startsWith:cls, reg Rd35:*, reg Rd36:V, reg c33:L, reg Rd38:V, reg dr32:V, reg dc16:L, reg dx34:V, reg dx35:V, reg __14:cls, reg r147:V, reg p31:p(V +), reg r149:V, reg c34:L, reg c35:V, reg c37:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r150:V, reg r151:V, reg Rd39:*, reg Rd40:V, reg c38:L, reg Rd42:V, reg dr34:V, reg dc17:L, reg dx36:V, reg dx37:V, reg __15:cls, reg r152:V, reg c39:cls, reg r153:V, reg r154:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r155:V, reg r156:V, reg c40:cls, reg r157:V, reg drop:*, reg drop1:V, reg _in_:cls, reg sections18:*, reg sections19:V, reg p32:p(V +), reg extras:*, reg extras1:V, reg p33:p(V +), reg r160:V, reg r161:V, reg _notin_1:cls, reg sections20:*, reg sections21:V, reg p34:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r163:V, reg r164:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r165:V, reg r166:V, reg sectionOrder:*, reg sectionOrder1:V, reg names:cls, reg r167:V, reg extras2:*, reg extras3:V, reg c41:cls, reg r168:V, reg p35:p(V +), reg r170:V, reg _notin_2:cls, reg stages1:*, reg stages2:V, reg p36:p(V +), reg r172:V, reg c42:L, reg vapply:cls, reg Rd43:*, reg Rd44:V, reg p37:p(V +), reg r174:cls, reg p38:p(V +), reg r176:V, reg bad2:*, reg bad3:V, reg sections22:*, reg sections23:V, reg r177:V, reg render:*, reg render1:V, reg r178:V, reg r179:V, reg r180:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r182:V, reg r183:V, reg bad4:*, reg bad5:V, reg any:cls, reg r184:V, reg c43:L, reg which4:cls, reg bad6:*, reg bad7:V, reg p39:p(V +), reg r186:V, reg s5:V, reg l13:I, reg i60:I, reg i61:I, reg i62:I, reg c44:L, reg x3:V, reg warnRd4:cls, reg Rd45:*, reg Rd46:V, reg c45:L, reg Rd48:V, reg dr36:V, reg dc18:L, reg dx38:V, reg dx39:V, reg s6:*, reg s7:V, reg __16:cls, reg r187:V, reg p40:p(V +), reg Rdfile15:*, reg Rdfile16:V, reg p41:p(V +), reg sections24:*, reg sections25:V, reg c46:L, reg sections27:V, reg dr38:V, reg dc19:L, reg dx40:V, reg dx41:V, reg s8:*, reg s9:V, reg __17:cls, reg r190:V, reg p42:p(V +), reg r192:V, reg drop2:*, reg drop3:V, reg bad8:*, reg bad9:V, reg r193:V, reg Rd49:*, reg Rd50:V, reg c47:L, reg Rd52:V, reg dr40:V, reg dc20:L, reg dx42:V, reg dx43:V, reg drop4:*, reg drop5:V, reg r195:V, reg __18:cls, reg r196:V, reg sections28:*, reg sections29:V, reg c48:L, reg sections31:V, reg dr42:V, reg dc21:L, reg dx44:V, reg dx45:V, reg drop6:*, reg drop7:V, reg r197:V, reg __19:cls, reg r198:V, reg order:cls, reg sectionOrder2:*, reg sectionOrder3:V, reg c49:L, reg sectionOrder5:V, reg dr44:V, reg dc22:L, reg dx46:V, reg dx47:V, reg sections32:*, reg sections33:V, reg __20:cls, reg r199:V, reg p43:p(V +), reg r201:V, reg Rd53:*, reg Rd54:V, reg c50:L, reg Rd56:V, reg dr46:V, reg dc23:L, reg dx48:V, reg dx49:V, reg sortorder:*, reg sortorder1:V, reg __21:cls, reg r202:V, reg sections34:*, reg sections35:V, reg c51:L, reg sections37:V, reg dr48:V, reg dc24:L, reg dx50:V, reg dx51:V, reg sortorder2:*, reg sortorder3:V, reg __22:cls, reg r203:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r204:V, reg r205:V, reg sections38:*, reg sections39:V, reg c52:L, reg sections41:V, reg dr50:V, reg dc25:L, reg dx52:V, reg dx53:V, reg __23:cls, reg r206:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r207:V, reg r208:V, reg c53:cls, reg r209:V, reg identical2:cls, reg r210:V, reg r211:V, reg c54:L, reg c55:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r212:V, reg c59:L, reg r213:V, reg sections42:*, reg sections43:V, reg c60:L, reg c62:L, reg sections45:V, reg dr52:V, reg dc26:L, reg dx54:V, reg c64:L, reg dx55:V, reg __24:cls, reg r214:V, reg identical3:cls, reg r215:V, reg c65:L, reg c66:V, reg c68:L, reg stopRd3:cls, reg Rdfile17:*, reg Rdfile18:V, reg p44:p(V +), reg r217:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r219:V, reg r220:V, reg Rd57:*, reg Rd58:V, reg c69:L, reg Rd60:V, reg dr54:V, reg dc27:L, reg dx56:V, reg dx57:V, reg __25:cls, reg r221:V, reg length8:cls, reg r222:V, reg r223:V, reg c70:L, reg c71:V, reg grepl:cls, reg Rd61:*, reg Rd62:V, reg c73:L, reg Rd64:V, reg dr56:V, reg dc28:L, reg dx58:V, reg dx59:V, reg __26:cls, reg r224:V, reg c74:L, reg dx61:V, reg dr58:V, reg dc29:L, reg dx62:V, reg dx63:V, reg __27:cls, reg r225:V, reg p45:p(V +), reg r227:V, reg c75:L, reg c76:V, reg c78:L, reg stopRd4:cls, reg Rd65:*, reg Rd66:V, reg c79:L, reg Rd68:V, reg dr60:V, reg dc30:L, reg dx64:V, reg dx65:V, reg __28:cls, reg r228:V, reg p46:p(V +), reg Rdfile19:*, reg Rdfile20:V, reg p47:p(V +), reg r231:V, reg structure:cls, reg Rd69:*, reg Rd70:V, reg p48:p(V +), reg sym23:cls, reg base23:cls, reg guard23:L, reg r234:V, reg r235:V, reg docTypes8:*, reg docTypes9:V, reg generator:*, reg generator1:V, reg list:cls, reg r236:V, reg p49:p(V +), reg r238:V |
    mkenv;
    st Rd = Rd;
    st Rdfile = Rdfile;
    st stages = stages;
    RdTags = ldf RdTags;
    check L73() else D0();
  D0():
    deopt 1 [];
  L73():
    p = prom<V +>{
      Rd1 = ld Rd;
      Rd2 = force? Rd1;
      checkMissing(Rd2);
      return Rd2;
    };
    r1 = dyn RdTags(p);
    check L74() else D1();
  D1():
    deopt 3 [r1];
  L74():
    st sections = r1;
    which = ldf which;
    check L75() else D2();
  D2():
    deopt 6 [];
  L75():
    p1 = prom<V +>{
      sections = ld sections;
      sections1 = force? sections;
      checkMissing(sections1);
      r2 = `==`(sections1, "\\Rdversion");
      return r2;
    };
    r4 = dyn which(p1);
    check L76() else D3();
  D3():
    deopt 8 [r4];
  L76():
    st version = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L77() else L78();
  L0(r6):
    r8 = `>`(r6, 1);
    c = `as.logical`(r8);
    if c then L81() else L1();
  L77():
    version = ld version;
    check L79() else D4();
  L78():
    r5 = dyn base(<sym version>);
    goto L0(r5);
  D4():
    deopt 12 [version];
  L1():
    goto L2();
  L2():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L85() else L86();
  L79():
    version1 = force? version;
    checkMissing(version1);
    length = ldf length in base;
    r7 = dyn length(version1);
    check L80() else D5();
  L81():
    stopRd = ldf stopRd;
    check L82() else D6();
  D5():
    deopt 15 [r7];
  D6():
    deopt 19 [];
  L3(r16):
    c4 = `as.logical`(r16);
    if c4 then L90() else L4();
  L80():
    goto L0(r7);
  L82():
    p2 = prom<V +>{
      Rd3 = ld Rd;
      Rd4 = force? Rd3;
      checkMissing(Rd4);
      c1 = `is.object`(Rd4);
      if c1 then L2() else L3(Rd4);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[[", Rd4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(Rd6):
      version2 = ld version;
      version3 = force? version2;
      checkMissing(version3);
      c2 = `is.object`(version3);
      if c2 then L5() else L6(Rd6, version3);
    L1(Rd10, dx3):
      __1 = ldf `[[` in base;
      r10 = dyn __1(Rd10, dx3);
      goto L0(r10);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", version3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(Rd6, dr2);
    L6(Rd8, version5):
      __ = ldf `[` in base;
      r9 = dyn __(version5, 2);
      goto L1(Rd8, r9);
    L7():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(Rd6, dx2);
    };
    p3 = prom<V +>{
      Rdfile1 = ld Rdfile;
      Rdfile2 = force? Rdfile1;
      checkMissing(Rdfile2);
      return Rdfile2;
    };
    r13 = dyn stopRd(p2, p3, "Only one \\Rdversion declaration is allowed");
    check L83() else D7();
  L85():
    grep = ldf grep;
    check L87() else D8();
  L86():
    r15 = dyn base1(<lang `<-`(bad, grep("[^[:blank:][:cntrl:]]", unlist(`[`(Rd, `==`(sections, "TEXT"))), perl=TRUE, useBytes=TRUE))>);
    goto L3(r15);
  D7():
    deopt 23 [r13];
  D8():
    deopt 29 [];
  L4():
    goto L7();
  L7():
    sym2 = ldf `rep.int`;
    base2 = ldf `rep.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L96() else L97();
  L83():
    goto L2();
  L87():
    p5 = prom<V +>{
      unlist = ldf unlist;
      p4 = prom<V +>{
        Rd11 = ld Rd;
        Rd12 = force? Rd11;
        checkMissing(Rd12);
        c3 = `is.object`(Rd12);
        if c3 then L1() else L2(Rd12);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", Rd12);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(Rd14):
        sections2 = ld sections;
        sections3 = force? sections2;
        checkMissing(sections3);
        r17 = `==`(sections3, "TEXT");
        __2 = ldf `[` in base;
        r18 = dyn __2(Rd14, r17);
        goto L0(r18);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r20 = dyn unlist(p4);
      return r20;
    };
    r22 = dyn grep[, , perl, useBytes]("[^[:blank:][:cntrl:]]", p5, TRUE, TRUE);
    check L88() else D9();
  L90():
    bad = ld bad;
    check L91() else D11();
  D9():
    deopt 36 [r22];
  D11():
    deopt 40 [bad];
  L8(r31):
    st drop = r31;
    paste0 = ldf paste0;
    check L103() else D17();
  L88():
    st bad = r22;
    length1 = ldf length in base;
    r23 = dyn length1(r22);
    check L89() else D10();
  L91():
    bad1 = force? bad;
    checkMissing(bad1);
    s = toForSeq(bad1);
    l = length(s);
    i = 0;
    goto L5(i);
  L96():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L98() else L99();
  L97():
    r30 = dyn base2(FALSE, <lang length(sections)>);
    goto L8(r30);
  D10():
    deopt 39 [r23];
  D17():
    deopt 66 [];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l, i2);
    if c5 then L92() else L6();
  L9(r33):
    rep_int = ldf `rep.int` in base;
    r35 = dyn rep_int(FALSE, r33);
    check L102() else D16();
  L89():
    goto L3(r23);
  L98():
    sections6 = ld sections;
    check L100() else D14();
  L99():
    r32 = dyn base3(<sym sections>);
    goto L9(r32);
  L103():
    p8 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      c8 = ldf c in base;
      r38 = dyn c8("description", "usage", "arguments", "format", "details", "value", "references", "source", "seealso", "examples", "author", "encoding");
      goto L0(r38);
    L2():
      r36 = dyn base4("description", "usage", "arguments", "format", "details", "value", "references", "source", "seealso", "examples", "author", "encoding");
      goto L0(r36);
    };
    r40 = dyn paste0("\\", p8);
    check L104() else D18();
  D14():
    deopt 58 [sections6];
  D16():
    deopt 63 [r35];
  D18():
    deopt 69 [r40];
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st s = x;
    warnRd = ldf warnRd;
    check L93() else D12();
  L92():
    goto L7();
  L100():
    sections7 = force? sections6;
    checkMissing(sections7);
    length2 = ldf length in base;
    r34 = dyn length2(sections7);
    check L101() else D15();
  L102():
    goto L8(r35);
  L104():
    st unique_tags = r40;
    unique_tags = ld unique_tags;
    check L105() else D19();
  D12():
    deopt 43 [i2];
  D15():
    deopt 61 [r34];
  D19():
    deopt 71 [unique_tags];
  L93():
    p6 = prom<V +>{
      Rd15 = ld Rd;
      Rd16 = force? Rd15;
      checkMissing(Rd16);
      c6 = `is.object`(Rd16);
      if c6 then L2() else L3(Rd16);
    L0(dx7):
      c7 = `is.object`(dx7);
      if c7 then L5() else L6(dx7);
    L2():
      dr6 = tryDispatchBuiltin.1("[", Rd16);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(Rd18):
      sections4 = ld sections;
      sections5 = force? sections4;
      checkMissing(sections5);
      r24 = `==`(sections5, "TEXT");
      __3 = ldf `[` in base;
      r25 = dyn __3(Rd18, r24);
      goto L0(r25);
    L1(dx11):
      return dx11;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    L5():
      dr8 = tryDispatchBuiltin.1("[[", dx7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(dr8);
    L6(dx9):
      s1 = ld s;
      s2 = force? s1;
      __4 = ldf `[[` in base;
      r26 = dyn __4(dx9, s2);
      goto L1(r26);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx10);
    };
    p7 = prom<V +>{
      Rdfile3 = ld Rdfile;
      Rdfile4 = force? Rdfile3;
      checkMissing(Rdfile4);
      return Rdfile4;
    };
    r29 = dyn warnRd(p6, p7, "All text must be in a section");
    check L94() else D13();
  L101():
    goto L9(r34);
  L105():
    unique_tags1 = force? unique_tags;
    checkMissing(unique_tags1);
    s3 = toForSeq(unique_tags1);
    l1 = length(s3);
    i6 = 0;
    goto L10(i6);
  D13():
    deopt 47 [i2, r29];
  L10(i7):
    i8 = `+`.1(i7, 1);
    c9 = `<`.1(l1, i8);
    if c9 then L106() else L16();
  L94():
    goto L5(i2);
  L16():
    x1 = `[[`(s3, i8, NULL, TRUE);
    st tag = x1;
    which1 = ldf which;
    check L107() else D20();
  L106():
    which2 = ldf which;
    check L124() else D27();
  D20():
    deopt 74 [i8];
  D27():
    deopt 108 [];
  L107():
    p9 = prom<V +>{
      sections8 = ld sections;
      sections9 = force? sections8;
      checkMissing(sections9);
      tag = ld tag;
      tag1 = force? tag;
      checkMissing(tag1);
      r41 = `==`(sections9, tag1);
      return r41;
    };
    r43 = dyn which1(p9);
    check L108() else D21();
  L124():
    p13 = prom<V +>{
      sections10 = ld sections;
      sections11 = force? sections10;
      checkMissing(sections11);
      r68 = `==`(sections11, "\\encoding");
      return r68;
    };
    r70 = dyn which2(p13);
    check L125() else D28();
  D21():
    deopt 76 [i8, r43];
  D28():
    deopt 110 [r70];
  L108():
    st where = r43;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L109() else L110();
  L125():
    st enc = r70;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L126() else L127();
  L11(i13, r45):
    r47 = `>`(r45, 1);
    c10 = `as.logical`(r47);
    if c10 then L113() else L12();
  L17(r72):
    c13 = `as.logical`(r72);
    if c13 then L130() else L18();
  L109():
    where = ld where;
    check L111() else D22();
  L110():
    r44 = dyn base5(<sym where>);
    goto L11(i8, r44);
  L126():
    enc = ld enc;
    check L128() else D29();
  L127():
    r71 = dyn base6(<sym enc>);
    goto L17(r71);
  D22():
    deopt 80 [i8, where];
  D29():
    deopt 114 [enc];
  L12():
    goto L15(i13);
  L15(i24):
    goto L10(i24);
  L18():
    goto L24();
  L24():
    which3 = ldf which;
    check L149() else D38();
  L111():
    where1 = force? where;
    checkMissing(where1);
    length3 = ldf length in base;
    r46 = dyn length3(where1);
    check L112() else D23();
  L113():
    warnRd1 = ldf warnRd;
    check L114() else D24();
  L128():
    enc1 = force? enc;
    checkMissing(enc1);
    length4 = ldf length in base;
    r73 = dyn length4(enc1);
    check L129() else D30();
  L130():
    Rd19 = ld Rd;
    check L131() else D31();
  D23():
    deopt 83 [i8, r46];
  D24():
    deopt 87 [i13];
  D30():
    deopt 117 [r73];
  D31():
    deopt 118 [Rd19];
  D38():
    deopt 155 [];
  L112():
    goto L11(i8, r46);
  L114():
    p10 = prom<V +>{
      Rdfile5 = ld Rdfile;
      Rdfile6 = force? Rdfile5;
      checkMissing(Rdfile6);
      return Rdfile6;
    };
    p12 = prom<V +>{
      sprintf = ldf sprintf;
      p11 = prom<V +>{
        tag2 = ld tag;
        tag3 = force? tag2;
        checkMissing(tag3);
        return tag3;
      };
      r50 = dyn sprintf("Only one %s section is allowed: the first will be used", p11);
      return r50;
    };
    r52 = dyn warnRd1(NULL, p10, p12);
    check L115() else D25();
  L129():
    goto L17(r73);
  L131():
    Rd20 = force? Rd19;
    checkMissing(Rd20);
    c14 = `is.object`(Rd20);
    if c14 then L132() else L133(Rd20);
  L149():
    p17 = prom<V +>{
      sections12 = ld sections;
      sections13 = force? sections12;
      checkMissing(sections13);
      r87 = `==`(sections13, "\\docType");
      return r87;
    };
    r89 = dyn which3(p17);
    check L150() else D39();
  D25():
    deopt 91 [i13, r52];
  D39():
    deopt 157 [r89];
  L19(dx17):
    st encoding = dx17;
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L139() else L140();
  L115():
    l2 = ld drop;
    c11 = `is.object`(l2);
    if c11 then L116() else L117(i13, TRUE, l2);
  L132():
    dr14 = tryDispatchBuiltin.1("[[", Rd20);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L134() else L133(dr14);
  L133(Rd22):
    enc2 = ld enc;
    check L135() else D32();
  L150():
    st dt = r89;
    character = ldf character;
    check L151() else D40();
  D32():
    deopt 120 [Rd22, enc2];
  D40():
    deopt 160 [];
  L13(i19, r56, dx13):
    st drop = dx13;
    goto L15(i19);
  L21(r77):
    r81 = `!`(r77);
    c16 = `as.logical`(r81);
    if c16 then L144() else L22();
  L116():
    dr10 = tryDispatchBuiltin.0("[<-", l2, TRUE);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L118() else L117(i13, TRUE, dr10);
  L117(i17, r54, l4):
    where2 = ld where;
    check L119() else D26();
  L134():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L19(dx16);
  L135():
    enc3 = force? enc2;
    checkMissing(enc3);
    c15 = `is.object`(enc3);
    if c15 then L136() else L137(Rd22, enc3);
  L139():
    RdTags1 = ldf RdTags;
    check L141() else D33();
  L140():
    r76 = dyn base7(<lang RdTags(encoding)>, "TEXT");
    goto L21(r76);
  L151():
    p18 = prom<V +>{
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r91):
      return r91;
    L1():
      dt = ld dt;
      dt1 = force? dt;
      checkMissing(dt1);
      length5 = ldf length in base;
      r92 = dyn length5(dt1);
      goto L0(r92);
    L2():
      r90 = dyn base8(<sym dt>);
      goto L0(r90);
    };
    r94 = dyn character(p18);
    check L152() else D41();
  D26():
    deopt 95 [i17, r54, l4, TRUE, where2];
  D33():
    deopt 130 [];
  D41():
    deopt 162 [r94];
  L20(Rd26, dx19):
    __7 = ldf `[[` in base;
    r75 = dyn __7(Rd26, dx19);
    goto L19(r75);
  L22():
    goto L23(NULL);
  L23(r85):
    goto L24();
  L118():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L13(i13, TRUE, dx12);
  L119():
    where3 = force? where2;
    checkMissing(where3);
    c12 = `is.object`(where3);
    if c12 then L120() else L121(i17, r54, l4, TRUE, where3);
  L136():
    dr16 = tryDispatchBuiltin.1("[", enc3);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L138() else L137(Rd22, dr16);
  L137(Rd24, enc5):
    __6 = ldf `[` in base;
    r74 = dyn __6(enc5, 1);
    goto L20(Rd24, r74);
  L141():
    p14 = prom<V +>{
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      return encoding1;
    };
    r79 = dyn RdTags1(p14);
    check L142() else D34();
  L144():
    stopRd1 = ldf stopRd;
    check L145() else D36();
  L152():
    st docTypes = r94;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L153() else L154();
  D34():
    deopt 132 [r79];
  D36():
    deopt 145 [];
  L14(i23, r63, l8, r64, dx15):
    ___ = ldf `[<-` in base;
    r66 = dyn ___(l8, r64, dx15);
    goto L13(i23, r63, r66);
  L25(r96):
    c17 = `as.logical`(r96);
    if c17 then L157() else L26();
  L120():
    dr12 = tryDispatchBuiltin.1("[", where3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L122() else L121(i17, r54, l4, TRUE, dr12);
  L121(i21, r59, l6, r60, where5):
    __5 = ldf `[` in base;
    r65 = dyn __5(where5, -1);
    goto L14(i21, r59, l6, r60, r65);
  L138():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L20(Rd22, dx18);
  L142():
    identical = ldf identical in base;
    r80 = dyn identical(r79, "TEXT", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L143() else D35();
  L145():
    p15 = prom<V +>{
      encoding2 = ld encoding;
      encoding3 = force? encoding2;
      checkMissing(encoding3);
      return encoding3;
    };
    p16 = prom<V +>{
      Rdfile7 = ld Rdfile;
      Rdfile8 = force? Rdfile7;
      checkMissing(Rdfile8);
      return Rdfile8;
    };
    r84 = dyn stopRd1(p15, p16, "'encoding' must be plain text");
    check L146() else D37();
  L153():
    dt2 = ld dt;
    check L155() else D42();
  L154():
    r95 = dyn base9(<sym dt>);
    goto L25(r95);
  D35():
    deopt 142 [r80];
  D37():
    deopt 149 [r84];
  D42():
    deopt 166 [dt2];
  L26():
    goto L41();
  L41():
    sections14 = ld sections;
    check L201() else D64();
  L122():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L14(i17, r54, l4, TRUE, dx14);
  L143():
    goto L21(r80);
  L146():
    goto L23(r84);
  L155():
    dt3 = force? dt2;
    checkMissing(dt3);
    length6 = ldf length in base;
    r97 = dyn length6(dt3);
    check L156() else D43();
  L157():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L158() else L159();
  D43():
    deopt 169 [r97];
  D64():
    deopt 255 [sections14];
  L27(r99):
    r101 = `>`(r99, 1);
    c18 = `as.logical`(r101);
    if c18 then L162() else L28();
  L156():
    goto L25(r97);
  L158():
    dt4 = ld dt;
    check L160() else D44();
  L159():
    r98 = dyn base10(<sym dt>);
    goto L27(r98);
  L201():
    sections15 = force? sections14;
    checkMissing(sections15);
    c29 = `is.object`(sections15);
    if c29 then L202() else L203(sections15);
  D44():
    deopt 172 [dt4];
  L28():
    goto L29();
  L29():
    sym11 = ldf seq_along;
    base11 = ldf seq_along in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L166() else L167();
  L42(dx33):
    r146 = `==`(dx33, "COMMENT");
    c30 = `as.logical`(r146);
    if c30 then L205() else L43(c30);
  L160():
    dt5 = force? dt4;
    checkMissing(dt5);
    length7 = ldf length in base;
    r100 = dyn length7(dt5);
    check L161() else D45();
  L162():
    warnRd2 = ldf warnRd;
    check L163() else D46();
  L202():
    dr30 = tryDispatchBuiltin.1("[", sections15);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L204() else L203(dr30);
  L203(sections17):
    __13 = ldf `[` in base;
    r145 = dyn __13(sections17, 1);
    goto L42(r145);
  D45():
    deopt 175 [r100];
  D46():
    deopt 179 [];
  L30(r106):
    s4 = toForSeq(r106);
    l9 = length(s4);
    i25 = 0;
    goto L31(i25);
  L43(c32):
    c37 = `as.logical`(c32);
    if c37 then L209() else L44();
  L161():
    goto L27(r100);
  L163():
    p19 = prom<V +>{
      Rdfile9 = ld Rdfile;
      Rdfile10 = force? Rdfile9;
      checkMissing(Rdfile10);
      return Rdfile10;
    };
    r103 = dyn warnRd2(NULL, p19, "Multiple \\docType sections are not supported");
    check L164() else D47();
  L166():
    dt6 = ld dt;
    check L168() else D48();
  L167():
    r105 = dyn base11(<sym dt>);
    goto L30(r105);
  L204():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L42(dx32);
  L205():
    startsWith = ldf startsWith;
    check L206() else D65();
  D47():
    deopt 183 [r103];
  D48():
    deopt 187 [dt6];
  D65():
    deopt 263 [c30];
  L31(i26):
    i27 = `+`.1(i26, 1);
    c19 = `<`.1(l9, i27);
    if c19 then L169() else L40();
  L44():
    goto L47("");
  L47(r154):
    st generator = r154;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L218() else L219();
  L164():
    goto L29();
  L168():
    dt7 = force? dt6;
    checkMissing(dt7);
    r107 = seq_along(dt7);
    goto L30(r107);
  L206():
    p31 = prom<V +>{
      Rd35 = ld Rd;
      Rd36 = force? Rd35;
      checkMissing(Rd36);
      c33 = `is.object`(Rd36);
      if c33 then L1() else L2(Rd36);
    L0(dx35):
      return dx35;
    L1():
      dr32 = tryDispatchBuiltin.1("[[", Rd36);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(Rd38):
      __14 = ldf `[[` in base;
      r147 = dyn __14(Rd38, 1);
      goto L0(r147);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx34);
    };
    r149 = dyn startsWith(p31, "% Generated by");
    check L207() else D66();
  L209():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L210() else L211();
  D66():
    deopt 266 [c30, r149];
  L40():
    x2 = `[[`(s4, i27, NULL, TRUE);
    st i = x2;
    Rd27 = ld Rd;
    check L170() else D49();
  L45(r151):
    goto L47(r151);
  L48(r156):
    st extras = r156;
    drop = ld drop;
    check L221() else D70();
  L169():
    goto L41();
  L207():
    c34 = `as.logical`(r149);
    c35 = `&&`(c30, c34);
    goto L43(c35);
  L210():
    Rd39 = ld Rd;
    check L212() else D67();
  L211():
    r150 = dyn base14(<lang `[[`(Rd, 1)>);
    goto L45(r150);
  L218():
    c40 = ldf c in base;
    r157 = dyn c40("COMMENT", "TEXT", "\\docType", "\\Rdversion", "\\RdOpts", "USERMACRO", "\\newcommand", "\\renewcommand");
    check L220() else D69();
  L219():
    r155 = dyn base15("COMMENT", "TEXT", "\\docType", "\\Rdversion", "\\RdOpts", "USERMACRO", "\\newcommand", "\\renewcommand");
    goto L48(r155);
  D49():
    deopt 190 [i27, Rd27];
  D67():
    deopt 270 [Rd39];
  D69():
    deopt 291 [r157];
  D70():
    deopt 293 [drop];
  L170():
    Rd28 = force? Rd27;
    checkMissing(Rd28);
    c20 = `is.object`(Rd28);
    if c20 then L171() else L172(i27, Rd28);
  L212():
    Rd40 = force? Rd39;
    checkMissing(Rd40);
    c38 = `is.object`(Rd40);
    if c38 then L213() else L214(Rd40);
  L220():
    goto L48(r157);
  L221():
    drop1 = force? drop;
    checkMissing(drop1);
    _in_ = ldf `%in%`;
    check L222() else D71();
  D71():
    deopt 295 [drop1];
  L32(i33, dx21):
    st docType = dx21;
    sym12 = ldf identical;
    base12 = ldf identical in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L179() else L180();
  L46(dx37):
    c39 = ldf c in base;
    r153 = dyn c39(dx37);
    check L216() else D68();
  L171():
    dr18 = tryDispatchBuiltin.1("[[", Rd28);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L173() else L172(i27, dr18);
  L172(i31, Rd30):
    dt8 = ld dt;
    check L174() else D50();
  L213():
    dr34 = tryDispatchBuiltin.1("[[", Rd40);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L215() else L214(dr34);
  L214(Rd42):
    __15 = ldf `[[` in base;
    r152 = dyn __15(Rd42, 1);
    goto L46(r152);
  L222():
    p32 = prom<V +>{
      sections18 = ld sections;
      sections19 = force? sections18;
      checkMissing(sections19);
      return sections19;
    };
    p33 = prom<V +>{
      extras = ld extras;
      extras1 = force? extras;
      checkMissing(extras1);
      return extras1;
    };
    r160 = dyn _in_(p32, p33);
    check L223() else D72();
  D50():
    deopt 192 [i31, Rd30, dt8];
  D68():
    deopt 276 [r153];
  D72():
    deopt 298 [drop1, r160];
  L34(i42, r111):
    r115 = `!`(r111);
    c22 = `as.logical`(r115);
    if c22 then L184() else L35();
  L173():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L32(i27, dx20);
  L174():
    dt9 = force? dt8;
    checkMissing(dt9);
    c21 = `is.object`(dt9);
    if c21 then L175() else L176(i31, Rd30, dt9);
  L179():
    RdTags2 = ldf RdTags;
    check L181() else D52();
  L180():
    r110 = dyn base12(<lang RdTags(docType)>, "TEXT");
    goto L34(i33, r110);
  L215():
    dx36 = getTryDispatchBuiltinValue(dr34);
    goto L46(dx36);
  L216():
    goto L45(r153);
  L223():
    r161 = `||`(drop1, r160);
    st drop = r161;
    _notin_1 = ldf `%notin%`;
    check L224() else D73();
  D52():
    deopt 202 [i33];
  D73():
    deopt 302 [];
  L33(i37, Rd34, dx23):
    __9 = ldf `[[` in base;
    r109 = dyn __9(Rd34, dx23);
    goto L32(i37, r109);
  L35():
    goto L36(i42);
  L36(i45):
    sub = ldf sub;
    check L188() else D57();
  L175():
    dr20 = tryDispatchBuiltin.1("[", dt9);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L177() else L176(i31, Rd30, dr20);
  L176(i35, Rd32, dt11):
    i38 = ld i;
    check L178() else D51();
  L181():
    p20 = prom<V +>{
      docType = ld docType;
      docType1 = force? docType;
      checkMissing(docType1);
      return docType1;
    };
    r113 = dyn RdTags2(p20);
    check L182() else D53();
  L184():
    stopRd2 = ldf stopRd;
    check L185() else D55();
  L224():
    p34 = prom<V +>{
      sections20 = ld sections;
      sections21 = force? sections20;
      checkMissing(sections21);
      return sections21;
    };
    p35 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L2() else L3();
    L0(r164):
      return r164;
    L2():
      sym17 = ldf names;
      base17 = ldf names in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L4() else L5();
    L3():
      r163 = dyn base16(<lang names(sectionOrder)>, <sym extras>);
      goto L0(r163);
    L1(r166):
      extras2 = ld extras;
      extras3 = force? extras2;
      checkMissing(extras3);
      c41 = ldf c in base;
      r168 = dyn c41(r166, extras3);
      goto L0(r168);
    L4():
      sectionOrder = ld sectionOrder;
      sectionOrder1 = force? sectionOrder;
      checkMissing(sectionOrder1);
      names = ldf names in base;
      r167 = dyn names(sectionOrder1);
      goto L1(r167);
    L5():
      r165 = dyn base17(<sym sectionOrder>);
      goto L1(r165);
    };
    r170 = dyn _notin_1(p34, p35);
    check L225() else D74();
  D51():
    deopt 194 [i35, Rd32, dt11, i38];
  D53():
    deopt 204 [i33, r113];
  D55():
    deopt 217 [i42];
  D57():
    deopt 225 [i45];
  D74():
    deopt 305 [r170];
  L177():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L33(i31, Rd30, dx22);
  L178():
    i39 = force? i38;
    __8 = ldf `[` in base;
    r108 = dyn __8(dt11, i39);
    goto L33(i35, Rd32, r108);
  L182():
    identical1 = ldf identical in base;
    r114 = dyn identical1(r113, "TEXT", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L183() else D54();
  L185():
    p21 = prom<V +>{
      docType2 = ld docType;
      docType3 = force? docType2;
      checkMissing(docType3);
      return docType3;
    };
    p22 = prom<V +>{
      Rdfile11 = ld Rdfile;
      Rdfile12 = force? Rdfile11;
      checkMissing(Rdfile12);
      return Rdfile12;
    };
    r118 = dyn stopRd2(p21, p22, "'docType' must be plain text");
    check L186() else D56();
  L188():
    p24 = prom<V +>{
      sub1 = ldf sub;
      p23 = prom<V +>{
        docType4 = ld docType;
        docType5 = force? docType4;
        checkMissing(docType5);
        c23 = `is.object`(docType5);
        if c23 then L1() else L2(docType5);
      L0(dx25):
        return dx25;
      L1():
        dr22 = tryDispatchBuiltin.1("[[", docType5);
        dc11 = getTryDispatchBuiltinDispatched(dr22);
        if dc11 then L3() else L2(dr22);
      L2(docType7):
        __10 = ldf `[[` in base;
        r120 = dyn __10(docType7, 1);
        goto L0(r120);
      L3():
        dx24 = getTryDispatchBuiltinValue(dr22);
        goto L0(dx24);
      };
      r122 = dyn sub1(" *$", "", p23);
      return r122;
    };
    r124 = dyn sub("^ *", "", p24);
    check L189() else D58();
  L225():
    st bad = r170;
    _notin_2 = ldf `%notin%`;
    check L226() else D75();
  D54():
    deopt 214 [i33, r114];
  D56():
    deopt 221 [i42, r118];
  D58():
    deopt 229 [i45, r124];
  D75():
    deopt 308 [];
  L183():
    goto L34(i33, r114);
  L186():
    goto L36(i42);
  L189():
    l10 = ld docTypes;
    c24 = `is.object`(l10);
    if c24 then L190() else L191(i45, r124, l10);
  L226():
    p36 = prom<V +>{
      stages1 = ld stages;
      stages2 = force? stages1;
      checkMissing(stages2);
      return stages2;
    };
    r172 = dyn _notin_2("render", p36);
    check L227() else D76();
  D76():
    deopt 311 [r172];
  L37(i49, dx27):
    st docTypes = dx27;
    _notin_ = ldf `%notin%`;
    check L194() else D60();
  L190():
    dr24 = tryDispatchBuiltin.0("[<-", l10, r124);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L192() else L191(i45, r124, dr24);
  L191(i47, r126, l12):
    i50 = ld i;
    check L193() else D59();
  L227():
    c42 = `as.logical`(r172);
    if c42 then L228() else L49();
  D59():
    deopt 231 [i47, r126, l12, r124, i50];
  D60():
    deopt 236 [i49];
  L49():
    goto L50();
  L50():
    sym18 = ldf any;
    base18 = ldf any in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L235() else L236();
  L192():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L37(i45, dx26);
  L193():
    i51 = force? i50;
    ___1 = ldf `[<-` in base;
    r129 = dyn ___1(l12, r124, i51);
    goto L37(i47, r129);
  L194():
    p25 = prom<V +>{
      docTypes = ld docTypes;
      docTypes1 = force? docTypes;
      checkMissing(docTypes1);
      c25 = `is.object`(docTypes1);
      if c25 then L1() else L2(docTypes1);
    L0(dx29):
      return dx29;
    L1():
      dr26 = tryDispatchBuiltin.1("[", docTypes1);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(docTypes3):
      i52 = ld i;
      i53 = force? i52;
      __11 = ldf `[` in base;
      r130 = dyn __11(docTypes3, i53);
      goto L0(r130);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx28);
    };
    p26 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r133):
      return r133;
    L1():
      c26 = ldf c in base;
      r134 = dyn c26("data", "package", "methods", "class", "import");
      goto L0(r134);
    L2():
      r132 = dyn base13("data", "package", "methods", "class", "import");
      goto L0(r132);
    };
    r136 = dyn _notin_(p25, p26);
    check L195() else D61();
  L228():
    vapply = ldf vapply;
    check L229() else D77();
  D61():
    deopt 239 [i49, r136];
  D77():
    deopt 313 [];
  L51(r183):
    c43 = `as.logical`(r183);
    if c43 then L239() else L52();
  L195():
    c27 = `as.logical`(r136);
    if c27 then L196() else L38();
  L229():
    p37 = prom<V +>{
      Rd43 = ld Rd;
      Rd44 = force? Rd43;
      checkMissing(Rd44);
      return Rd44;
    };
    p38 = prom<V +>{
      r174 = clos inner3560810862;
      return r174;
    };
    r176 = dyn vapply(p37, p38, TRUE);
    check L230() else D78();
  L235():
    bad4 = ld bad;
    check L237() else D82();
  L236():
    r182 = dyn base18(<sym bad>);
    goto L51(r182);
  D78():
    deopt 317 [r176];
  D82():
    deopt 333 [bad4];
  L38():
    goto L39(i49);
  L39(i58):
    goto L31(i58);
  L52():
    goto L55();
  L55():
    Rd49 = ld Rd;
    check L248() else D90();
  L196():
    warnRd3 = ldf warnRd;
    check L197() else D62();
  L230():
    st render = r176;
    bad2 = ld bad;
    check L231() else D79();
  L237():
    bad5 = force? bad4;
    checkMissing(bad5);
    any = ldf any in base;
    r184 = dyn any(bad5);
    check L238() else D83();
  L239():
    which4 = ldf which;
    check L240() else D84();
  D62():
    deopt 241 [i49];
  D79():
    deopt 319 [bad2];
  D83():
    deopt 336 [r184];
  D84():
    deopt 338 [];
  D90():
    deopt 359 [Rd49];
  L197():
    p27 = prom<V +>{
      docType8 = ld docType;
      docType9 = force? docType8;
      checkMissing(docType9);
      return docType9;
    };
    p28 = prom<V +>{
      Rdfile13 = ld Rdfile;
      Rdfile14 = force? Rdfile13;
      checkMissing(Rdfile14);
      return Rdfile14;
    };
    p30 = prom<V +>{
      sQuote = ldf sQuote;
      p29 = prom<V +>{
        docTypes4 = ld docTypes;
        docTypes5 = force? docTypes4;
        checkMissing(docTypes5);
        c28 = `is.object`(docTypes5);
        if c28 then L1() else L2(docTypes5);
      L0(dx31):
        return dx31;
      L1():
        dr28 = tryDispatchBuiltin.1("[", docTypes5);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L3() else L2(dr28);
      L2(docTypes7):
        i56 = ld i;
        i57 = force? i56;
        __12 = ldf `[` in base;
        r139 = dyn __12(docTypes7, i57);
        goto L0(r139);
      L3():
        dx30 = getTryDispatchBuiltinValue(dr28);
        goto L0(dx30);
      };
      r141 = dyn sQuote(p29);
      return r141;
    };
    r143 = dyn warnRd3(p27, p28, "docType ", p30, " is unrecognized");
    check L198() else D63();
  L231():
    bad3 = force? bad2;
    checkMissing(bad3);
    sections22 = ld sections;
    check L232() else D80();
  L238():
    goto L51(r184);
  L240():
    p39 = prom<V +>{
      bad6 = ld bad;
      bad7 = force? bad6;
      checkMissing(bad7);
      return bad7;
    };
    r186 = dyn which4(p39);
    check L241() else D85();
  L248():
    Rd50 = force? Rd49;
    checkMissing(Rd50);
    c47 = `is.object`(Rd50);
    if c47 then L249() else L250(Rd50);
  D63():
    deopt 247 [i49, r143];
  D80():
    deopt 320 [bad3, sections22];
  D85():
    deopt 340 [r186];
  L56(dx43):
    st Rd = dx43;
    sections28 = ld sections;
    check L253() else D92();
  L198():
    goto L39(i49);
  L232():
    sections23 = force? sections22;
    checkMissing(sections23);
    r177 = `!=`(sections23, "\\Sexpr");
    render = ld render;
    check L233() else D81();
  L241():
    s5 = toForSeq(r186);
    l13 = length(s5);
    i60 = 0;
    goto L53(i60);
  L249():
    dr40 = tryDispatchBuiltin.1("[", Rd50);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L251() else L250(dr40);
  L250(Rd52):
    drop4 = ld drop;
    check L252() else D91();
  D81():
    deopt 323 [bad3, r177, render];
  D91():
    deopt 361 [Rd52, drop4];
  D92():
    deopt 366 [sections28];
  L53(i61):
    i62 = `+`.1(i61, 1);
    c44 = `<`.1(l13, i62);
    if c44 then L242() else L54();
  L233():
    render1 = force? render;
    checkMissing(render1);
    r178 = `!`(render1);
    r179 = `||`(r177, r178);
    r180 = `&&`(bad3, r179);
    st bad = r180;
    goto L50();
  L251():
    dx42 = getTryDispatchBuiltinValue(dr40);
    goto L56(dx42);
  L252():
    drop5 = force? drop4;
    checkMissing(drop5);
    r195 = `!`(drop5);
    __18 = ldf `[` in base;
    r196 = dyn __18(Rd52, r195);
    goto L56(r196);
  L253():
    sections29 = force? sections28;
    checkMissing(sections29);
    c48 = `is.object`(sections29);
    if c48 then L254() else L255(sections29);
  L54():
    x3 = `[[`(s5, i62, NULL, TRUE);
    st s = x3;
    warnRd4 = ldf warnRd;
    check L243() else D86();
  L57(dx45):
    st sections = dx45;
    order = ldf order;
    check L258() else D94();
  L242():
    drop2 = ld drop;
    check L245() else D88();
  L254():
    dr42 = tryDispatchBuiltin.1("[", sections29);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L256() else L255(dr42);
  L255(sections31):
    drop6 = ld drop;
    check L257() else D93();
  D86():
    deopt 342 [i62];
  D88():
    deopt 352 [drop2];
  D93():
    deopt 368 [sections31, drop6];
  D94():
    deopt 374 [];
  L243():
    p40 = prom<V +>{
      Rd45 = ld Rd;
      Rd46 = force? Rd45;
      checkMissing(Rd46);
      c45 = `is.object`(Rd46);
      if c45 then L1() else L2(Rd46);
    L0(dx39):
      return dx39;
    L1():
      dr36 = tryDispatchBuiltin.1("[[", Rd46);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(Rd48):
      s6 = ld s;
      s7 = force? s6;
      __16 = ldf `[[` in base;
      r187 = dyn __16(Rd48, s7);
      goto L0(r187);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx38);
    };
    p41 = prom<V +>{
      Rdfile15 = ld Rdfile;
      Rdfile16 = force? Rdfile15;
      checkMissing(Rdfile16);
      return Rdfile16;
    };
    p42 = prom<V +>{
      sections24 = ld sections;
      sections25 = force? sections24;
      checkMissing(sections25);
      c46 = `is.object`(sections25);
      if c46 then L1() else L2(sections25);
    L0(dx41):
      return dx41;
    L1():
      dr38 = tryDispatchBuiltin.1("[", sections25);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(sections27):
      s8 = ld s;
      s9 = force? s8;
      __17 = ldf `[` in base;
      r190 = dyn __17(sections27, s9);
      goto L0(r190);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx40);
    };
    r192 = dyn warnRd4(p40, p41, "Section ", p42, " is unrecognized and will be dropped");
    check L244() else D87();
  L245():
    drop3 = force? drop2;
    checkMissing(drop3);
    bad8 = ld bad;
    check L246() else D89();
  L256():
    dx44 = getTryDispatchBuiltinValue(dr42);
    goto L57(dx44);
  L257():
    drop7 = force? drop6;
    checkMissing(drop7);
    r197 = `!`(drop7);
    __19 = ldf `[` in base;
    r198 = dyn __19(sections31, r197);
    goto L57(r198);
  L258():
    p43 = prom<V +>{
      sectionOrder2 = ld sectionOrder;
      sectionOrder3 = force? sectionOrder2;
      checkMissing(sectionOrder3);
      c49 = `is.object`(sectionOrder3);
      if c49 then L1() else L2(sectionOrder3);
    L0(dx47):
      return dx47;
    L1():
      dr44 = tryDispatchBuiltin.1("[", sectionOrder3);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(sectionOrder5):
      sections32 = ld sections;
      sections33 = force? sections32;
      __20 = ldf `[` in base;
      r199 = dyn __20(sectionOrder5, sections33);
      goto L0(r199);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx46);
    };
    r201 = dyn order(p43);
    check L259() else D95();
  D87():
    deopt 348 [i62, r192];
  D89():
    deopt 353 [drop3, bad8];
  D95():
    deopt 376 [r201];
  L244():
    goto L53(i62);
  L246():
    bad9 = force? bad8;
    checkMissing(bad9);
    r193 = `||`(drop3, bad9);
    st drop = r193;
    goto L55();
  L259():
    st sortorder = r201;
    Rd53 = ld Rd;
    check L260() else D96();
  D96():
    deopt 378 [Rd53];
  L260():
    Rd54 = force? Rd53;
    checkMissing(Rd54);
    c50 = `is.object`(Rd54);
    if c50 then L261() else L262(Rd54);
  L58(dx49):
    st Rd = dx49;
    sections34 = ld sections;
    check L265() else D98();
  L261():
    dr46 = tryDispatchBuiltin.1("[", Rd54);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L263() else L262(dr46);
  L262(Rd56):
    sortorder = ld sortorder;
    check L264() else D97();
  D97():
    deopt 380 [Rd56, sortorder];
  D98():
    deopt 384 [sections34];
  L263():
    dx48 = getTryDispatchBuiltinValue(dr46);
    goto L58(dx48);
  L264():
    sortorder1 = force? sortorder;
    __21 = ldf `[` in base;
    r202 = dyn __21(Rd56, sortorder1);
    goto L58(r202);
  L265():
    sections35 = force? sections34;
    checkMissing(sections35);
    c51 = `is.object`(sections35);
    if c51 then L266() else L267(sections35);
  L59(dx51):
    st sections = dx51;
    sym19 = ldf identical;
    base19 = ldf identical in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L270() else L271();
  L266():
    dr48 = tryDispatchBuiltin.1("[", sections35);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L268() else L267(dr48);
  L267(sections37):
    sortorder2 = ld sortorder;
    check L269() else D99();
  D99():
    deopt 386 [sections37, sortorder2];
  L60(r205):
    r211 = `!`(r205);
    c54 = `as.logical`(r211);
    if c54 then L63(c54) else L280();
  L268():
    dx50 = getTryDispatchBuiltinValue(dr48);
    goto L59(dx50);
  L269():
    sortorder3 = force? sortorder2;
    __22 = ldf `[` in base;
    r203 = dyn __22(sections37, sortorder3);
    goto L59(r203);
  L270():
    sections38 = ld sections;
    check L272() else D100();
  L271():
    r204 = dyn base19(<lang `[`(sections, `:`(1.0, 2.0))>, <lang c("\\title", "\\name")>);
    goto L60(r204);
  D100():
    deopt 392 [sections38];
  L63(c55):
    c68 = `as.logical`(c55);
    if c68 then L289() else L66();
  L272():
    sections39 = force? sections38;
    checkMissing(sections39);
    c52 = `is.object`(sections39);
    if c52 then L273() else L274(sections39);
  L280():
    sym21 = ldf identical;
    base21 = ldf identical in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L281() else L282();
  L61(dx53):
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L276() else L277();
  L64(c59, r213):
    c65 = `as.logical`(r213);
    c66 = `||`(c59, c65);
    goto L63(c66);
  L66():
    goto L67();
  L67():
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L293() else L294();
  L273():
    dr50 = tryDispatchBuiltin.1("[", sections39);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L275() else L274(dr50);
  L274(sections41):
    __23 = ldf `[` in base;
    r206 = dyn __23(sections41, <int 1, 2>);
    goto L61(r206);
  L281():
    sections42 = ld sections;
    check L283() else D103();
  L282():
    r212 = dyn base21(<lang `[`(sections, 3)>, "\\name");
    goto L64(c54, r212);
  L289():
    stopRd3 = ldf stopRd;
    check L290() else D105();
  D103():
    deopt 415 [c54, sections42];
  D105():
    deopt 432 [];
  L62(r208):
    identical2 = ldf identical in base;
    r210 = dyn identical2(dx53, r208, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L279() else D102();
  L68(r220):
    r223 = `!=`(r220, 1);
    c70 = `as.logical`(r223);
    if c70 then L70(c70) else L300();
  L275():
    dx52 = getTryDispatchBuiltinValue(dr50);
    goto L61(dx52);
  L276():
    c53 = ldf c in base;
    r209 = dyn c53("\\title", "\\name");
    check L278() else D101();
  L277():
    r207 = dyn base20("\\title", "\\name");
    goto L62(r207);
  L283():
    sections43 = force? sections42;
    checkMissing(sections43);
    c60 = `is.object`(sections43);
    if c60 then L284() else L285(c54, sections43);
  L290():
    p44 = prom<V +>{
      Rdfile17 = ld Rdfile;
      Rdfile18 = force? Rdfile17;
      checkMissing(Rdfile18);
      return Rdfile18;
    };
    r217 = dyn stopRd3(NULL, p44, "Sections \\title, and \\name must exist and be unique in Rd files");
    check L291() else D106();
  L293():
    Rd57 = ld Rd;
    check L295() else D107();
  L294():
    r219 = dyn base22(<lang `[[`(Rd, 2)>);
    goto L68(r219);
  D101():
    deopt 402 [r209];
  D102():
    deopt 411 [r210];
  D106():
    deopt 436 [r217];
  D107():
    deopt 441 [Rd57];
  L65(c64, dx55):
    identical3 = ldf identical in base;
    r215 = dyn identical3(dx55, "\\name", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L287() else D104();
  L70(c71):
    c78 = `as.logical`(c71);
    if c78 then L304() else L71();
  L278():
    goto L62(r209);
  L279():
    goto L60(r210);
  L284():
    dr52 = tryDispatchBuiltin.1("[", sections43);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L286() else L285(c54, dr52);
  L285(c62, sections45):
    __24 = ldf `[` in base;
    r214 = dyn __24(sections45, 3);
    goto L65(c62, r214);
  L291():
    goto L67();
  L295():
    Rd58 = force? Rd57;
    checkMissing(Rd58);
    c69 = `is.object`(Rd58);
    if c69 then L296() else L297(Rd58);
  L300():
    grepl = ldf grepl;
    check L301() else D109();
  D104():
    deopt 429 [c64, r215];
  D109():
    deopt 451 [c70];
  L69(dx57):
    length8 = ldf length in base;
    r222 = dyn length8(dx57);
    check L299() else D108();
  L71():
    goto L72();
  L72():
    structure = ldf structure;
    check L308() else D113();
  L286():
    dx54 = getTryDispatchBuiltinValue(dr52);
    goto L65(c54, dx54);
  L287():
    goto L64(c64, r215);
  L296():
    dr54 = tryDispatchBuiltin.1("[[", Rd58);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L298() else L297(dr54);
  L297(Rd60):
    __25 = ldf `[[` in base;
    r221 = dyn __25(Rd60, 2);
    goto L69(r221);
  L301():
    p45 = prom<V +>{
      Rd61 = ld Rd;
      Rd62 = force? Rd61;
      checkMissing(Rd62);
      c73 = `is.object`(Rd62);
      if c73 then L2() else L3(Rd62);
    L0(dx59):
      c74 = `is.object`(dx59);
      if c74 then L5() else L6(dx59);
    L2():
      dr56 = tryDispatchBuiltin.1("[[", Rd62);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L4() else L3(dr56);
    L3(Rd64):
      __26 = ldf `[[` in base;
      r224 = dyn __26(Rd64, 2);
      goto L0(r224);
    L1(dx63):
      return dx63;
    L4():
      dx58 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx58);
    L5():
      dr58 = tryDispatchBuiltin.1("[[", dx59);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L7() else L6(dr58);
    L6(dx61):
      __27 = ldf `[[` in base;
      r225 = dyn __27(dx61, 1);
      goto L1(r225);
    L7():
      dx62 = getTryDispatchBuiltinValue(dr58);
      goto L1(dx62);
    };
    r227 = dyn grepl[, , fixed]("\\", p45, TRUE);
    check L302() else D110();
  L304():
    stopRd4 = ldf stopRd;
    check L305() else D111();
  D108():
    deopt 447 [r222];
  D110():
    deopt 456 [c70, r227];
  D111():
    deopt 459 [];
  D113():
    deopt 467 [];
  L298():
    dx56 = getTryDispatchBuiltinValue(dr54);
    goto L69(dx56);
  L299():
    goto L68(r222);
  L302():
    c75 = `as.logical`(r227);
    c76 = `||`(c70, c75);
    goto L70(c76);
  L305():
    p46 = prom<V +>{
      Rd65 = ld Rd;
      Rd66 = force? Rd65;
      checkMissing(Rd66);
      c79 = `is.object`(Rd66);
      if c79 then L1() else L2(Rd66);
    L0(dx65):
      return dx65;
    L1():
      dr60 = tryDispatchBuiltin.1("[[", Rd66);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2(dr60);
    L2(Rd68):
      __28 = ldf `[[` in base;
      r228 = dyn __28(Rd68, 2);
      goto L0(r228);
    L3():
      dx64 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx64);
    };
    p47 = prom<V +>{
      Rdfile19 = ld Rdfile;
      Rdfile20 = force? Rdfile19;
      checkMissing(Rdfile20);
      return Rdfile20;
    };
    r231 = dyn stopRd4(p46, p47, "\\name must only contain simple text");
    check L306() else D112();
  L308():
    p48 = prom<V +>{
      Rd69 = ld Rd;
      Rd70 = force? Rd69;
      checkMissing(Rd70);
      return Rd70;
    };
    p49 = prom<V +>{
      sym23 = ldf list;
      base23 = ldf list in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r235):
      return r235;
    L1():
      docTypes8 = ld docTypes;
      docTypes9 = force? docTypes8;
      checkMissing(docTypes9);
      generator = ld generator;
      generator1 = force? generator;
      checkMissing(generator1);
      list = ldf list in base;
      r236 = dyn list(docTypes9, generator1);
      goto L0(r236);
    L2():
      r234 = dyn base23[docType, generator](<sym docTypes>, <sym generator>);
      goto L0(r234);
    };
    r238 = dyn structure[, meta](p48, p49);
    check L309() else D114();
  D112():
    deopt 463 [r231];
  D114():
    deopt 471 [r238];
  L306():
    goto L72();
  L309():
    popenv;
    return r238;
  }
}
fun inner3560810862(r) {
  (reg r:*) -+> V { var r:*, reg getDynamicFlags:cls, reg r1:*, reg r2:V, reg p:p(V +), reg r4:V, reg c:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V |
    mkenv;
    st r = r;
    getDynamicFlags = ldf getDynamicFlags;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      r1 = ld r;
      r2 = force? r1;
      checkMissing(r2);
      return r2;
    };
    r4 = dyn getDynamicFlags(p);
    check L2() else D1();
  D1():
    deopt 3 [r4];
  L2():
    c = `is.object`(r4);
    if c then L3() else L4(r4);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[[", r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r6):
    __ = ldf `[[` in base;
    r7 = dyn __(r6, "render");
    goto L0(r7);
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}