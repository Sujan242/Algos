#psuedo code or only parts of the code

def boggleboard(board,words):
	trie=Trie()
	for word in words:
		trie.add(word)
    vis=[[0 for _ in range(len(board))] for _ in range(board[0]) ]
    st=set([])
	for i in range(len(board)):
		for j in range(len(board[i])):
			explore(i,j,trie.root,board,vis,st)

    return st

def explore(i,j,board,trie,vis,st):
	if(vis[i][j]==1):
		return 

	if board[i][j] not in trie:
		return 

	trie=trie[board[i][j]]
	vis[i][j]=1
	if "*" in trie:
		st.add(trie["*"])
	neighbour=get_neighbours(i,j,board)
	for u,v in neighbour:
		if board[u][v] in trie:
			explore(u,v,board,trie,vis,st)
	vis[u][v]=0

def get_neighbours():
	pass
	# returns all valid neighbours of 8 adjacent neighbours
class Trie:
	pass
	#Trie implemented


