#ifndef __GRAPH__H__
#define __GRAPH__H__
/* Définition d'un Booléen */
    typedef enum
    {
        false,
        true
    }Bool;

/* Définition d'un noeud/sommet */
    typedef struct NodeListElement
    {
        int value;
        struct NodeListElement *next;
    }NodeListElement, *NodeList;

/* Définition d'une liste d'adjacence */
    typedef struct AdjencyListElement
    {
        NodeListElement *begin;
    }AdjencyListElement, *AdjencyList;

/* Définition d'un Graphe */
    typedef struct GraphElement
    {
        Bool is_oriented;
        int nb_vertices; //nombre sommets/arêtes "map arretes = villes"
        AdjencyList tab_neighbours;
        FILE *graph_file;
    }GraphElement, *Graph;

/* Prototypes */
    Graph new_graph(int vertices, Bool is_oriented);
    Bool is_empty_graph(Graph g);
    NodeList add_node(int x);
    void add_edge(Graph g, int src, int dest);
    void print_graph(Graph g); //afficher en console
    void display_graph(Graph g);
    void erase_graph(Graph g);


#endif

//Graph g == GraphElement *g