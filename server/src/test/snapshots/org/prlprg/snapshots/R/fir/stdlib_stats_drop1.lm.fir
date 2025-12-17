fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner248801342;
    st `drop1.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner248801342(object, scope, scale, `all.cols`, test, k, `...`) {
  (reg object:*, reg scope:*, reg scale:*, reg all_cols:*, reg test:*, reg k:*, reg ddd:dots) -+> V { var object:*, var scope:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var `all.cols`:*, reg all_cols_isMissing:L, reg all_cols_orDefault:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var k:*, reg k_isMissing:L, reg k_orDefault:*, var `...`:dots?, reg check_exact:cls, reg object1:*, reg object2:V, reg p1:p(V +), reg r5:V, reg model_matrix:cls, reg object3:*, reg object4:V, reg p2:p(V +), reg r7:V, reg model_offset:cls, reg model_frame:cls, reg object5:*, reg object6:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg object7:*, reg object8:V, reg c1:L, reg object10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg c2:V, reg r15:V, reg nrow:cls, reg x:*, reg x1:V, reg p5:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg x2:*, reg x3:V, reg attr:cls, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg object11:*, reg object12:V, reg c3:L, reg object14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r23:V, reg attr1:cls, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg missing:cls, reg r27:V, reg c4:L, reg drop_scope:cls, reg object15:*, reg object16:V, reg p6:p(V +), reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg scope1:*, reg scope2:V, reg c5:L, reg r33:V, reg c6:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg terms:cls, reg update_formula:cls, reg object17:*, reg object18:V, reg p7:p(V +), reg scope3:*, reg scope4:V, reg p8:p(V +), reg r38:V, reg p9:p(V +), reg r40:V, reg attr2:cls, reg r41:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg scope5:*, reg scope6:V, reg tl:*, reg tl1:V, reg match:cls, reg r47:V, reg r48:V, reg all:cls, reg r49:V, reg r50:V, reg c7:L, reg stop:cls, reg r51:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg scope7:*, reg scope8:V, reg tl2:*, reg tl3:V, reg match1:cls, reg r54:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r55:V, reg r56:V, reg scope9:*, reg scope10:V, reg length:cls, reg r57:V, reg object19:*, reg object20:V, reg c8:L, reg object22:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r58:V, reg deviance_lm:cls, reg object23:*, reg object24:V, reg p10:p(V +), reg r60:V, reg numeric:cls, reg ns:*, reg ns1:V, reg p11:p(V +), reg r62:V, reg numeric1:cls, reg ns2:*, reg ns3:V, reg p12:p(V +), reg r64:V, reg object25:*, reg object26:V, reg c9:L, reg object28:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r65:V, reg object29:*, reg object30:V, reg c10:L, reg dx9:V, reg object32:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg dx13:V, reg r66:V, reg r67:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r68:V, reg r69:V, reg object33:*, reg object34:V, reg c11:L, reg object36:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg r70:V, reg r71:I, reg c12:L, reg r73:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r76:V, reg r77:V, reg r78:V, reg object37:*, reg object38:V, reg c13:L, reg r80:V, reg object40:V, reg dr14:V, reg dc7:L, reg dx18:V, reg r82:V, reg dx19:V, reg r83:V, reg is_na:cls, reg r84:V, reg r85:V, reg __:cls, reg r86:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r87:V, reg r88:V, reg ns4:*, reg ns5:V, reg r89:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c14:L, reg x4:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r90:V, reg i7:I, reg r91:V, reg asgn:*, reg asgn1:V, reg r92:I, reg c15:L, reg i9:I, reg r94:V, reg dr16:V, reg dc8:L, reg dx20:V, reg i11:I, reg dx21:V, reg asgn2:*, reg asgn3:V, reg ndrop:*, reg ndrop1:V, reg c16:L, reg i13:I, reg r96:V, reg asgn5:V, reg ndrop3:V, reg dr18:V, reg dc9:L, reg dx22:V, reg i15:I, reg r98:V, reg asgn7:V, reg dx23:V, reg i16:*, reg i17:V, reg __1:cls, reg r99:V, reg r100:V, reg __2:cls, reg r101:V, reg setdiff:cls, reg all_cols1:*, reg all_cols2:V, reg c17:L, reg seq:cls, reg ncol:cls, reg x5:*, reg x6:V, reg p13:p(V +), reg r103:V, reg p14:p(V +), reg r105:V, reg na_coef:*, reg na_coef1:V, reg p15:p(V +), reg ii:*, reg ii1:V, reg p16:p(V +), reg r108:V, reg iswt:*, reg iswt1:V, reg c18:L, reg lm_wfit:cls, reg x7:*, reg x8:V, reg c19:L, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg jj:*, reg jj1:V, reg __3:cls, reg r109:V, reg p17:p(V +), reg y:*, reg y1:V, reg p18:p(V +), reg wt:*, reg wt1:V, reg p19:p(V +), reg offset:*, reg offset1:V, reg p20:p(V +), reg r114:V, reg i20:I, reg r115:V, reg lm_fit:cls, reg x11:*, reg x12:V, reg c20:L, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg jj2:*, reg jj3:V, reg __4:cls, reg r116:V, reg p21:p(V +), reg y2:*, reg y3:V, reg p22:p(V +), reg offset2:*, reg offset3:V, reg p23:p(V +), reg r120:V, reg z:*, reg z1:V, reg c21:L, reg i22:I, reg z3:V, reg dr24:V, reg dc12:L, reg dx28:V, reg i24:I, reg dx29:V, reg r121:V, reg l1:*, reg c22:L, reg i26:I, reg dx31:V, reg l3:*, reg dr26:V, reg dc13:L, reg dx33:V, reg i28:I, reg dx35:V, reg i29:*, reg i30:V, reg ___:cls, reg r122:V, reg l4:*, reg oldClass__:cls, reg r123:V, reg deviance:cls, reg z4:*, reg z5:V, reg p24:p(V +), reg r125:V, reg l5:*, reg c23:L, reg i32:I, reg r127:V, reg l7:*, reg dr28:V, reg dc14:L, reg dx36:V, reg i34:I, reg dx37:V, reg i35:*, reg i36:V, reg ___1:cls, reg r130:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r131:V, reg r132:V, reg scope11:*, reg scope12:V, reg c24:cls, reg r133:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r134:V, reg r135:V, reg object41:*, reg object42:V, reg c25:L, reg object44:V, reg dr30:V, reg dc15:L, reg dx38:V, reg dx39:V, reg r136:V, reg dfs:*, reg dfs1:V, reg c26:cls, reg r137:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r138:V, reg r139:V, reg chisq:*, reg chisq1:V, reg RSS:*, reg RSS1:V, reg c27:cls, reg r140:V, reg scale1:*, reg scale2:V, reg r141:V, reg c28:L, reg RSS2:*, reg RSS3:V, reg scale3:*, reg scale4:V, reg r142:V, reg n:*, reg n1:V, reg r143:V, reg k1:*, reg k2:V, reg dfs2:*, reg dfs3:V, reg r144:V, reg r145:V, reg n2:*, reg n3:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r147:V, reg n6:V, reg r148:V, reg RSS4:*, reg RSS5:V, reg n7:*, reg n8:V, reg r149:V, reg r150:V, reg r151:V, reg k3:*, reg k4:V, reg dfs4:*, reg dfs5:V, reg r152:V, reg r153:V, reg dfs6:*, reg dfs7:V, reg c29:L, reg dfs9:V, reg dr32:V, reg dc16:L, reg dx40:V, reg dx41:V, reg __5:cls, reg r154:V, reg dfs10:*, reg dfs11:V, reg r155:V, reg l8:*, reg c30:L, reg r157:L, reg l10:*, reg dr34:V, reg dc17:L, reg dx42:V, reg dx43:V, reg ___2:cls, reg r160:V, reg data_frame:cls, reg dfs12:*, reg dfs13:V, reg p25:p(V +), reg sym19:cls, reg base19:cls, reg guard19:L, reg r162:V, reg r163:V, reg RSS6:*, reg RSS7:V, reg c31:L, reg RSS9:V, reg dr36:V, reg dc18:L, reg dx44:V, reg dx45:V, reg __6:cls, reg r164:V, reg RSS10:*, reg RSS11:V, reg c32:L, reg dx47:V, reg RSS13:V, reg dr38:V, reg dc19:L, reg dx49:V, reg dx50:V, reg dx51:V, reg __7:cls, reg r165:V, reg r166:V, reg c33:cls, reg r167:V, reg p26:p(V +), reg RSS14:*, reg RSS15:V, reg p27:p(V +), reg aic:*, reg aic1:V, reg p28:p(V +), reg scope13:*, reg scope14:V, reg p29:p(V +), reg r172:V, reg scale5:*, reg scale6:V, reg r173:V, reg c34:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r174:V, reg r175:V, reg c35:cls, reg r176:V, reg l11:*, reg names__:cls, reg r177:V, reg match_arg:cls, reg test1:*, reg test2:V, reg p30:p(V +), reg r180:V, reg test3:*, reg test4:V, reg r181:V, reg c36:L, reg aod:*, reg aod1:V, reg c37:L, reg aod3:V, reg dr40:V, reg dc20:L, reg dx52:V, reg dx53:V, reg r182:V, reg scale7:*, reg scale8:V, reg r183:V, reg c38:L, reg n9:*, reg n10:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r184:V, reg n13:V, reg r185:V, reg RSS16:*, reg RSS17:V, reg n14:*, reg n15:V, reg r186:V, reg r187:V, reg r188:V, reg dev:*, reg dev1:V, reg dev2:*, reg dev3:V, reg c39:L, reg dev6:V, reg dev7:V, reg dr42:V, reg dc21:L, reg dx54:V, reg dev9:V, reg dx55:V, reg __8:cls, reg r189:V, reg r190:V, reg l12:*, reg c40:L, reg r192:L, reg l14:*, reg dr44:V, reg dc22:L, reg dx56:V, reg r194:L, reg dx57:V, reg ___3:cls, reg r195:V, reg dev10:*, reg dev11:V, reg scale9:*, reg scale10:V, reg r197:V, reg aod4:*, reg aod5:V, reg c41:L, reg aod7:V, reg dr46:V, reg dc23:L, reg dx58:V, reg dx59:V, reg r198:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r199:V, reg r200:V, reg df:*, reg df1:V, reg is_na1:cls, reg r201:V, reg r202:V, reg safe_pchisq:cls, reg dev12:*, reg dev13:V, reg c42:L, reg dev15:V, reg dr48:V, reg dc24:L, reg dx60:V, reg dx61:V, reg nas:*, reg nas1:V, reg __9:cls, reg r203:V, reg p31:p(V +), reg df2:*, reg df3:V, reg c43:L, reg df5:V, reg dr50:V, reg dc25:L, reg dx62:V, reg dx63:V, reg nas2:*, reg nas3:V, reg __10:cls, reg r205:V, reg p32:p(V +), reg r207:V, reg l15:*, reg c44:L, reg r209:V, reg l17:*, reg dr52:V, reg dc26:L, reg dx64:V, reg dx65:V, reg nas4:*, reg nas5:V, reg ___4:cls, reg r212:V, reg dev16:*, reg dev17:V, reg l18:*, reg c45:L, reg dev19:V, reg dr54:V, reg dc27:L, reg dx66:V, reg dev21:V, reg dx67:V, reg ___5:cls, reg r213:V, reg test5:*, reg test6:V, reg r214:V, reg c46:L, reg aod8:*, reg aod9:V, reg c47:L, reg aod11:V, reg dr56:V, reg dc28:L, reg dx68:V, reg dx69:V, reg r215:V, reg aod12:*, reg aod13:V, reg c48:L, reg aod15:V, reg dr58:V, reg dc29:L, reg dx70:V, reg dx71:V, reg r216:V, reg object45:*, reg object46:V, reg c49:L, reg object48:V, reg dr60:V, reg dc30:L, reg dx72:V, reg dx73:V, reg r217:V, reg aod16:*, reg aod17:V, reg c50:L, reg aod19:V, reg dr62:V, reg dc31:L, reg dx74:V, reg dx75:V, reg r218:V, reg c51:L, reg dx77:V, reg dr64:V, reg dc32:L, reg dx78:V, reg dx79:V, reg __11:cls, reg r219:V, reg rdf:*, reg rdf1:V, reg r220:V, reg dev23:*, reg dev24:V, reg dfs14:*, reg dfs15:V, reg r221:V, reg rms:*, reg rms1:V, reg r222:V, reg l21:*, reg c52:L, reg r224:L, reg l23:*, reg dr66:V, reg dc33:L, reg dx80:V, reg dx81:V, reg dfs16:*, reg dfs17:V, reg r227:V, reg ___6:cls, reg r228:V, reg Fs:*, reg Fs1:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r229:V, reg r230:V, reg Fs2:*, reg Fs3:V, reg is_na2:cls, reg r231:V, reg r232:V, reg safe_pf:cls, reg Fs4:*, reg Fs5:V, reg c53:L, reg Fs7:V, reg dr68:V, reg dc34:L, reg dx82:V, reg dx83:V, reg nas6:*, reg nas7:V, reg __12:cls, reg r233:V, reg p33:p(V +), reg dfs18:*, reg dfs19:V, reg c54:L, reg dfs21:V, reg dr70:V, reg dc35:L, reg dx84:V, reg dx85:V, reg nas8:*, reg nas9:V, reg __13:cls, reg r235:V, reg p34:p(V +), reg rdf2:*, reg rdf3:V, reg p35:p(V +), reg r238:V, reg l24:*, reg c55:L, reg r240:V, reg l26:*, reg dr72:V, reg dc36:L, reg dx86:V, reg dx87:V, reg nas10:*, reg nas11:V, reg ___7:cls, reg r243:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r244:V, reg r245:V, reg Fs8:*, reg Fs9:V, reg P:*, reg P1:V, reg list:cls, reg r246:V, reg l27:*, reg c56:L, reg r248:V, reg l29:*, reg dr74:V, reg dc37:L, reg dx88:V, reg r250:V, reg dx89:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r255:V, reg r256:V, reg r257:V, reg r258:V, reg c57:cls, reg r259:V, reg ___8:cls, reg r260:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r261:V, reg r262:V, reg deparse:cls, reg formula:cls, reg object49:*, reg object50:V, reg p36:p(V +), reg r264:V, reg p37:p(V +), reg r266:V, reg scale11:*, reg scale12:V, reg r267:V, reg c58:L, reg paste:cls, reg format:cls, reg scale13:*, reg scale14:V, reg p38:p(V +), reg r269:V, reg p39:p(V +), reg r271:V, reg r272:V, reg c59:cls, reg r273:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r274:V, reg r275:V, reg c60:cls, reg r276:V, reg l33:*, reg class__:cls, reg r277:V, reg head:*, reg head1:V, reg l34:*, reg attr__:cls, reg r278:V, reg aod20:*, reg aod21:V |
    mkenv;
    st object = object;
    st scope = scope;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L0(0.0) else L0(scale);
  L0(scale_orDefault):
    st scale = scale_orDefault;
    all_cols_isMissing = missing.0(all_cols);
    if all_cols_isMissing then L1(TRUE) else L1(all_cols);
  L1(all_cols_orDefault):
    st `all.cols` = all_cols_orDefault;
    test_isMissing = missing.0(test);
    if test_isMissing then L2() else L3(test);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("none", "Chisq", "F");
      goto L0(r2);
    L2():
      r = dyn base("none", "Chisq", "F");
      goto L0(r);
    };
    goto L3(p);
  L3(test_orDefault):
    st test = test_orDefault;
    k_isMissing = missing.0(k);
    if k_isMissing then L4(2.0) else L4(k);
  L4(k_orDefault):
    st k = k_orDefault;
    st `...` = ddd;
    check_exact = ldf check_exact;
    check L66() else D0();
  D0():
    deopt 1 [];
  L66():
    p1 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r5 = dyn check_exact(p1);
    check L67() else D1();
  D1():
    deopt 3 [r5];
  L67():
    model_matrix = ldf `model.matrix`;
    check L68() else D2();
  D2():
    deopt 5 [];
  L68():
    p2 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r7 = dyn model_matrix(p2);
    check L69() else D3();
  D3():
    deopt 7 [r7];
  L69():
    st x = r7;
    model_offset = ldf `model.offset`;
    check L70() else D4();
  D4():
    deopt 10 [];
  L70():
    p4 = prom<V +>{
      model_frame = ldf `model.frame`;
      p3 = prom<V +>{
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        return object6;
      };
      r9 = dyn model_frame(p3);
      return r9;
    };
    r11 = dyn model_offset(p4);
    check L71() else D5();
  D5():
    deopt 12 [r11];
  L71():
    st offset = r11;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L72() else L73();
  L5(r13):
    r15 = `!`(r13);
    st iswt = r15;
    nrow = ldf nrow;
    check L79() else D7();
  L72():
    object7 = ld object;
    check L74() else D6();
  L73():
    r12 = dyn base1(<lang `<-`(wt, `$`(object, weights))>);
    goto L5(r12);
  D6():
    deopt 15 [object7];
  D7():
    deopt 23 [];
  L74():
    object8 = force? object7;
    checkMissing(object8);
    c1 = `is.object`(object8);
    if c1 then L76() else L77(object8);
  L79():
    p5 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r17 = dyn nrow(p5);
    check L80() else D8();
  D8():
    deopt 25 [r17];
  L75(dx1):
    st wt = dx1;
    c2 = `==`(dx1, NULL);
    goto L5(c2);
  L76():
    dr = tryDispatchBuiltin.1("$", object8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L78() else L77(dr);
  L77(object10):
    r14 = `$`(object10, <sym weights>);
    goto L75(r14);
  L80():
    st n = r17;
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L81() else L82();
  L6(r19):
    st asgn = r19;
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L85() else L86();
  L78():
    dx = getTryDispatchBuiltinValue(dr);
    goto L75(dx);
  L81():
    x2 = ld x;
    check L83() else D9();
  L82():
    r18 = dyn base2(<sym x>, "assign");
    goto L6(r18);
  D9():
    deopt 29 [x2];
  L7(r22):
    st tl = r22;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L93() else L94();
  L83():
    x3 = force? x2;
    checkMissing(x3);
    attr = ldf attr in base;
    r20 = dyn attr(x3, "assign");
    check L84() else D10();
  L85():
    object11 = ld object;
    check L87() else D11();
  L86():
    r21 = dyn base3(<lang `$`(object, terms)>, "term.labels");
    goto L7(r21);
  D10():
    deopt 33 [r20];
  D11():
    deopt 37 [object11];
  L8(r26):
    c4 = `as.logical`(r26);
    if c4 then L95() else L9();
  L84():
    goto L6(r20);
  L87():
    object12 = force? object11;
    checkMissing(object12);
    c3 = `is.object`(object12);
    if c3 then L89() else L90(object12);
  L93():
    missing = ldf missing in base;
    r27 = dyn missing(<sym scope>);
    goto L8(r27);
  L94():
    r25 = dyn base4(<sym scope>);
    goto L8(r25);
  L9():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L99() else L100();
  L10():
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L121() else L122();
  L88(dx3):
    attr1 = ldf attr in base;
    r24 = dyn attr1(dx3, "term.labels");
    check L92() else D12();
  L89():
    dr2 = tryDispatchBuiltin.1("$", object12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L91() else L90(dr2);
  L90(object14):
    r23 = `$`(object14, <sym terms>);
    goto L88(r23);
  L95():
    drop_scope = ldf `drop.scope`;
    check L96() else D13();
  D12():
    deopt 42 [r24];
  D13():
    deopt 48 [];
  L11(r32):
    r33 = `!`(r32);
    c6 = `as.logical`(r33);
    if c6 then L102() else L12();
  L18(r53):
    st ndrop = r53;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L126() else L127();
  L91():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L88(dx2);
  L92():
    goto L7(r24);
  L96():
    p6 = prom<V +>{
      object15 = ld object;
      object16 = force? object15;
      checkMissing(object16);
      return object16;
    };
    r29 = dyn drop_scope(p6);
    check L97() else D14();
  L99():
    scope1 = ld scope;
    check L101() else D15();
  L100():
    r31 = dyn base5(<sym scope>);
    goto L11(r31);
  L121():
    scope7 = ld scope;
    check L123() else D25();
  L122():
    r52 = dyn base9(<sym scope>, <sym tl>);
    goto L18(r52);
  D14():
    deopt 50 [r29];
  D15():
    deopt 53 [scope1];
  D25():
    deopt 94 [scope7];
  L12():
    goto L14();
  L14():
    sym7 = ldf all;
    base7 = ldf all in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L109() else L110();
  L19(r56):
    st ns = r56;
    object19 = ld object;
    check L130() else D30();
  L97():
    st scope = r29;
    goto L10();
  L101():
    scope2 = force? scope1;
    checkMissing(scope2);
    c5 = `is.character`(scope2);
    goto L11(c5);
  L102():
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L103() else L104();
  L123():
    scope8 = force? scope7;
    checkMissing(scope8);
    tl2 = ld tl;
    check L124() else D26();
  L126():
    scope9 = ld scope;
    check L128() else D28();
  L127():
    r55 = dyn base10(<sym scope>);
    goto L19(r55);
  D26():
    deopt 96 [tl2];
  D28():
    deopt 105 [scope9];
  D30():
    deopt 110 [object19];
  L13(r35):
    st scope = r35;
    goto L14();
  L15(r44):
    r50 = `!`(r44);
    c7 = `as.logical`(r50);
    if c7 then L117() else L17();
  L103():
    terms = ldf terms;
    check L105() else D16();
  L104():
    r34 = dyn base6(<lang terms(update.formula(object, scope))>, "term.labels");
    goto L13(r34);
  L109():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L111() else L112();
  L110():
    r43 = dyn base7(<lang `>`(match(scope, tl, 0), 0)>);
    goto L15(r43);
  L124():
    tl3 = force? tl2;
    checkMissing(tl3);
    match1 = ldf match in base;
    r54 = dyn match1(scope8, tl3, NA_INT, NULL);
    check L125() else D27();
  L128():
    scope10 = force? scope9;
    checkMissing(scope10);
    length = ldf length in base;
    r57 = dyn length(scope10);
    check L129() else D29();
  L130():
    object20 = force? object19;
    checkMissing(object20);
    c8 = `is.object`(object20);
    if c8 then L132() else L133(object20);
  D16():
    deopt 60 [];
  D27():
    deopt 101 [r54];
  D29():
    deopt 108 [r57];
  L16(r46):
    r48 = `>`(r46, 0);
    all = ldf all in base;
    r49 = dyn all(r48);
    check L116() else D22();
  L17():
    goto L10();
  L105():
    p9 = prom<V +>{
      update_formula = ldf `update.formula`;
      p7 = prom<V +>{
        object17 = ld object;
        object18 = force? object17;
        checkMissing(object18);
        return object18;
      };
      p8 = prom<V +>{
        scope3 = ld scope;
        scope4 = force? scope3;
        checkMissing(scope4);
        return scope4;
      };
      r38 = dyn update_formula(p7, p8);
      return r38;
    };
    r40 = dyn terms(p9);
    check L106() else D17();
  L111():
    scope5 = ld scope;
    check L113() else D19();
  L112():
    r45 = dyn base8(<sym scope>, <sym tl>, 0);
    goto L16(r45);
  L117():
    stop = ldf stop;
    check L118() else D23();
  L125():
    goto L18(r54);
  L129():
    goto L19(r57);
  L131(dx5):
    st rdf = dx5;
    deviance_lm = ldf `deviance.lm`;
    check L135() else D31();
  L132():
    dr4 = tryDispatchBuiltin.1("$", object20);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L134() else L133(dr4);
  L133(object22):
    r58 = `$`(object22, <sym df.residual>);
    goto L131(r58);
  D17():
    deopt 62 [r40];
  D19():
    deopt 73 [scope5];
  D22():
    deopt 84 [r49];
  D23():
    deopt 87 [];
  D31():
    deopt 115 [];
  L106():
    attr2 = ldf attr in base;
    r41 = dyn attr2(r40, "term.labels");
    check L107() else D18();
  L113():
    scope6 = force? scope5;
    checkMissing(scope6);
    tl = ld tl;
    check L114() else D20();
  L116():
    goto L15(r49);
  L118():
    r51 = dyn stop("scope is not a subset of term labels");
    check L119() else D24();
  L134():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L131(dx4);
  L135():
    p10 = prom<V +>{
      object23 = ld object;
      object24 = force? object23;
      checkMissing(object24);
      return object24;
    };
    r60 = dyn deviance_lm(p10);
    check L136() else D32();
  D18():
    deopt 65 [r41];
  D20():
    deopt 75 [tl];
  D24():
    deopt 89 [r51];
  D32():
    deopt 117 [r60];
  L107():
    goto L13(r41);
  L114():
    tl1 = force? tl;
    checkMissing(tl1);
    match = ldf match in base;
    r47 = dyn match(scope6, tl1, 0, NULL);
    check L115() else D21();
  L119():
    goto L10();
  L136():
    st chisq = r60;
    numeric = ldf numeric;
    check L137() else D33();
  D21():
    deopt 80 [r47];
  D33():
    deopt 120 [];
  L115():
    goto L16(r47);
  L137():
    p11 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      return ns1;
    };
    r62 = dyn numeric(p11);
    check L138() else D34();
  D34():
    deopt 122 [r62];
  L138():
    st dfs = r62;
    numeric1 = ldf numeric;
    check L139() else D35();
  D35():
    deopt 125 [];
  L139():
    p12 = prom<V +>{
      ns2 = ld ns;
      ns3 = force? ns2;
      checkMissing(ns3);
      return ns3;
    };
    r64 = dyn numeric1(p12);
    check L140() else D36();
  D36():
    deopt 127 [r64];
  L140():
    st RSS = r64;
    object25 = ld object;
    check L141() else D37();
  D37():
    deopt 129 [object25];
  L141():
    object26 = force? object25;
    checkMissing(object26);
    c9 = `is.object`(object26);
    if c9 then L143() else L144(object26);
  L142(dx7):
    object29 = ld object;
    check L146() else D38();
  L143():
    dr6 = tryDispatchBuiltin.1("$", object26);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L145() else L144(dr6);
  L144(object28):
    r65 = `$`(object28, <sym residuals>);
    goto L142(r65);
  D38():
    deopt 131 [dx7, object29];
  L145():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L142(dx6);
  L146():
    object30 = force? object29;
    checkMissing(object30);
    c10 = `is.object`(object30);
    if c10 then L148() else L149(dx7, object30);
  L147(dx12, dx13):
    r67 = `+`(dx12, dx13);
    st y = r67;
    sym11 = ldf seq_along;
    base11 = ldf seq_along in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L151() else L152();
  L148():
    dr8 = tryDispatchBuiltin.1("$", object30);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L150() else L149(dx7, dr8);
  L149(dx9, object32):
    r66 = `$`(object32, <sym fitted.values>);
    goto L147(dx9, r66);
  L20(r69):
    c12 = `is.object`(r69);
    if c12 then L158() else L159(r69);
  L150():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L147(dx7, dx11);
  L151():
    object33 = ld object;
    check L153() else D39();
  L152():
    r68 = dyn base11(<lang `$`(object, coefficients)>);
    goto L20(r68);
  D39():
    deopt 137 [object33];
  L21(dx17):
    st `na.coef` = dx17;
    sym13 = ldf seq_len;
    base13 = ldf seq_len in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L169() else L170();
  L153():
    object34 = force? object33;
    checkMissing(object34);
    c11 = `is.object`(object34);
    if c11 then L155() else L156(object34);
  L158():
    dr12 = tryDispatchBuiltin.1("[", r69);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L160() else L159(dr12);
  L159(r73):
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L161() else L162();
  L22(r77, r78):
    r85 = `!`(r78);
    __ = ldf `[` in base;
    r86 = dyn __(r77, r85);
    goto L21(r86);
  L23(r88):
    s = toForSeq(r88);
    l = length(s);
    i = 0;
    goto L24(i);
  L154(dx15):
    r71 = seq_along(dx15);
    goto L20(r71);
  L155():
    dr10 = tryDispatchBuiltin.1("$", object34);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L157() else L156(dr10);
  L156(object36):
    r70 = `$`(object36, <sym coefficients>);
    goto L154(r70);
  L160():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L21(dx16);
  L161():
    object37 = ld object;
    check L163() else D40();
  L162():
    r76 = dyn base12(<lang `$`(object, coefficients)>);
    goto L22(r73, r76);
  L169():
    ns4 = ld ns;
    check L171() else D42();
  L170():
    r87 = dyn base13(<sym ns>);
    goto L23(r87);
  D40():
    deopt 143 [r73, object37];
  D42():
    deopt 152 [ns4];
  L24(i1):
    i2 = `+`.1(i1, 1);
    c14 = `<`.1(l, i2);
    if c14 then L172() else L32();
  L157():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L154(dx14);
  L163():
    object38 = force? object37;
    checkMissing(object38);
    c13 = `is.object`(object38);
    if c13 then L165() else L166(r73, object38);
  L171():
    ns5 = force? ns4;
    checkMissing(ns5);
    r89 = seq_len(ns5);
    goto L23(r89);
  L32():
    x4 = `[[`(s, i2, NULL, TRUE);
    st i = x4;
    sym14 = ldf seq_along;
    base14 = ldf seq_along in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L173() else L174();
  L164(r82, dx19):
    is_na = ldf `is.na` in base;
    r84 = dyn is_na(dx19);
    check L168() else D41();
  L165():
    dr14 = tryDispatchBuiltin.1("$", object38);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L167() else L166(r73, dr14);
  L166(r80, object40):
    r83 = `$`(object40, <sym coefficients>);
    goto L164(r80, r83);
  L172():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L211() else L212();
  D41():
    deopt 147 [r82, r84];
  L25(i7, r91):
    c15 = `is.object`(r91);
    if c15 then L176() else L177(i7, r91);
  L33(r132):
    st scope = r132;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L215() else L216();
  L167():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L164(r73, dx18);
  L168():
    goto L22(r82, r84);
  L173():
    asgn = ld asgn;
    check L175() else D43();
  L174():
    r90 = dyn base14(<sym asgn>);
    goto L25(i2, r90);
  L211():
    scope11 = ld scope;
    check L213() else D61();
  L212():
    r131 = dyn base15("<none>", <sym scope>);
    goto L33(r131);
  D43():
    deopt 156 [i2, asgn];
  D61():
    deopt 222 [scope11];
  L26(i11, dx21):
    st ii = dx21;
    setdiff = ldf setdiff;
    check L185() else D47();
  L34(r135):
    st dfs = r135;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L224() else L225();
  L175():
    asgn1 = force? asgn;
    checkMissing(asgn1);
    r92 = seq_along(asgn1);
    goto L25(i2, r92);
  L176():
    dr16 = tryDispatchBuiltin.1("[", r91);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L178() else L177(i7, dr16);
  L177(i9, r94):
    asgn2 = ld asgn;
    check L179() else D44();
  L213():
    scope12 = force? scope11;
    checkMissing(scope12);
    c24 = ldf c in base;
    r133 = dyn c24("<none>", scope12);
    check L214() else D62();
  L215():
    object41 = ld object;
    check L217() else D63();
  L216():
    r134 = dyn base16(<lang `$`(object, rank)>, <sym dfs>);
    goto L34(r134);
  D44():
    deopt 159 [i9, r94, asgn2];
  D47():
    deopt 169 [i11];
  D62():
    deopt 225 [r133];
  D63():
    deopt 229 [object41];
  L35(r139):
    st RSS = r139;
    scale1 = ld scale;
    check L229() else D69();
  L178():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L26(i7, dx20);
  L179():
    asgn3 = force? asgn2;
    checkMissing(asgn3);
    ndrop = ld ndrop;
    check L180() else D45();
  L185():
    p15 = prom<V +>{
      all_cols1 = ld `all.cols`;
      all_cols2 = force? all_cols1;
      checkMissing(all_cols2);
      c17 = `as.logical`(all_cols2);
      if c17 then L1() else L0();
    L0():
      na_coef = ld `na.coef`;
      na_coef1 = force? na_coef;
      checkMissing(na_coef1);
      return na_coef1;
    L1():
      seq = ldf seq;
      p14 = prom<V +>{
        ncol = ldf ncol;
        p13 = prom<V +>{
          x5 = ld x;
          x6 = force? x5;
          checkMissing(x6);
          return x6;
        };
        r103 = dyn ncol(p13);
        return r103;
      };
      r105 = dyn seq(p14);
      return r105;
    };
    p16 = prom<V +>{
      ii = ld ii;
      ii1 = force? ii;
      checkMissing(ii1);
      return ii1;
    };
    r108 = dyn setdiff(p15, p16);
    check L186() else D48();
  L214():
    goto L33(r133);
  L217():
    object42 = force? object41;
    checkMissing(object42);
    c25 = `is.object`(object42);
    if c25 then L219() else L220(object42);
  L224():
    chisq = ld chisq;
    check L226() else D66();
  L225():
    r138 = dyn base17(<sym chisq>, <sym RSS>);
    goto L35(r138);
  D45():
    deopt 160 [i9, r94, asgn3, ndrop];
  D48():
    deopt 172 [i11, r108];
  D66():
    deopt 239 [chisq];
  D69():
    deopt 246 [scale1];
  L180():
    ndrop1 = force? ndrop;
    checkMissing(ndrop1);
    c16 = `is.object`(ndrop1);
    if c16 then L181() else L182(i9, r94, asgn3, ndrop1);
  L186():
    st jj = r108;
    iswt = ld iswt;
    check L187() else D49();
  L218(dx39):
    dfs = ld dfs;
    check L222() else D64();
  L219():
    dr30 = tryDispatchBuiltin.1("$", object42);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L221() else L220(dr30);
  L220(object44):
    r136 = `$`(object44, <sym rank>);
    goto L218(r136);
  L226():
    chisq1 = force? chisq;
    checkMissing(chisq1);
    RSS = ld RSS;
    check L227() else D67();
  L229():
    scale2 = force? scale1;
    checkMissing(scale2);
    r141 = `>`(scale2, 0.0);
    c28 = `as.logical`(r141);
    if c28 then L230() else L36();
  D49():
    deopt 174 [i11, iswt];
  D64():
    deopt 232 [dfs];
  D67():
    deopt 241 [RSS];
  L27(i15, r98, asgn7, dx23):
    r100 = `==`(asgn7, dx23);
    __2 = ldf `[` in base;
    r101 = dyn __2(r98, r100);
    goto L26(i15, r101);
  L36():
    n2 = ld n;
    check L237() else D75();
  L37():
    dfs6 = ld dfs;
    check L244() else D80();
  L181():
    dr18 = tryDispatchBuiltin.1("[", ndrop1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L183() else L182(i9, r94, asgn3, dr18);
  L182(i13, r96, asgn5, ndrop3):
    i16 = ld i;
    check L184() else D46();
  L187():
    iswt1 = force? iswt;
    checkMissing(iswt1);
    c18 = `as.logical`(iswt1);
    if c18 then L188() else L28();
  L221():
    dx38 = getTryDispatchBuiltinValue(dr30);
    goto L218(dx38);
  L222():
    dfs1 = force? dfs;
    checkMissing(dfs1);
    c26 = ldf c in base;
    r137 = dyn c26(dx39, dfs1);
    check L223() else D65();
  L227():
    RSS1 = force? RSS;
    checkMissing(RSS1);
    c27 = ldf c in base;
    r140 = dyn c27(chisq1, RSS1);
    check L228() else D68();
  L230():
    RSS2 = ld RSS;
    check L231() else D70();
  D46():
    deopt 162 [i13, r96, asgn5, ndrop3, i16];
  D65():
    deopt 235 [r137];
  D68():
    deopt 244 [r140];
  D70():
    deopt 250 [RSS2];
  D75():
    deopt 261 [n2];
  D80():
    deopt 274 [dfs6];
  L28():
    lm_fit = ldf `lm.fit`;
    check L192() else D52();
  L29(i20, r115):
    st z = r115;
    z = ld z;
    check L194() else D54();
  L183():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L27(i9, r94, asgn3, dx22);
  L184():
    i17 = force? i16;
    __1 = ldf `[` in base;
    r99 = dyn __1(ndrop3, i17);
    goto L27(i13, r96, asgn5, r99);
  L188():
    lm_wfit = ldf `lm.wfit`;
    check L189() else D50();
  L223():
    goto L34(r137);
  L228():
    goto L35(r140);
  L231():
    RSS3 = force? RSS2;
    checkMissing(RSS3);
    scale3 = ld scale;
    check L232() else D71();
  L237():
    n3 = force? n2;
    checkMissing(n3);
    sym18 = ldf log;
    base18 = ldf log in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L238() else L239();
  L244():
    dfs7 = force? dfs6;
    checkMissing(dfs7);
    c29 = `is.object`(dfs7);
    if c29 then L245() else L246(dfs7);
  D50():
    deopt 177 [i11];
  D52():
    deopt 185 [i11];
  D54():
    deopt 192 [i20, z];
  D71():
    deopt 251 [RSS3, scale3];
  L38(n6, r148):
    r151 = `*`(n6, r148);
    k3 = ld k;
    check L242() else D78();
  L39(dx41):
    dfs10 = ld dfs;
    check L248() else D81();
  L189():
    p17 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c19 = `is.object`(x8);
      if c19 then L1() else L2();
    L0(dx25):
      return dx25;
    L1():
      dr20 = tryDispatchBuiltin.1("[", x8);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2();
    L2():
      jj = ld jj;
      jj1 = force? jj;
      __3 = ldf `[` in base;
      r109 = dyn __3(x8, <missing>, jj1, FALSE);
      goto L0(r109);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx24);
    };
    p18 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p19 = prom<V +>{
      wt = ld wt;
      wt1 = force? wt;
      checkMissing(wt1);
      return wt1;
    };
    p20 = prom<V +>{
      offset = ld offset;
      offset1 = force? offset;
      checkMissing(offset1);
      return offset1;
    };
    r114 = dyn lm_wfit[, , , offset](p17, p18, p19, p20);
    check L190() else D51();
  L192():
    p21 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      c20 = `is.object`(x12);
      if c20 then L1() else L2();
    L0(dx27):
      return dx27;
    L1():
      dr22 = tryDispatchBuiltin.1("[", x12);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2();
    L2():
      jj2 = ld jj;
      jj3 = force? jj2;
      __4 = ldf `[` in base;
      r116 = dyn __4(x12, <missing>, jj3, FALSE);
      goto L0(r116);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx26);
    };
    p22 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p23 = prom<V +>{
      offset2 = ld offset;
      offset3 = force? offset2;
      checkMissing(offset3);
      return offset3;
    };
    r120 = dyn lm_fit[, , offset](p21, p22, p23);
    check L193() else D53();
  L194():
    z1 = force? z;
    checkMissing(z1);
    c21 = `is.object`(z1);
    if c21 then L196() else L197(i20, z1);
  L232():
    scale4 = force? scale3;
    checkMissing(scale4);
    r142 = `/`(RSS3, scale4);
    n = ld n;
    check L233() else D72();
  L238():
    RSS4 = ld RSS;
    check L240() else D76();
  L239():
    r147 = dyn base18(<lang `/`(RSS, n)>);
    goto L38(n3, r147);
  L245():
    dr32 = tryDispatchBuiltin.1("[", dfs7);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L247() else L246(dr32);
  L246(dfs9):
    __5 = ldf `[` in base;
    r154 = dyn __5(dfs9, 1);
    goto L39(r154);
  D51():
    deopt 183 [i11, r114];
  D53():
    deopt 190 [i11, r120];
  D72():
    deopt 253 [r142, n];
  D76():
    deopt 263 [n3, RSS4];
  D78():
    deopt 268 [r151, k3];
  D81():
    deopt 278 [dx41, dfs10];
  L190():
    goto L29(i11, r114);
  L193():
    goto L29(i11, r120);
  L195(i24, dx29):
    l1 = ld dfs;
    c22 = `is.object`(l1);
    if c22 then L199() else L200(i24, dx29, l1);
  L196():
    dr24 = tryDispatchBuiltin.1("$", z1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L198() else L197(i20, dr24);
  L197(i22, z3):
    r121 = `$`(z3, <sym rank>);
    goto L195(i22, r121);
  L233():
    n1 = force? n;
    checkMissing(n1);
    r143 = `-`(r142, n1);
    k1 = ld k;
    check L234() else D73();
  L240():
    RSS5 = force? RSS4;
    checkMissing(RSS5);
    n7 = ld n;
    check L241() else D77();
  L242():
    k4 = force? k3;
    checkMissing(k4);
    dfs4 = ld dfs;
    check L243() else D79();
  L247():
    dx40 = getTryDispatchBuiltinValue(dr32);
    goto L39(dx40);
  L248():
    dfs11 = force? dfs10;
    checkMissing(dfs11);
    r155 = `-`(dx41, dfs11);
    st dfs = r155;
    l8 = ld dfs;
    c30 = `is.object`(l8);
    if c30 then L249() else L250(NA_LGL, l8);
  D73():
    deopt 255 [r143, k1];
  D77():
    deopt 264 [n3, RSS5, n7];
  D79():
    deopt 269 [r151, k4, dfs4];
  L30(i28, dx35):
    st dfs = dx35;
    l4 = ld z;
    oldClass__ = ldf `oldClass<-`;
    check L203() else D56();
  L40(dx43):
    st dfs = dx43;
    data_frame = ldf `data.frame`;
    check L252() else D82();
  L198():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L195(i20, dx28);
  L199():
    dr26 = tryDispatchBuiltin.0("[<-", l1, dx29);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L201() else L200(i24, dx29, dr26);
  L200(i26, dx31, l3):
    i29 = ld i;
    check L202() else D55();
  L234():
    k2 = force? k1;
    checkMissing(k2);
    dfs2 = ld dfs;
    check L235() else D74();
  L241():
    n8 = force? n7;
    checkMissing(n8);
    r149 = `/`(RSS5, n8);
    r150 = log(r149, 2.718281828459045);
    goto L38(n3, r150);
  L243():
    dfs5 = force? dfs4;
    checkMissing(dfs5);
    r152 = `*`(k4, dfs5);
    r153 = `+`(r151, r152);
    st aic = r153;
    goto L37();
  L249():
    dr34 = tryDispatchBuiltin.0("[<-", l8, NA_LGL);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L251() else L250(NA_LGL, dr34);
  L250(r157, l10):
    ___2 = ldf `[<-` in base;
    r160 = dyn ___2(l10, NA_LGL, 1);
    goto L40(r160);
  D55():
    deopt 196 [i26, dx31, l3, dx29, i29];
  D56():
    deopt 203 [i28, "lm", l4, "lm"];
  D74():
    deopt 256 [r143, k2, dfs2];
  D82():
    deopt 290 [];
  L201():
    dx33 = getTryDispatchBuiltinValue(dr26);
    goto L30(i24, dx33);
  L202():
    i30 = force? i29;
    ___ = ldf `[<-` in base;
    r122 = dyn ___(l3, dx29, i30);
    goto L30(i26, r122);
  L203():
    r123 = dyn oldClass__(l4, NULL, "lm");
    check L204() else D57();
  L235():
    dfs3 = force? dfs2;
    checkMissing(dfs3);
    r144 = `*`(k2, dfs3);
    r145 = `+`(r143, r144);
    st aic = r145;
    goto L37();
  L251():
    dx42 = getTryDispatchBuiltinValue(dr34);
    goto L40(dx42);
  L252():
    p25 = prom<V +>{
      dfs12 = ld dfs;
      dfs13 = force? dfs12;
      checkMissing(dfs13);
      return dfs13;
    };
    p26 = prom<V +>{
      sym19 = ldf c;
      base19 = ldf c in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L3() else L4();
    L0(r163):
      return r163;
    L3():
      RSS6 = ld RSS;
      RSS7 = force? RSS6;
      checkMissing(RSS7);
      c31 = `is.object`(RSS7);
      if c31 then L5() else L6(RSS7);
    L4():
      r162 = dyn base19(NA_LGL, <lang `-`(`[`(RSS, `-`(1)), `[`(RSS, 1))>);
      goto L0(r162);
    L1(dx45):
      RSS10 = ld RSS;
      RSS11 = force? RSS10;
      checkMissing(RSS11);
      c32 = `is.object`(RSS11);
      if c32 then L8() else L9(dx45, RSS11);
    L5():
      dr36 = tryDispatchBuiltin.1("[", RSS7);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L7() else L6(dr36);
    L6(RSS9):
      __6 = ldf `[` in base;
      r164 = dyn __6(RSS9, -1);
      goto L1(r164);
    L2(dx50, dx51):
      r166 = `-`(dx50, dx51);
      c33 = ldf c in base;
      r167 = dyn c33(NA_LGL, r166);
      goto L0(r167);
    L7():
      dx44 = getTryDispatchBuiltinValue(dr36);
      goto L1(dx44);
    L8():
      dr38 = tryDispatchBuiltin.1("[", RSS11);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L10() else L9(dx45, dr38);
    L9(dx47, RSS13):
      __7 = ldf `[` in base;
      r165 = dyn __7(RSS13, 1);
      goto L2(dx47, r165);
    L10():
      dx49 = getTryDispatchBuiltinValue(dr38);
      goto L2(dx45, dx49);
    };
    p27 = prom<V +>{
      RSS14 = ld RSS;
      RSS15 = force? RSS14;
      checkMissing(RSS15);
      return RSS15;
    };
    p28 = prom<V +>{
      aic = ld aic;
      aic1 = force? aic;
      checkMissing(aic1);
      return aic1;
    };
    p29 = prom<V +>{
      scope13 = ld scope;
      scope14 = force? scope13;
      checkMissing(scope14);
      return scope14;
    };
    r172 = dyn data_frame[Df, `Sum of Sq`, RSS, AIC, `row.names`, `check.names`](p25, p26, p27, p28, p29, FALSE);
    check L253() else D83();
  D57():
    deopt 205 [i28, "lm", r123];
  D83():
    deopt 303 [r172];
  L204():
    st z = r123;
    deviance = ldf deviance;
    check L205() else D58();
  L253():
    st aod = r172;
    scale5 = ld scale;
    check L254() else D84();
  D58():
    deopt 208 [i28];
  D84():
    deopt 305 [scale5];
  L205():
    p24 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      return z5;
    };
    r125 = dyn deviance(p24);
    check L206() else D59();
  L254():
    scale6 = force? scale5;
    checkMissing(scale6);
    r173 = `>`(scale6, 0.0);
    c34 = `as.logical`(r173);
    if c34 then L255() else L41();
  D59():
    deopt 210 [i28, r125];
  L41():
    goto L43();
  L43():
    match_arg = ldf `match.arg`;
    check L262() else D88();
  L206():
    l5 = ld RSS;
    c23 = `is.object`(l5);
    if c23 then L207() else L208(i28, r125, l5);
  L255():
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L256() else L257();
  D88():
    deopt 325 [];
  L31(i34, dx37):
    st RSS = dx37;
    goto L24(i34);
  L42(r175):
    l11 = ld aod;
    names__ = ldf `names<-`;
    check L259() else D86();
  L207():
    dr28 = tryDispatchBuiltin.0("[<-", l5, r125);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L209() else L208(i28, r125, dr28);
  L208(i32, r127, l7):
    i35 = ld i;
    check L210() else D60();
  L256():
    c35 = ldf c in base;
    r176 = dyn c35("Df", "Sum of Sq", "RSS", "Cp");
    check L258() else D85();
  L257():
    r174 = dyn base20("Df", "Sum of Sq", "RSS", "Cp");
    goto L42(r174);
  L262():
    p30 = prom<V +>{
      test1 = ld test;
      test2 = force? test1;
      checkMissing(test2);
      return test2;
    };
    r180 = dyn match_arg(p30);
    check L263() else D89();
  D60():
    deopt 212 [i32, r127, l7, r125, i35];
  D85():
    deopt 316 [r176];
  D86():
    deopt 318 [r175, l11, r175];
  D89():
    deopt 327 [r180];
  L209():
    dx36 = getTryDispatchBuiltinValue(dr28);
    goto L31(i28, dx36);
  L210():
    i36 = force? i35;
    ___1 = ldf `[<-` in base;
    r130 = dyn ___1(l7, r125, i36);
    goto L31(i32, r130);
  L258():
    goto L42(r176);
  L259():
    r177 = dyn names__(l11, NULL, r175);
    check L260() else D87();
  L263():
    st test = r180;
    test3 = ld test;
    check L264() else D90();
  D87():
    deopt 320 [r175, r177];
  D90():
    deopt 329 [test3];
  L260():
    st aod = r177;
    goto L43();
  L264():
    test4 = force? test3;
    checkMissing(test4);
    r181 = `==`(test4, "Chisq");
    c36 = `as.logical`(r181);
    if c36 then L265() else L44();
  L44():
    test5 = ld test;
    check L309() else D107();
  L53():
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L365() else L366();
  L265():
    aod = ld aod;
    check L266() else D91();
  D91():
    deopt 333 [aod];
  D107():
    deopt 402 [test5];
  L62(r262):
    st head = r262;
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L375() else L376();
  L266():
    aod1 = force? aod;
    checkMissing(aod1);
    c37 = `is.object`(aod1);
    if c37 then L268() else L269(aod1);
  L309():
    test6 = force? test5;
    checkMissing(test6);
    r214 = `==`(test6, "F");
    c46 = `as.logical`(r214);
    if c46 then L310() else L54();
  L365():
    deparse = ldf deparse;
    check L367() else D127();
  L366():
    r261 = dyn base26("Single term deletions", "\nModel:", <lang deparse(formula(object))>, <lang if(`>`(scale, 0.0), paste("\nscale: ", format(scale), "\n"))>);
    goto L62(r261);
  D127():
    deopt 493 [];
  L54():
    goto L53();
  L65(r275):
    l33 = ld aod;
    class__ = ldf `class<-`;
    check L378() else D134();
  L267(dx53):
    st dev = dx53;
    scale7 = ld scale;
    check L271() else D92();
  L268():
    dr40 = tryDispatchBuiltin.1("$", aod1);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L270() else L269(dr40);
  L269(aod3):
    r182 = `$`(aod3, <sym `Sum of Sq`>);
    goto L267(r182);
  L310():
    aod8 = ld aod;
    check L311() else D108();
  L367():
    p37 = prom<V +>{
      formula = ldf formula;
      p36 = prom<V +>{
        object49 = ld object;
        object50 = force? object49;
        checkMissing(object50);
        return object50;
      };
      r264 = dyn formula(p36);
      return r264;
    };
    r266 = dyn deparse(p37);
    check L368() else D128();
  L375():
    c60 = ldf c in base;
    r276 = dyn c60("anova", "data.frame");
    check L377() else D133();
  L376():
    r274 = dyn base27("anova", "data.frame");
    goto L65(r274);
  D92():
    deopt 337 [scale7];
  D108():
    deopt 406 [aod8];
  D128():
    deopt 495 [r266];
  D133():
    deopt 516 [r276];
  D134():
    deopt 518 [r275, l33, r275];
  L270():
    dx52 = getTryDispatchBuiltinValue(dr40);
    goto L267(dx52);
  L271():
    scale8 = force? scale7;
    checkMissing(scale8);
    r183 = `==`(scale8, 0.0);
    c38 = `as.logical`(r183);
    if c38 then L272() else L45();
  L311():
    aod9 = force? aod8;
    checkMissing(aod9);
    c47 = `is.object`(aod9);
    if c47 then L313() else L314(aod9);
  L368():
    scale11 = ld scale;
    check L369() else D129();
  L377():
    goto L65(r276);
  L378():
    r277 = dyn class__(l33, NULL, r275);
    check L379() else D135();
  D129():
    deopt 496 [scale11];
  D135():
    deopt 520 [r275, r277];
  L45():
    dev10 = ld dev;
    check L287() else D98();
  L49():
    aod4 = ld aod;
    check L289() else D100();
  L272():
    n9 = ld n;
    check L273() else D93();
  L312(dx69):
    st dev = dx69;
    aod12 = ld aod;
    check L316() else D109();
  L313():
    dr56 = tryDispatchBuiltin.1("$", aod9);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L315() else L314(dr56);
  L314(aod11):
    r215 = `$`(aod11, <sym `Sum of Sq`>);
    goto L312(r215);
  L369():
    scale12 = force? scale11;
    checkMissing(scale12);
    r267 = `>`(scale12, 0.0);
    c58 = `as.logical`(r267);
    if c58 then L370() else L63();
  L379():
    st aod = r277;
    head = ld head;
    check L380() else D136();
  D93():
    deopt 341 [n9];
  D98():
    deopt 365 [dev10];
  D100():
    deopt 370 [aod4];
  D109():
    deopt 410 [aod12];
  D136():
    deopt 522 [head];
  L63():
    goto L64(NULL);
  L64(r272):
    c59 = ldf c in base;
    r273 = dyn c59("Single term deletions", "\nModel:", r266, r272);
    check L374() else D132();
  L273():
    n10 = force? n9;
    checkMissing(n10);
    sym21 = ldf log;
    base21 = ldf log in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L274() else L275();
  L287():
    dev11 = force? dev10;
    checkMissing(dev11);
    scale9 = ld scale;
    check L288() else D99();
  L289():
    aod5 = force? aod4;
    checkMissing(aod5);
    c41 = `is.object`(aod5);
    if c41 then L291() else L292(aod5);
  L315():
    dx68 = getTryDispatchBuiltinValue(dr56);
    goto L312(dx68);
  L316():
    aod13 = force? aod12;
    checkMissing(aod13);
    c48 = `is.object`(aod13);
    if c48 then L318() else L319(aod13);
  L370():
    paste = ldf paste;
    check L371() else D130();
  L380():
    head1 = force? head;
    checkMissing(head1);
    l34 = ld aod;
    attr__ = ldf `attr<-`;
    check L381() else D137();
  D99():
    deopt 366 [dev11, scale9];
  D130():
    deopt 501 [];
  D132():
    deopt 509 [r273];
  D137():
    deopt 525 [head1, l34, head1];
  L46(n13, r185):
    r188 = `*`(n13, r185);
    st dev = r188;
    dev = ld dev;
    check L278() else D96();
  L274():
    RSS16 = ld RSS;
    check L276() else D94();
  L275():
    r184 = dyn base21(<lang `/`(RSS, n)>);
    goto L46(n10, r184);
  L288():
    scale10 = force? scale9;
    checkMissing(scale10);
    r197 = `/`(dev11, scale10);
    st dev = r197;
    goto L49();
  L290(dx59):
    st df = dx59;
    sym22 = ldf `is.na`;
    base22 = ldf `is.na` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L294() else L295();
  L291():
    dr46 = tryDispatchBuiltin.1("$", aod5);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L293() else L292(dr46);
  L292(aod7):
    r198 = `$`(aod7, <sym Df>);
    goto L290(r198);
  L317(dx71):
    st dfs = dx71;
    object45 = ld object;
    check L321() else D110();
  L318():
    dr58 = tryDispatchBuiltin.1("$", aod13);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L320() else L319(dr58);
  L319(aod15):
    r216 = `$`(aod15, <sym Df>);
    goto L317(r216);
  L371():
    p39 = prom<V +>{
      format = ldf format;
      p38 = prom<V +>{
        scale13 = ld scale;
        scale14 = force? scale13;
        checkMissing(scale14);
        return scale14;
      };
      r269 = dyn format(p38);
      return r269;
    };
    r271 = dyn paste("\nscale: ", p39, "\n");
    check L372() else D131();
  L374():
    goto L62(r273);
  L381():
    r278 = dyn attr__(l34, NULL, "heading", head1);
    check L382() else D138();
  D94():
    deopt 343 [n10, RSS16];
  D96():
    deopt 350 [dev];
  D110():
    deopt 414 [object45];
  D131():
    deopt 505 [r271];
  D138():
    deopt 528 [head1, r278];
  L50(r200):
    r202 = `!`(r200);
    st nas = r202;
    safe_pchisq = ldf safe_pchisq;
    check L298() else D103();
  L276():
    RSS17 = force? RSS16;
    checkMissing(RSS17);
    n14 = ld n;
    check L277() else D95();
  L278():
    dev1 = force? dev;
    checkMissing(dev1);
    dev2 = ld dev;
    check L279() else D97();
  L293():
    dx58 = getTryDispatchBuiltinValue(dr46);
    goto L290(dx58);
  L294():
    df = ld df;
    check L296() else D101();
  L295():
    r199 = dyn base22(<sym df>);
    goto L50(r199);
  L320():
    dx70 = getTryDispatchBuiltinValue(dr58);
    goto L317(dx70);
  L321():
    object46 = force? object45;
    checkMissing(object46);
    c49 = `is.object`(object46);
    if c49 then L323() else L324(object46);
  L372():
    goto L64(r271);
  L382():
    st aod = r278;
    aod20 = ld aod;
    check L383() else D139();
  D95():
    deopt 344 [n10, RSS17, n14];
  D97():
    deopt 351 [dev1, dev2];
  D101():
    deopt 376 [df];
  D103():
    deopt 383 [];
  D139():
    deopt 530 [aod20];
  L277():
    n15 = force? n14;
    checkMissing(n15);
    r186 = `/`(RSS17, n15);
    r187 = log(r186, 2.718281828459045);
    goto L46(n10, r187);
  L279():
    dev3 = force? dev2;
    checkMissing(dev3);
    c39 = `is.object`(dev3);
    if c39 then L280() else L281(dev1, dev3);
  L296():
    df1 = force? df;
    checkMissing(df1);
    is_na1 = ldf `is.na` in base;
    r201 = dyn is_na1(df1);
    check L297() else D102();
  L298():
    p31 = prom<V +>{
      dev12 = ld dev;
      dev13 = force? dev12;
      checkMissing(dev13);
      c42 = `is.object`(dev13);
      if c42 then L1() else L2(dev13);
    L0(dx61):
      return dx61;
    L1():
      dr48 = tryDispatchBuiltin.1("[", dev13);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(dev15):
      nas = ld nas;
      nas1 = force? nas;
      __9 = ldf `[` in base;
      r203 = dyn __9(dev15, nas1);
      goto L0(r203);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx60);
    };
    p32 = prom<V +>{
      df2 = ld df;
      df3 = force? df2;
      checkMissing(df3);
      c43 = `is.object`(df3);
      if c43 then L1() else L2(df3);
    L0(dx63):
      return dx63;
    L1():
      dr50 = tryDispatchBuiltin.1("[", df3);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(df5):
      nas2 = ld nas;
      nas3 = force? nas2;
      __10 = ldf `[` in base;
      r205 = dyn __10(df5, nas3);
      goto L0(r205);
    L3():
      dx62 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx62);
    };
    r207 = dyn safe_pchisq[, , `lower.tail`](p31, p32, FALSE);
    check L299() else D104();
  L322(dx73):
    st rdf = dx73;
    aod16 = ld aod;
    check L326() else D111();
  L323():
    dr60 = tryDispatchBuiltin.1("$", object46);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L325() else L324(dr60);
  L324(object48):
    r217 = `$`(object48, <sym df.residual>);
    goto L322(r217);
  L383():
    aod21 = force? aod20;
    checkMissing(aod21);
    popenv;
    return aod21;
  D102():
    deopt 379 [r201];
  D104():
    deopt 388 [r207];
  D111():
    deopt 418 [aod16];
  L47(dev9, dx55):
    r190 = `-`(dev9, dx55);
    st dev = r190;
    l12 = ld dev;
    c40 = `is.object`(l12);
    if c40 then L283() else L284(NA_LGL, l12);
  L280():
    dr42 = tryDispatchBuiltin.1("[", dev3);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L282() else L281(dev1, dr42);
  L281(dev6, dev7):
    __8 = ldf `[` in base;
    r189 = dyn __8(dev7, 1);
    goto L47(dev6, r189);
  L297():
    goto L50(r201);
  L299():
    l15 = ld dev;
    c44 = `is.object`(l15);
    if c44 then L300() else L301(r207, l15);
  L325():
    dx72 = getTryDispatchBuiltinValue(dr60);
    goto L322(dx72);
  L326():
    aod17 = force? aod16;
    checkMissing(aod17);
    c50 = `is.object`(aod17);
    if c50 then L328() else L329(aod17);
  L48(r194, dx57):
    st dev = dx57;
    goto L49();
  L51(dx65):
    st dev = dx65;
    dev16 = ld dev;
    check L304() else D106();
  L282():
    dx54 = getTryDispatchBuiltinValue(dr42);
    goto L47(dev1, dx54);
  L283():
    dr44 = tryDispatchBuiltin.0("[<-", l12, NA_LGL);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L285() else L284(NA_LGL, dr44);
  L284(r192, l14):
    ___3 = ldf `[<-` in base;
    r195 = dyn ___3(l14, NA_LGL, 1);
    goto L48(r192, r195);
  L300():
    dr52 = tryDispatchBuiltin.0("[<-", l15, r207);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L302() else L301(r207, dr52);
  L301(r209, l17):
    nas4 = ld nas;
    check L303() else D105();
  L327(dx75):
    c51 = `is.object`(dx75);
    if c51 then L331() else L332(dx75);
  L328():
    dr62 = tryDispatchBuiltin.1("$", aod17);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L330() else L329(dr62);
  L329(aod19):
    r218 = `$`(aod19, <sym RSS>);
    goto L327(r218);
  D105():
    deopt 390 [r209, l17, r207, nas4];
  D106():
    deopt 394 [dev16];
  L55(dx79):
    rdf = ld rdf;
    check L334() else D112();
  L285():
    dx56 = getTryDispatchBuiltinValue(dr44);
    goto L48(NA_LGL, dx56);
  L302():
    dx64 = getTryDispatchBuiltinValue(dr52);
    goto L51(dx64);
  L303():
    nas5 = force? nas4;
    ___4 = ldf `[<-` in base;
    r212 = dyn ___4(l17, r207, nas5);
    goto L51(r212);
  L304():
    dev17 = force? dev16;
    checkMissing(dev17);
    l18 = ld aod;
    c45 = `is.object`(l18);
    if c45 then L305() else L306(dev17);
  L330():
    dx74 = getTryDispatchBuiltinValue(dr62);
    goto L327(dx74);
  L331():
    dr64 = tryDispatchBuiltin.1("[", dx75);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L333() else L332(dr64);
  L332(dx77):
    __11 = ldf `[` in base;
    r219 = dyn __11(dx77, 1);
    goto L55(r219);
  D112():
    deopt 423 [dx79, rdf];
  L52(dev21, dx67):
    st aod = dx67;
    goto L53();
  L305():
    dr54 = tryDispatchBuiltin.0("[<-", l18, dev17);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L307() else L306(dev17);
  L306(dev19):
    ___5 = ldf `[<-` in base;
    r213 = dyn ___5(l18, <missing>, "Pr(>Chi)", dev17);
    goto L52(dev19, r213);
  L333():
    dx78 = getTryDispatchBuiltinValue(dr64);
    goto L55(dx78);
  L334():
    rdf1 = force? rdf;
    checkMissing(rdf1);
    r220 = `/`(dx79, rdf1);
    st rms = r220;
    dev23 = ld dev;
    check L335() else D113();
  D113():
    deopt 427 [dev23];
  L307():
    dx66 = getTryDispatchBuiltinValue(dr54);
    goto L52(dev17, dx66);
  L335():
    dev24 = force? dev23;
    checkMissing(dev24);
    dfs14 = ld dfs;
    check L336() else D114();
  D114():
    deopt 428 [dev24, dfs14];
  L336():
    dfs15 = force? dfs14;
    checkMissing(dfs15);
    r221 = `/`(dev24, dfs15);
    rms = ld rms;
    check L337() else D115();
  D115():
    deopt 430 [r221, rms];
  L337():
    rms1 = force? rms;
    checkMissing(rms1);
    r222 = `/`(r221, rms1);
    st Fs = r222;
    l21 = ld Fs;
    c52 = `is.object`(l21);
    if c52 then L338() else L339(NA_LGL, l21);
  L56(dx81):
    st Fs = dx81;
    Fs = ld Fs;
    check L342() else D117();
  L338():
    dr66 = tryDispatchBuiltin.0("[<-", l21, NA_LGL);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L340() else L339(NA_LGL, dr66);
  L339(r224, l23):
    dfs16 = ld dfs;
    check L341() else D116();
  D116():
    deopt 437 [r224, l23, NA_LGL, dfs16];
  D117():
    deopt 443 [Fs];
  L340():
    dx80 = getTryDispatchBuiltinValue(dr66);
    goto L56(dx80);
  L341():
    dfs17 = force? dfs16;
    checkMissing(dfs17);
    r227 = `<`(dfs17, 1.0E-4);
    ___6 = ldf `[<-` in base;
    r228 = dyn ___6(l23, NA_LGL, r227);
    goto L56(r228);
  L342():
    Fs1 = force? Fs;
    checkMissing(Fs1);
    st P = Fs1;
    sym23 = ldf `is.na`;
    base23 = ldf `is.na` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L343() else L344();
  L57(r230):
    r232 = `!`(r230);
    st nas = r232;
    safe_pf = ldf safe_pf;
    check L347() else D120();
  L343():
    Fs2 = ld Fs;
    check L345() else D118();
  L344():
    r229 = dyn base23(<sym Fs>);
    goto L57(r229);
  D118():
    deopt 448 [Fs2];
  D120():
    deopt 455 [];
  L345():
    Fs3 = force? Fs2;
    checkMissing(Fs3);
    is_na2 = ldf `is.na` in base;
    r231 = dyn is_na2(Fs3);
    check L346() else D119();
  L347():
    p33 = prom<V +>{
      Fs4 = ld Fs;
      Fs5 = force? Fs4;
      checkMissing(Fs5);
      c53 = `is.object`(Fs5);
      if c53 then L1() else L2(Fs5);
    L0(dx83):
      return dx83;
    L1():
      dr68 = tryDispatchBuiltin.1("[", Fs5);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L3() else L2(dr68);
    L2(Fs7):
      nas6 = ld nas;
      nas7 = force? nas6;
      __12 = ldf `[` in base;
      r233 = dyn __12(Fs7, nas7);
      goto L0(r233);
    L3():
      dx82 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx82);
    };
    p34 = prom<V +>{
      dfs18 = ld dfs;
      dfs19 = force? dfs18;
      checkMissing(dfs19);
      c54 = `is.object`(dfs19);
      if c54 then L1() else L2(dfs19);
    L0(dx85):
      return dx85;
    L1():
      dr70 = tryDispatchBuiltin.1("[", dfs19);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L3() else L2(dr70);
    L2(dfs21):
      nas8 = ld nas;
      nas9 = force? nas8;
      __13 = ldf `[` in base;
      r235 = dyn __13(dfs21, nas9);
      goto L0(r235);
    L3():
      dx84 = getTryDispatchBuiltinValue(dr70);
      goto L0(dx84);
    };
    p35 = prom<V +>{
      rdf2 = ld rdf;
      rdf3 = force? rdf2;
      checkMissing(rdf3);
      return rdf3;
    };
    r238 = dyn safe_pf[, , , `lower.tail`](p33, p34, p35, FALSE);
    check L348() else D121();
  D119():
    deopt 451 [r231];
  D121():
    deopt 461 [r238];
  L346():
    goto L57(r231);
  L348():
    l24 = ld P;
    c55 = `is.object`(l24);
    if c55 then L349() else L350(r238, l24);
  L58(dx87):
    st P = dx87;
    sym24 = ldf list;
    base24 = ldf list in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L353() else L354();
  L349():
    dr72 = tryDispatchBuiltin.0("[<-", l24, r238);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L351() else L350(r238, dr72);
  L350(r240, l26):
    nas10 = ld nas;
    check L352() else D122();
  D122():
    deopt 463 [r240, l26, r238, nas10];
  L59(r245):
    l27 = ld aod;
    c56 = `is.object`(l27);
    if c56 then L358() else L359(r245, l27);
  L351():
    dx86 = getTryDispatchBuiltinValue(dr72);
    goto L58(dx86);
  L352():
    nas11 = force? nas10;
    ___7 = ldf `[<-` in base;
    r243 = dyn ___7(l26, r238, nas11);
    goto L58(r243);
  L353():
    Fs8 = ld Fs;
    check L355() else D123();
  L354():
    r244 = dyn base24(<sym Fs>, <sym P>);
    goto L59(r244);
  D123():
    deopt 469 [Fs8];
  L60(r250, dx89):
    st aod = dx89;
    goto L53();
  L355():
    Fs9 = force? Fs8;
    checkMissing(Fs9);
    P = ld P;
    check L356() else D124();
  L358():
    dr74 = tryDispatchBuiltin.0("[<-", l27, r245);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L360() else L359(r245, dr74);
  L359(r248, l29):
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L361() else L362();
  D124():
    deopt 471 [P];
  L61(r256, r257, r258):
    ___8 = ldf `[<-` in base;
    r260 = dyn ___8(l27, <missing>, r258, r257);
    goto L60(r256, r260);
  L356():
    P1 = force? P;
    checkMissing(P1);
    list = ldf list in base;
    r246 = dyn list(Fs9, P1);
    check L357() else D125();
  L360():
    dx88 = getTryDispatchBuiltinValue(dr74);
    goto L60(r245, dx88);
  L361():
    c57 = ldf c in base;
    r259 = dyn c57("F value", "Pr(>F)");
    check L363() else D126();
  L362():
    r255 = dyn base25("F value", "Pr(>F)");
    goto L61(r248, r245, r255);
  D125():
    deopt 474 [r246];
  D126():
    deopt 482 [r248, l29, r245, r259];
  L357():
    goto L59(r246);
  L363():
    goto L61(r248, r245, r259);
  }
}