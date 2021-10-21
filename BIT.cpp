
// AT times we might even need to create a BIT so that can easily be done by using update function


vector<ll> BIT;
void update(ll i,ll inc,ll N){
if(i==0) return;
while(i<=N){
    BIT[i]+=inc;
    i+=(i&(-i));
}
}

ll query(ll i){
 ll sum=0;
 while(i>0){
    sum+=BIT[i];
    i-=(i&(-i));
 }
 return(sum);   
}
