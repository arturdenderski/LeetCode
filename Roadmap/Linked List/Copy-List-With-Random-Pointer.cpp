class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
        
        Node* new_head = new Node(head->val);
        Node* helper_old = head->next;
        Node* helper_new = new_head;
        unordered_map<Node*, Node*> random_nodes_map;
        random_nodes_map.insert(make_pair(head, new_head));

        while(helper_old)
        {
            helper_new->next = new Node(helper_old->val);
            helper_new=helper_new->next;
            random_nodes_map.insert(make_pair(helper_old, helper_new));
            helper_old=helper_old->next;
        }

        helper_old = head;
        helper_new = new_head;

        while(helper_old)
        {
            helper_new->random = random_nodes_map[helper_old->random];
            helper_new=helper_new->next;
            helper_old=helper_old->next;
        }

        return new_head;
    }
};
